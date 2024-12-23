import matplotlib.pyplot as plt
import numpy as np
import math
#creating x and y
x = np.linspace(0,1,100)
y = 2* np.exp(-2.5*x) * np.cos(25*x + 0.1675)

fig = plt.figure(figsize= (12, 7))

#create the plot
plt.plot(x, y, alpha = 0.4,
         label = 'A*exp(-gamma/2*t)*cos(w*t + alpha)',
         color ='violet', linestyle ='dashed',
         linewidth = 2, marker ='o', 
         markersize = 5, markerfacecolor ='pink',
         markeredgecolor ='blue')

#adding a title
plt.title('Damped Oscillation')
#adding labels for x and y
plt.xlabel('Time')
plt.ylabel('Amplitude')
#adding my watermark
fig.text(0.9, 0.15, 'Aastha Margaj 22JE0010', 
         fontsize = 12, color ='blue',
         ha ='right', va ='bottom', 
         alpha = 0.7)
plt.legend()
plt.show()