import matplotlib.pyplot as plt
import matplotlib.animation as animation

fig, ax = plt.subplots()

def animate(i):
    x = [1, 2, 3, 4, 5]
    y = [i * 1, i * 2, i * 3, i * 4, i * 5]
    ax.clear()
    ax.plot(x, y)

ani = animation.FuncAnimation(fig, animate, frames=10, interval=1000)
plt.show()
