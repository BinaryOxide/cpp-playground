#include <iostream>
#include <fstream>

int main() {
    const int width = 800; // Width of each frame
    const int height = 600; // Height of each frame
    const int numFrames = 100; // Total number of frames
    const std string filename = "F:\VIDEO\animenapinsta.app_video_427492832_398977289480577_2639421080457633108_n.mp4"; 
    // file path 

    FILE* fp = fopen(filename.c_str(), "rb");
    if (!fp) {
        std::cerr << "Error opening raw RGB video file." << std::endl;
        return -1;
    }

    unsigned char* rawData = new unsigned char[width * height * 3]; // Assuming 24-bit RGB
    for (int frameIndex = 0; frameIndex < numFrames; ++frameIndex) {
        fread(rawData, 1, width * height * 3, fp); // Read one frame
        // Process the frame (e.g., display it)
    }

    fclose(fp);
    delete[] rawData;




    
    return 0;
}
