
import matplotlib.pyplot as plt

# Data for plotting
x = [1, 2, 3, 4, 5]
y = [2, 3, 5, 7, 11]

# Create a new figure
plt.figure()

# Plot the data
plt.plot(x, y, marker='o', linestyle='-', color='b', label='Line Plot')

# Add titles and labels
plt.title('Simple Line Plot')
plt.xlabel('X Axis Label')
plt.ylabel('Y Axis Label')

# Show legend
plt.legend()

# Display the plot
plt.show()
