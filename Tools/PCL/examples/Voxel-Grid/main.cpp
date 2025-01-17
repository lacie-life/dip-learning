#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl-1.8/pcl/point_types.h>
#include <pcl/filters/voxel_grid.h>

int main(int argc, char** argv) {
    std::cout << "Hello, World!" << std::endl;

    pcl::PCLPointCloud2::Ptr cloud (new pcl::PCLPointCloud2 ());
    pcl::PCLPointCloud2::Ptr cloud_filtered (new pcl::PCLPointCloud2 ());

    // Fill in the cloud data
    pcl::PCDReader reader;
    reader.read("../table_scene_lms400.pcd", *cloud);

    std::cerr << "pointCloud before filtering: " << cloud->width * cloud->height
                                                 << "data points (" << pcl::getFieldsList(*cloud)
                                                 << ")." << std::endl;

    // Create the filtering object
    pcl::VoxelGrid<pcl::PCLPointCloud2> sor;
    sor.setInputCloud (cloud);
    sor.setLeafSize(0.01f, 0.01f, 0.01f);
    sor.filter(*cloud_filtered);

    std::cerr << "pointCloud before filtering: " << cloud_filtered->width * cloud_filtered->height
              << "data points (" << pcl::getFieldsList(*cloud_filtered)
              << ")." << std::endl;

    pcl::PCDWriter writer;
    writer.write("../table_scene_lms400_downsampled.pcd", *cloud_filtered, Eigen::Vector4f::Zero(), Eigen::Quaternionf::Identity(),
                 false);

    return 0;
}
