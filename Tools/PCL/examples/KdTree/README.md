# Theoretical primer
A k-d tree, or k-dimensional tree, is a data structure used in computer science for organizing some number of points in a space with k dimensions. It is a binary search tree with other constraints imposed on it. K-d trees are very useful for range and nearest neighbor searches. For our purposes we will generally only be dealing with point clouds in three dimensions, so all of our k-d trees will be three-dimensional. Each level of a k-d tree splits all children along a specific dimension, using a hyperplane that is perpendicular to the corresponding axis. At the root of the tree all children will be split based on the first dimension (i.e. if the first dimension coordinate is less than the root it will be in the left-sub tree and if it is greater than the root it will obviously be in the right sub-tree). Each level down in the tree divides on the next dimension, returning to the first dimension once all others have been exhausted. The most efficient way to build a k-d tree is to use a partition method like the one Quick Sort uses to place the median point at the root and everything with a smaller one-dimensional value to the left and larger to the right. You then repeat this procedure on both the left and right sub-trees until the last trees that you are to partition are only composed of one element.

![This is an example of a 2-dimensional k-d tree](https://github.com/lacie-life/dip-learning/blob/master/PCL/examples/KdTree/images/2d_kdtree.png?raw=true)

![This is a demonstration of how the Nearest-Neighbor search works.](https://github.com/lacie-life/dip-learning/blob/master/PCL/examples/KdTree/images/nn_kdtree.gif?raw=true)

## Refer:
[bla bla](https://pcl.readthedocs.io/projects/tutorials/en/latest/kdtree_search.html#kdtree-search)

[Wiki](https://en.wikipedia.org/wiki/K-d_tree)