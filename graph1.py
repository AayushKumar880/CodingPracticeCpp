import numpy as np
import matplotlib.pyplot as plt

# Damped Oscillation
def damped_oscillation(t, A, omega, gamma):
    return A * np.exp(-gamma * t) * np.cos(omega * t)

# Overdamped Oscillation
def overdamped_oscillation(t, A, B, gamma):
    return A * np.exp(-gamma*t) + B * np.exp(-gamma * t)

# Critical Damped Oscillation
def critical_damped_oscillation(t, A, omega, B):
    return (A + B*t) * np.exp(-omega * t)

# Time points
t = np.linspace(0, 10, 1000)

# Parameters
A = 1
omega = 20
gamma_damped = 0.5
gamma_overdamped = 2
B = 1

# Plotting
fig = plt.figure(figsize=(10, 6))

# Damped Oscillation
plt.subplot(3, 1, 1)
plt.plot(t, damped_oscillation(t, A, omega, gamma_damped),
         color = 'red' , linestyle = 'solid',
         linewidth = 2, marker = 'o',
         markersize = 2, markerfacecolor = 'pink',
         markeredgecolor = 'blue')
plt.title('Damped Oscillation')
plt.xlabel('Time')
plt.ylabel('Amplitude')

# Overdamped Oscillation
plt.subplot(3, 1, 2)
plt.plot(t, overdamped_oscillation(t, A, omega, gamma_overdamped),
         color = 'red' , linestyle = 'solid',
         linewidth = 2, marker = 'o',
         markersize = 2, markerfacecolor = 'pink',
         markeredgecolor = 'blue')
plt.title('Overdamped Oscillation')
plt.xlabel('Time')
plt.ylabel('Amplitude')

# Critical Damped Oscillation
plt.subplot(3, 1, 3)
plt.plot(t, critical_damped_oscillation(t, A, omega,B),
         color = 'red' , linestyle = 'solid',
         linewidth = 2, marker = 'o',
         markersize = 2, markerfacecolor = 'pink',
         markeredgecolor = 'blue')
plt.title('Critical Damped Oscillation')
plt.xlabel('Time')
plt.ylabel('Amplitude')

fig.text(0.9, 0.15, 'Aayush Kumar 22JE0012', 
         fontsize = 8, color ='green',
         ha ='right', va ='bottom', 
         alpha = 0.7)

plt.tight_layout()
plt.show()