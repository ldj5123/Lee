import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns

sns.set()
import warnings

warnings.simplefilter('ignore', UserWarning)

uniform = np.random.uniform(0, 1, 1000000)

normal = np.random.normal(0, 1, 1000000)

ax = sns.distplot(uniform, label='Uniform Distribution')
bx = sns.distplot(normal, label='Normal Distribution')
legend = plt.legend()
plt.show()
