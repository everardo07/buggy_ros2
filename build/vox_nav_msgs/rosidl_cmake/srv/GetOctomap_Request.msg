# The center point of the axis-aligned bounding box in the global frame
geometry_msgs/Point bounding_box_origin
# The 3 side lenghts of the axis-aligned bounding box
geometry_msgs/Point bounding_box_lengths
# The leaf size or resolution of the octomap
float64 leaf_size
# Indicate if the generated octomap should be published.
bool publish_octomap
# The filename under which the octomap should be stored (only stored if set)
string filename
