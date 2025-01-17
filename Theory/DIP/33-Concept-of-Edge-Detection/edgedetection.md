# Concept of Edge Detection

## What are edges
We can also say that sudden changes of discontinuities in an image are called as edges. Significant transitions in an image are called as edges.

### Types of edges
Generally edges are of three types:

+ Horizontal edges
+ Vertical Edges
+ Diagonal Edges

### Why detect edges
Most of the shape information of an image is enclosed in edges. So first we detect these edges in an image and by using these filters and then by enhancing those areas of image which contains edges, sharpness of the image will increase and image will become clearer.

Here are some of the masks for edge detection that we will discuss in the upcoming tutorials.

+ Prewitt Operator
+ Sobel Operator
+ Robinson Compass Masks
+ Krisch Compass Masks
+ Laplacian Operator.
Above mentioned all the filters are Linear filters or smoothing filters.

### Prewitt Operator
Prewitt operator is used for detecting edges horizontally and vertically.

### Sobel Operator
The sobel operator is very similar to Prewitt operator. It is also a derivate mask and is used for edge detection. It also calculates edges in both horizontal and vertical direction.

### Robinson Compass Masks
This operator is also known as direction mask. In this operator we take one mask and rotate it in all the 8 compass major directions to calculate edges of each direction.

### Kirsch Compass Masks
Kirsch Compass Mask is also a derivative mask which is used for finding edges. Kirsch mask is also used for calculating edges in all the directions.

### Laplacian Operator
Laplacian Operator is also a derivative operator which is used to find edges in an image. Laplacian is a second order derivative mask. It can be further divided into positive laplacian and negative laplacian.

All these masks find edges. Some find horizontally and vertically, some find in one direction only and some find in all the directions. The next concept that comes after this is sharpening which can be done once the edges are extracted from the image

## Sharpening
Sharpening is opposite to the blurring. In blurring, we reduce the edge content and in Sharpening, we increase the edge content. So in order to increase the edge content in an image, we have to find edges first.

Edges can be find by one of the any method described above by using any operator. After finding edges, we will add those edges on an image and thus the image would have more edges, and it would look sharpen.

This is one way of sharpening an image.

The sharpen image is shown below.

### Original Image

![Figure 1](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/edgedetection1.jpg?raw=true)

### Sharpen Image

![Figure 2](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/edgedetection2.jpg?raw=true)

-------------------------------------------------------------------------------------------------------

# Prewitt Operator

Prewitt operator is used for edge detection in an image. It detects two types of edges

+ Horizontal edges
+ Vertical Edges

Edges are calculated by using difference between corresponding pixel intensities of an image. All the masks that are used for edge detection are also known as derivative masks. Because as we have stated many times before in this series of tutorials that image is also a signal so changes in a signal can only be calculated using differentiation. So that’s why these operators are also called as derivative operators or derivative masks.

All the derivative masks should have the following properties:

+ Opposite sign should be present in the mask.
+ Sum of mask should be equal to zero.
+ More weight means more edge detection.
Prewitt operator provides us two masks one for detecting edges in horizontal direction and another for detecting edges in an vertical direction.

## Vertical direction

![Figure 3](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/1.PNG?raw=true)

Above mask will find the edges in vertical direction and it is because the zeros column in the vertical direction. When you will convolve this mask on an image, it will give you the vertical edges in an image.

### How it works
When we apply this mask on the image it prominent vertical edges. It simply works like as first order derivate and calculates the difference of pixel intensities in a edge region. As the center column is of zero so it does not include the original values of an image but rather it calculates the difference of right and left pixel values around that edge. This increase the edge intensity and it become enhanced comparatively to the original image.

## Horizontal direction

![Figure 4](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/2.PNG?raw=true)

Above mask will find edges in horizontal direction and it is because that zeros column is in horizontal direction. When you will convolve this mask onto an image it would prominent horizontal edges in the image.

### How it works
This mask will prominent the horizontal edges in an image. It also works on the principle of above mask and calculates difference among the pixel intensities of a particular edge. As the center row of mask is consist of zeros so it does not include the original values of edge in the image but rather it calculate the difference of above and below pixel intensities of the particular edge. Thus increasing the sudden change of intensities and making the edge more visible. Both the above masks follow the principle of derivate mask. Both masks have opposite sign in them and both masks sum equals to zero. The third condition will not be applicable in this operator as both the above masks are standardize and we can’t change the value in them.

## Now it’s time to see these masks in action

### Sample Image
Following is a sample picture on which we will apply above two masks one at time.

![Figure 5](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/prewitt1.jpg?raw=true)

### After applying Vertical Mask
After applying vertical mask on the above sample image, following image will be obtained. This image contains vertical edges. You can judge it more correctly by comparing with horizontal edges picture.

![Figure 6](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/prewitt2.jpg?raw=true)

### After applying Horizontal Mask
After applying horizontal mask on the above sample image, following image will be obtained.

![Figure 7](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/prewitt3.jpg?raw=true)

### Comparison
As you can see that in the first picture on which we apply vertical mask, all the vertical edges are more visible than the original image. Similarly in the second picture we have applied the horizontal mask and in result all the horizontal edges are visible. So in this way you can see that we can detect both horizontal and vertical edges from an image.

-------------------------------------------------------------------------------------------------------

# Sobel Operator

The sobel operator is very similar to Prewitt operator. It is also a derivate mask and is used for edge detection. Like Prewitt operator sobel operator is also used to detect two kinds of edges in an image:

+ Vertical direction
+ Horizontal direction

## Difference with Prewitt Operator

The major difference is that in sobel operator the coefficients of masks are not fixed and they can be adjusted according to our requirement unless they do not violate any property of derivative masks.

### Following is the vertical Mask of Sobel Operator:

![Figure 8](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/3.PNG?raw=true)

This mask works exactly same as the Prewitt operator vertical mask. There is only one difference that is it has “2” and “-2” values in center of first and third column. When applied on an image this mask will highlight the vertical edges.

### How it works
When we apply this mask on the image it prominent vertical edges. It simply works like as first order derivate and calculates the difference of pixel intensities in a edge region.

As the center column is of zero so it does not include the original values of an image but rather it calculates the difference of right and left pixel values around that edge. Also the center values of both the first and third column is 2 and -2 respectively.

This give more weight age to the pixel values around the edge region. This increase the edge intensity and it become enhanced comparatively to the original image.

### Following is the horizontal Mask of Sobel Operator:

![Figure 9](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/4.PNG?raw=true)

Above mask will find edges in horizontal direction and it is because that zeros column is in horizontal direction. When you will convolve this mask onto an image it would prominent horizontal edges in the image. The only difference between it is that it have 2 and -2 as a center element of first and third row.

### How it works
This mask will prominent the horizontal edges in an image. It also works on the principle of above mask and calculates difference among the pixel intensities of a particular edge. As the center row of mask is consist of zeros so it does not include the original values of edge in the image but rather it calculate the difference of above and below pixel intensities of the particular edge. Thus increasing the sudden change of intensities and making the edge more visible.

## Now it’s time to see these masks in action

### Sample Image

Following is a sample picture on which we will apply above two masks one at time.

![Figure 10](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/sobel1.jpg?raw=true)

|After applying Vertical Mask|After applying Horizontal Mask|
|-----------------------------|-------------------------------|
|![Figure 11](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/sobel2.jpg?raw=true)|![Figure 12](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/sobel3.jpg?raw=true)|

### Comparison
As you can see that in the first picture on which we apply vertical mask, all the vertical edges are more visible than the original image. Similarly in the second picture we have applied the horizontal mask and in result all the horizontal edges are visible.

So in this way you can see that we can detect both horizontal and vertical edges from an image. Also if you compare the result of sobel operator with Prewitt operator, you will find that sobel operator finds more edges or make edges more visible as compared to Prewitt Operator.

This is because in sobel operator we have allotted more weight to the pixel intensities around the edges.

## Applying more weight to mask
Now we can also see that if we apply more weight to the mask, the more edges it will get for us. Also as mentioned in the start of the tutorial that there is no fixed coefficients in sobel operator, so here is another weighted operator

![Figure 13](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/5.PNG?raw=true)

If you can compare the result of this mask with of the Prewitt vertical mask, it is clear that this mask will give out more edges as compared to Prewitt one just because we have allotted more weight in the mask.

------------------------------------------------------------------------------------------------------------------------

# Robinson Compass Mask

Robinson compass masks are another type of derrivate mask which is used for edge detection. This operator is also known as direction mask. In this operator we take one mask and rotate it in all the 8 compass major directions that are following:

+ North
+ North West
+ West
+ South West
+ South
+ South East
+ East
+ North East
There is no fixed mask. You can take any mask and you have to rotate it to find edges in all the above mentioned directions. All the masks are rotated on the bases of direction of zero columns.

For example let’s see the following mask which is in North Direction and then rotate it to make all the direction masks.

![Figure 14](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/6.PNG?raw=true)

![Figure 15](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/7.PNG?raw=true)

![Figure 16](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/8.PNG?raw=true)

![Figure 17](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/9.PNG?raw=true)

As you can see that all the directions are covered on the basis of zeros direction. Each mask will give you the edges on its direction. Now let’s see the result of the entire above masks. Suppose we have a sample picture from which we have to find all the edges. Here is our sample picture:

## Sample Picture

![Figure 18](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/robinson1.jpg?raw=true)

Now we will apply all the above filters on this image and we get the following result.

### North Direction Edges

![Figure 19](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/robinson2.jpg?raw=true)

### North West Direction Edges

![Figure 20](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/robinson3.jpg?raw=true)

### West Direction Edges

![Figure 21](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/robinson4.jpg?raw=true)

### South West Direction Edges

![Figure 22](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/robinson5.jpg?raw=true)

### South Direction Edges

![Figure 23](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/robinson6.jpg?raw=true)

### South East Direction Edges

![Figure 24](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/robinson7.jpg?raw=true)

### East Direction Edges

![Figure 25](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/robinson8.jpg?raw=true)

### North East Direction Edges

![Figure 26](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/robinson9.jpg?raw=true)

As you can see that by applying all the above masks you will get edges in all the direction. Result is also depends on the image. Suppose there is an image, which do not have any North East direction edges so then that mask will be ineffective.

---------------------------------------------------------------------------------------------------------------

# Krisch Compass Mask

Kirsch Compass Mask is also a derivative mask which is used for finding edges. This is also like Robinson compass find edges in all the eight directions of a compass. The only difference between Robinson and kirsch compass masks is that in Kirsch we have a standard mask but in Kirsch we change the mask according to our own requirements.

With the help of Kirsch Compass Masks we can find edges in the following eight directions.

+ North
+ North West
+ West
+ South West
+ South
+ South East
+ East
+ North East
We take a standard mask which follows all the properties of a derivative mask and then rotate it to find the edges.

For example let’s see the following mask which is in North Direction and then rotate it to make all the direction masks.

![Figure 27](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/10.PNG?raw=true)

![Figure 28](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/11.PNG?raw=true)

![Figure 29](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/12.PNG?raw=true)

![Figure 30](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/13.PNG?raw=true)

As you can see that all the directions are covered and each mask will give you the edges of its own direction. Now to help you better understand the concept of these masks we will apply it on a real image. Suppose we have a sample picture from which we have to find all the edges. Here is our sample picture:

## Sample Picture

![Figure 31](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/kirsch1.jpg?raw=true)

Now we will apply all the above filters on this image and we get the following result.

### North Direction Edges

![Figure 32](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/kirsch2.jpg?raw=true)

### North West Direction Edges

![Figure 33](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/kirsch3.jpg?raw=true)

### West Direction Edges

![Figure 34](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/kirsch4.jpg?raw=true)

### South West Direction Edges

![Figure 35](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/kirsch5.jpg?raw=true)

### South Direction Edges

![Figure 36](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/kirsch6.jpg?raw=true)

### South East Direction Edges

![Figure 37](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/kirsch7.jpg?raw=true)

### East Direction Edges

![Figure 38](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/kirsch8.jpg?raw=true)

### North East Direction Edges

![Figure 39](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/kirsch9.jpg?raw=true)

As you can see that by applying all the above masks you will get edges in all the direction. Result is also depends on the image. Suppose there is an image, which do not have any North East direction edges so then that mask will be ineffective.

------------------------------------------------------------------------------------------------------------

# Laplacian Operator

Laplacian Operator is also a derivative operator which is used to find edges in an image. The major difference between Laplacian and other operators like Prewitt, Sobel, Robinson and Kirsch is that these all are first order derivative masks but Laplacian is a second order derivative mask. In this mask we have two further classifications one is Positive Laplacian Operator and other is Negative Laplacian Operator.

Another difference between Laplacian and other operators is that unlike other operators Laplacian didn’t take out edges in any particular direction but it take out edges in following classification.

+ Inward Edges
+ Outward Edges
Let’s see that how Laplacian operator works.

## Positive Laplacian Operator

In Positive Laplacian we have standard mask in which center element of the mask should be negative and corner elements of mask should be zero.

![Figure 40](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/14.PNG?raw=true)

Positive Laplacian Operator is use to take out outward edges in an image.

## Negative Laplacian Operator

In negative Laplacian operator we also have a standard mask, in which center element should be positive. All the elements in the corner should be zero and rest of all the elements in the mask should be -1.

![Figure 41](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/15.PNG?raw=true)

Negative Laplacian operator is use to take out inward edges in an image

### How it works
Laplacian is a derivative operator; its uses highlight gray level discontinuities in an image and try to deemphasize regions with slowly varying gray levels. This operation in result produces such images which have grayish edge lines and other discontinuities on a dark background. This produces inward and outward edges in an image

The important thing is how to apply these filters onto image. Remember we can’t apply both the positive and negative Laplacian operator on the same image. we have to apply just one but the thing to remember is that if we apply positive Laplacian operator on the image then we subtract the resultant image from the original image to get the sharpened image. Similarly if we apply negative Laplacian operator then we have to add the resultant image onto original image to get the sharpened image.

Let’s apply these filters onto an image and see how it will get us inward and outward edges from an image. Suppose we have a following sample image.

## Sample Image

![Figure 42](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/laplacian1.jpg?raw=true)

|After applying Positive Laplacian Operator|After applying Negative Laplacian Operator|
|------------------------------------------|------------------------------------------|
|![Figure 43](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/laplacian2.jpg?raw=true)|![Figure 44](https://github.com/lacie-life/Image-Processing/blob/master/Theory/DIP/33-Concept-of-Edge-Detection/laplacian3.jpg?raw=true)|




