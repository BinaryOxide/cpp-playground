#include <iostream>
#include <filesystem>
#include <string>
#include <unordered_set>
#include <cctype>

namespace fs = std::filesystem;

bool has_extension(const fs::path& path, const std::unordered_set<std::string>& exts) {
    std::string ext = path.extension().string();
    for (auto& c : ext) c = std::tolower(c);
    return exts.find(ext) != exts.end();
}

int main() {
    std::string input;
    std::cout << "Enter folder location: ";
    std::getline(std::cin, input);
    fs::path root(input);

    if (!fs::exists(root) || !fs::is_directory(root)) {
        std::cerr << "Invalid folder path.\n";
        return 1;
    }

    // File type extensions
    std::unordered_set<std::string> photo_ext = {".jpg", ".jpeg", ".png", ".bmp", ".gif", ".tiff", ".webp"};
    std::unordered_set<std::string> video_ext = {".mp4", ".mkv", ".mov", ".avi", ".flv", ".wmv", ".webm"};
    std::unordered_set<std::string> audio_ext = {".mp3", ".wav", ".aac", ".flac", ".ogg", ".m4a"};
    std::unordered_set<std::string> zip_ext   = {".zip", ".rar", ".7z", ".tar", ".gz"};
    std::unordered_set<std::string> exe_ext   = {".exe", ".msi"};

    // Counters
    size_t folder_count = 0;
    size_t total_photos = 0, total_videos = 0, total_audios = 0;
    size_t total_zips = 0, total_exes = 0;
    uintmax_t total_size = 0;

    for (auto const& entry : fs::recursive_directory_iterator(root, fs::directory_options::skip_permission_denied)) {
        try {
            if (entry.is_directory()) {
                ++folder_count;
            } else if (entry.is_regular_file()) {
                total_size += entry.file_size();

                if (has_extension(entry.path(), photo_ext)) ++total_photos;
                else if (has_extension(entry.path(), video_ext)) ++total_videos;
                else if (has_extension(entry.path(), audio_ext)) ++total_audios;
                else if (has_extension(entry.path(), zip_ext)) ++total_zips;
                else if (has_extension(entry.path(), exe_ext)) ++total_exes;
            }
        } catch (const std::exception& e) {
            std::cerr << "Skipping: " << entry.path() << " (" << e.what() << ")\n";
        }
    }

    std::cout << "\nProperties:\n";
    std::cout << "Total folders     : " << folder_count << "\n";
    std::cout << "Total space       : " << (total_size / (1024 * 1024)) << " MB\n";
    std::cout << "Total photos      : " << total_photos << "\n";
    std::cout << "Total videos      : " << total_videos << "\n";
    std::cout << "Total audios      : " << total_audios << "\n";
    std::cout << "Total zip files   : " << total_zips << "\n";
    std::cout << "Total exe count   : " << total_exes << "\n";

    return 0;
}
