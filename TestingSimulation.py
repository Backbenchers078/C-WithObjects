import numpy as np
import matplotlib.pyplot as plt
import matplotlib.patches as patches
import matplotlib.animation as animation

# Initialize the figure and axis
fig, ax = plt.subplots()
ax.set_xlim(0, 10)
ax.set_ylim(0, 5)

# Create the car body
car_body = patches.Rectangle((0, 1), 2, 1, facecolor='blue')

# Create the wheels
wheel1 = patches.Circle((0.5, 0.8), 0.2, facecolor='black')
wheel2 = patches.Circle((1.5, 0.8), 0.2, facecolor='black')

# Add the car parts to the plot
ax.add_patch(car_body)
ax.add_patch(wheel1)
ax.add_patch(wheel2)

# Function to update the car's position
def update(frame):
    x = frame / 10
    car_body.set_xy((x, 1))
    wheel1.center = (x + 0.5, 0.8)
    wheel2.center = (x + 1.5, 0.8)
    return car_body, wheel1, wheel2

# Create the animation
ani = animation.FuncAnimation(
    fig, update, frames=np.arange(0, 100), interval=50, blit=True
)

# Display the animation
plt.show()
