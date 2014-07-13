% author- Mohak Bhambry

function J = computeCost(X, y, theta)
%COMPUTECOST Compute cost for linear regression
%   J = COMPUTECOST(X, y, theta) computes the cost of using theta as the
%   parameter for linear regression to fit the data points in X and y

% Initialize some useful values
m = length(y); % number of training examples

% You need to return the following variables correctly 
J = 0;

% ====================== YOUR CODE HERE ======================
% Instructions: Compute the cost of a particular choice of theta
%               You should set J to the cost.

% Calculate the hypothesis function for all forms using supplied theta values.
%  h = X multiplied by theta 
%this accomplish the same thing as-
% h = theta(1,1)+ theta(2,1) * X(:,2)

h = X * theta;

%Now calculate squared error for each training example

squaredErrors = (h - y).^ 2;

% calculate the cost function J
J = (1/(2*m)) * sum (squaredErrors);



% =========================================================================

end
