# Modern Computer Vision with Pytorch

[Book](https://www.packtpub.com/product/modern-computer-vision-with-pytorch/9781839213472?utm_source=github&utm_medium=repository&utm_campaign=9781839213472)

## 01-Artificial Neural Networks

<b> Basic Algorithm Implementation </b>

[Artificial Neural Network](01-ANN/ANN.ipynb)

[Feedforward propagation](01-ANN/Feed_forward_propagation.ipynb)

[Gradient descent](01-ANN/Gradient_descent.ipynb)

[Chain rule](01-ANN/Chain_rule.ipynb)

[Learning rate](01-ANN/Learning_rate.ipynb)

[Back propagation](01-ANN/Back_propagation.ipynb)

## 02-Pytorch Basics

<b> Pytorch Basics </b>

[Initializing a tensor](02-Pytorch_Basics/Initializing_a_tensor.ipynb)

[Operations on tensors](02-Pytorch_Basics/Operations_on_tensors.ipynb)

[Autograd](02-Pytorch_Basics/Autograd.ipynb)

[Tensor vs Numpy ndarrays](02-Pytorch_Basics/Numpy_Vs_Torch_object_computation_speed_comparison.ipynb)

<b> Building a neural network using Pytorch </b>

[Buiding a neural network](02-Pytorch_Basics/Building_a_neural_network_using_PyTorch_on_a_toy_dataset.ipynb)

[Batch size Example](02-Pytorch_Basics/Specifying_batch_size_while_training_a_model.ipynb)

[Implementing custom loss function](02-Pytorch_Basics/Implementing_custom_loss_function.ipynb)

[Fetching the values of intermediate layers](02-Pytorch_Basics/Fetching_the_values_of_intermediate_layers.ipynb)

[Sequential method to build a neural network](02-Pytorch_Basics/Sequential_method_to_build_a_neural_network.ipynb)

[Saving and loading a PyTorch model](02-Pytorch_Basics/save_and_load_pytorch_model.ipynb)

<b> Building a Deep Neural Network with PyTorch </b>

- Images

[Converting images into structured arrays and scalars - Grayscale](02-Pytorch/Inspecting_grayscale_images.ipynb)

[Converting images into structured arrays and scalars - Color](02-Pytorch/Inspecting_color_images.ipynb)

- FashionMNIST Example

[Preparing data](02-Pytorch/Preparing_data.ipynb)

[Traning a neural network](Steps_to_build_a_neural_network_on_FashionMNIST.ipynb)

[Scaling a dataset to improve model accuracy](02-Pytorch/Scaling_the_dataset.ipynb)

- Hyperparameter tuning

[The impact of the batch size](02-Pytorch/Varying_batch_size.ipynb)

[The impact of the loss optimizer](02-Pytorch/Varying_loss_optimizer.ipynb)

[The impact of the learning rate on scaled dataset](02-Pytorch/Varying_learning_rate_on_scaled_data.ipynb)

[The impact of the learning rate on non scaled dataset](02-Pytorch/Varying_learning_rate_on_non_scaled_data.ipynb)

[Learning rate annealing](02-Pytorch/Learning_rate_annealing.ipynb)

[The impact of building a deeper neural network](02-Pytorch/Impact_of_building_a_deeper_neural_network.ipynb)

[The impact of batch normalization](02-Pytorch/Batch_normalization.ipynb)

- Overfiting

<i> Having high accuracy on the training dataset and considerably
lower accuracy on the validation dataset refers to the scenario of
overfitting. </i>

[The impact of dropout](02-Pytorch/Impact_of_dropout.ipynb)

[The impact of regularization](02-Pytorch/Impact_of_regularization.ipynb)

## 03-Convolutional Neural Networks

- CNN

[Issues with image translation](03-CNN/Issues_with_image_translation.ipynb)

[CNN Block](03-CNN/CNN_Block.ipynb)

[Build simple CNN model](03-CNN/CNN_working_details.ipynb)

[CNN and FashionMNIST](03-CNN/CNN_on_FashionMNIST.ipynb)

- Data augmentation

[Image augmentation](03-CNN/Image_augmentation.ipynb)

[Image augmentation and batch](03-CNN/Time_comparison_of_augmentation_scenario.ipynb)

[Data augmentation for image translation](03-CNN/Data_augmentation_with_CNN.ipynb)

[Visualizing the filters](03-CNN/Visualizing_the_filters_learning.ipynb)

[Cat vs Dog Agiannnnnnn](03-CNN/Cats_vs_Dogs.ipynb)

## 04-Transfer Learning for Image Classification

<b> High-level flow of transfer learning </b>

1. Normalize the input images, normalized by the <b> same mean and standard deviation </b> that was used during the training of the pre-trained model.

2. Fetch the pre-trained model's architecture. Fetch the weights for this architecture that arose as a result of being trained on a large dataset.

3. Discard the last few layers of the pre-trained model.

4. Connect the truncated pre-trained model to a freshly initialized layer (or layers) where weights are randomly initialized. Ensure that the output of the last layer has as many neurons as the classes/outputs we would want to predict

5. Ensure that the weights of the pre-trained model are not trainable (in other words, frozen/not updated during backpropagation), but that the weights of the newly initialized layer and the weights connecting it to the output layer are trainable:

- We do not train the weights of the pre-trained model, as we assume those weights are already well learned for the task, and hence leverage the learning from a large model. In summary, we only learn the newly initialized layers for our small dataset.

6. Update the trainable parameters over increasing epochs to fit a model.

<b> VGG16 Architecture </b>

[VGG16 Architecture](04-Transfer_Learning/VGG_architecture.ipynb)

[Transfer learning with VGG16](04-Transfer_Learning/Implementing_VGG16_for_image_classification.ipynb)

<b> ResNet Architecture </b>

[ResNet Architecture](04-Transfer_Learning/ResNet_block_architecture.ipynb)

[Transfer learning with ResNet](04-Transfer_Learning/Implementing_ResNet18_for_image_classification.ipynb)

<b> Example </b>

[Facial keypoint detection](04-Transfer_Learning/Facial_keypoints_detection.ipynb)

[2D and 3D facial keypoint detection](04-Transfer_Learning/2D_and_3D_facial_keypoints.ipynb)

[Age and gender prediction](04-Transfer_Learning/age_gender_prediction.ipynb)

[Torch snippets example](04-Transfer_Learning/Torch_snippets.ipynb)

## 05-Practical Aspects of Image Classification

<b> Generating CAMs </b>

[Generating CAMs](05-Practical-Aspects-of-Image-Classification/Generating_CAMs.ipynb)

<b> The impact of data augmentation and batch normalization </b>

[Code](05-Practical-Aspects-of-Image-Classification/Road_sign_detection.ipynb)

<b> Practical aspects to take care of during model implementation </b>

[Doc](05-Practical-Aspects-of-Image-Classification/Practical_aspects_to_take_care_of_during_model_implementation.ipynb)

## 06-Object Detection

[Object detection](06-Object_Detection/Object_detection.ipynb)

<b> Region proposal </b>

<i>Region proposal is a technique that helps in identifying islands of regions where the pixels are similar to one another. </i>

[Selective search](06-Object_Detection/selective_Search.ipynb)

[Intersection over Union](06-Object_Detection/Intersection_over_Union.ipynb)

[nms and mAP](06-Object_Detection/nms_and_mAP.ipynb)

<b> R-CNN </b>

[R-CNN](06-Object_Detection/Training_RCNN.ipynb)

[Fast R-CNN-based custom object detectors](06-Object_Detection/Training_Fast_RCNN.ipynb)

[Components of modern object detection algorithms](06-Object_Detection/Components_of_modern_object_detection_algorithms.ipynb)

[Faster R-CNN](06-Object_Detection/Training_Faster_RCNN.ipynb)

[Yolo](06-Object_Detection/Training_YOLO.ipynb)

[SSD](06-Object_Detection/Training_SSD.ipynb)

## 07-Image Segmentation

The two aspects that we need to keep in mind while performing segmentation are as
follows:

- The shape and structure of the objects in the original image remain the
same in the segmented output.

- Leveraging a fully convolutional architecture (and not a structure where
we flatten a certain layer) can help here since we are using one image as
input and another as output.

<b> U-Net Note </b>

- Unet Architecture

![Unet Architecture](./07-Image-Segmentation/imgs/unet0.png)

- Performing upscaling

![Performing upscaling](./07-Image-Segmentation/imgs/unet1.png)

In the preceding example, we took an input array of shape 3 x 3 (<b>Input array</b>), applied a stride of 2 where we distributed the input values to accommodate the stride (<b>Input array adjusted for stride</b>), padded the array with zeros (<b>Input array adjusted for stride and padding</b>), and convolved the padded input with a filter (<b>Filter/Kernel</b>) to fetch the output array.

[Code](07-Image-Segmentation/Senmantic_Segmentation_with_U_Net.ipynb)

<b> Mask R-CNN </b>

- Mask R-CNN architecture

The Mask R-CNN architecture helps in identifying/highlighting the instances of
objects of a given class within an image. This comes in especially handy when there
are multiple objects of the same type present within the image. Furthermore, the term
Mask represents the segmentation that's done at the pixel level by Mask R-CNN.

The Mask R-CNN architecture is an extension of the Faster R-CNN network, which
we learned about in the previous chapter. However, a few modifications have been
made to the Mask R-CNN architecture, as follows:

- The RoI Pooling layer has been replaced with the RoI Align layer.

- A mask head has been included to predict a mask of objects in addition to
the head, which already predicts the classes of objects and bounding box
correction in the final layer.

- A fully convolutional network (FCN) is leveraged for mask prediction.

![Mask R-CNN architecture](./07-Image-Segmentation/imgs/mask0.png)

![Mask R-CNN architecture](./07-Image-Segmentation/imgs/mask1.png)

- RoI Align

To understand how RoI Align works, let's go through a simple example. Here, we are trying to convert the following region (which is represented in dashed lines) into a 2 x 2 shape:

![RoI Align](./07-Image-Segmentation/imgs/mask2.png)

 - Step 1: First, divide the region into an equal 2 x 2 shape:

![RoI Align](./07-Image-Segmentation/imgs/mask3.png)

 - Step 2: Define four points that are equally spaced within each of the 2 x 2 cells:

![RoI Align](./07-Image-Segmentation/imgs/mask4.png)

 - Step 3: Calculate the weighted average value of each point based on its distance to the nearest known value:

![RoI Align](./07-Image-Segmentation/imgs/mask5.png)

 - Step 4: Repeat the preceding interpolation step for all four points in a cell:

![RoI Align](./07-Image-Segmentation/imgs/mask6.png)

 - Step 5: Perform average pooling across all four points within a cell:

![RoI Align](./07-Image-Segmentation/imgs/mask7.png)

- Mask head

Using RoI Align, we can get a more accurate representation of the region proposal
that is obtained from the Region Proposal Network. Now, we want to obtain the
segmentation (mask) output, given a standard shaped RoI Align output, for every
region proposal.

Typically, in the case of object detection, we would pass the RoI Align through a
flattened layer in order to predict the object's class and bounding box offset.
However, in the case of image segmentation, we predict the pixels within a bounding
box that contains the object. Hence, we now have a third output (apart from class and
bounding box offset), which is the predicted mask within the region of interest.

Here, we are predicting the mask, which is an image overlay on top of the original
image. Given that we are predicting an image, instead of flattening the RoI Align's
output, we'll connect it to another convolution layer to get another image-like
structure (width x height in dimension). Let's understand this phenomenon by taking
a look at the following diagram:

![RoI Align](./07-Image-Segmentation/imgs/mask8.png)

In the preceding diagram, we have obtained an output of shape 7 x 7 x 2048 using the
<b> feature pyramid network (FPN) </b>, which now has 2 branches:

- The first branch returns the class of the object and the bounding box, post
flattening the FPN output.

- The second branch performs convolution on top of the FPN's output to get
a mask.

The ground truth corresponding to the 14 x 14 output is the resized image of the
region proposals. The ground truth of the region proposal is of the shape 80 x 14 x 14
if there are 80 unique classes in the dataset. Each of the 80 x 14 x 14 pixels is a 1 or a 0,
which indicates whether the pixel contains an object or not. Thus, we are performing
binary cross-entropy loss minimization while predicting the class of a pixel.

Post model training, we are able to detect regions, get classes, get bounding box
offsets, and get the mask corresponding to each region. When making an inference,
we first detect the objects present in the image and make bounding box corrections.
Then, we pass the offsetted region to the mask head to predict the mask that
corresponds to different pixels in the region.


[Code](07-Image-Segmentation/Instance_Segmentation.ipynb)

[Code - Multi-instance of multi class segmentation](07-Image-Segmentation/Multiple_instances_of_multiple_classes.ipynb)

- Dilated convolution

![Dilated convolution](./07-Image-Segmentation/imgs/mask9.png)

## 08-Image Manipulation

<b> Autoencoders and Image Manipulation </b>

[Autoencoder](08-Image-Manipulation/simple_auto_encoder_with_different_latent_size.ipynb)

[Convolutional autoencoders](08-Iamge-Manipulation/Convolutional_autoencoders.ipynb)

[Variational autoencoders](08-Image-Manipulation/VAE.ipynb)

[Adversarial attack on images](08-Image-Manipulation/adversarial_attack.ipynb)

[Neural style transfer](08-Image-Manipulation/neural_style_transfer.ipynb)

<b> Image Generation Using GANs </b>

[Introducing GANs](08-Image-Manipulation/GANs.ipynb)

![GANs](./08-Image-Manipulation/imgs/auto4.png)

1. Train the generator (and not the discriminator) to generate images such
that the discriminator classifies the images as real.

2. Train the discriminator (and not the generator) to classify the images that
the generator generates as fake.

3. Repeat the process until an equilibrium is achieved.

- Example of GANs:

[Handwritten digit generation using GANs](08-Image-Manipulation/Handwritten_digit_generation_using_GAN.ipynb)

[Face generating using DCGAN](08-Image-Manipulation/Face_generation_using_DCGAN.ipynb)

[Face generating using Conditional GAN](08-Image-Manipulation/Face_generation_using_Conditional_GAN.ipynb)

[Pix2Pix](08-Image-Manipulation/pix2pix.ipynb)

[CycleGAN](08-Image-Manipulation/CycleGAN.ipynb)

[StyleGAN2](08-Image-Manipulation/Customzing_StyleGAN2.ipynb)

[SRGAN](08-Image-Manipulation/Image_super_resolution_using_SRGAN.ipynb)

## 09-Combining Computer Vision with Other Techniques

<b> Training with Minimal Data Points </b>

[Zero-shot learning](09-Combining-Computer-Vision-with-Other-Techniques/Training-with-Minimal-Data-Points/Zero_shot_learning.ipynb)

[Few-shot learning](09-Combining-Computer-Vision-with-Other-Techniques/Training-with-Minimal-Data-Points/Siamese_networks.ipynb)

<b> Combining Computer Vision with NLP </b> 

[NLP Common Architectures](09-Combining-Computer-Vision-with-Other-Techniques/NLP/NLP_Common_Architectures.ipynb)

[Image captioning](09-Combining-Computer-Vision-with-Other-Techniques/NLP/Image_captioning.ipynb)

[Handwritten transcription](09-Combining-Computer-Vision-with-Other-Techniques/NLP/Handwritting_transcription.ipynb)

[Transformer](09-Combining-Computer-Vision-with-Other-Techniques/NLP/transformer.ipynb)

[Obeject detection using DERT](09-Combining-Computer-Vision-with-Other-Techniques/NLP/Object_detection_with_DERT.ipynb)

<b> Combining Computer Vision with Reinforcement Learning </b>

[The basics of reinforcement learning]

[The basics of reinforcement learning](09-Combining-Computer-Vision-with-Other-Techniques/RL/RL_basic.ipynb)

[The Gym environment](09-Combining-Computer-Vision-with-Other-Techniques/RL/Gym_environment.ipynb)

[Buiding Q-learning table](09-Combining-Computer-Vision-with-Other-Techniques/RL/Building_Q_table.ipynb)

[Deep Q-learning - 1](09-Combining-Computer-Vision-with-Other-Techniques/RL/Deep_Q_Learning_Cart_Pole_balancing.ipynb)

[Deep Q-learning - 2](09-Combining-Computer-Vision-with-Other-Techniques/RL/Pong_Deep_Q_Learning_with_Fixed_targets.ipynb)

[Self Driving Car Example](09-Combining-Computer-Vision-with-Other-Techniques/RL/train-self-driving-agent.ipynb)



