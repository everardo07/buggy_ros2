# Message type to publish can messages to ROS topic
# header (std_msgs/Header)
# id (uint32) CAN message id (11/29 bit)
# dlc (uint8) CAN data size in bytes
# data (uint8[8]) CAN data
# is_error (bool) error flag bit (0 = data frame, 1 = error message)
# is_rtr (bool) remote transmission request flag (1 = rtr frame)
# is_extended (bool) frame format flag (0 = standard 11 bit, 1 = extended 29 bit)

std_msgs/Header header
uint32 id
bool is_rtr
bool is_extended
bool is_error
uint8 dlc
uint8[8] data

