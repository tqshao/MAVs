#include "ros/ros.h"
#include <ros/console.h>
#include "std_msgs/String.h"
#include <sstream>
//#include "traj_gen_chrono/Control.h"

/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */


int main(int argc, char **argv)
{
  /**
   * The ros::init() function needs to see argc and argv so that it can perform
   * any ROS arguments and name remapping that were provided at the command line.
   * For programmatic remappings you can use a different version of init() which takes
   * remappings directly, but for most command-line programs, passing argc and argv is
   * the easiest way to do it.  The third argument to init() is the name of the node.
   *
   * You must call one of the versions of ros::init() before using any other
   * part of the ROS system.
   */


  ros::init(argc, argv, "Reference");
  /**
   * NodeHandle is the main access point to communications with the ROS system.
   * The first NodeHandle constructed will fully initialize this node, and the last
   * NodeHandle destructed will close down the node.
   */
  ros::NodeHandle a;
  std::vector<double> x1;
  std::vector<double> y1;
  std::vector<double> x2(2,200);
  std::vector<double> y2(2,0);
//  XmlRpc::XmlRpcValue x1,y1;
  // a.getParam("vehicle/chrono/nloptcontrol_planner/traj/x",x1);
  // a.getParam("vehicle/chrono/nloptcontrol_planner/traj/yVal",y1);


  int count = 0;
  while (ros::ok())
  {

    if (count==10000){
    x2[0]= 200.0;
    x2[1]=200.0;
    y2[0]=0.0;
    y2[1]=50;
    // a.setParam("vehicle/chrono/nloptcontrol/traj/x",x1);
    // a.setParam("vehicle/chrono/nloptcontrol/traj/yVal",y1);
    }


    ++count;
  }


  return 0;
}
