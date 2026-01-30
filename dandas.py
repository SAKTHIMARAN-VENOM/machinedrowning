import numpy as np
import pandas as pd
import plotly.express as px
import plotly.graph_objects as go
from sklearn.linear_model import LinearRegression

# 1. Create dummy data: Insurance Charges based on Age
# Formula used for data: Charges = 250 * Age + 1000 + (noise)
np.random.seed(42)
age = np.random.randint(18, 65, size=50)
noise = np.random.normal(0, 1000, size=50)
charges = 250 * age + 1000 + noise

# 2. Prepare data for Scikit-Learn (needs 2D array for X)
X = age.reshape(-1, 1) 
y = charges

# 3. Train the Model
model = LinearRegression()
model.fit(X, y) # This is where it uses OLS to find Weight and Bias

# 4. Extract the "Secret" numbers
weight = model.coef_[0]
bias = model.intercept_

print(f"Model Weight (Slope): {weight:.2f}")
print(f"Model Bias (Intercept): {bias:.2f}")

# 5. Visualize with Plotly
fig = px.scatter(x=age, y=charges, opacity=0.7, 
                 labels={'x':'Age', 'y':'Insurance Charges'},
                 title=f"Linear Regression: Charges = {weight:.2f}*Age + {bias:.2f}")

# Add the prediction line
fig.add_traces(go.Scatter(x=age, y=model.predict(X), name='Regression Line'))
fig.show()