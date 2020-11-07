/**
 * Copyright 2020
 * Copyright owner: Kushagra Agrawal
 * [legal/copyright]
 */
#include <ros/ros.h>
#include <ros/service_client.h>
#include <gtest/gtest.h>
#include <beginner_tutorials/ModifyString.h>
#include "std_msgs/String.h"


/**
 * @brief Test case to check whether the ModifyString service
 *        exists and changes publishing string.
 * @param none
 * @return none
 */
TEST(TestSuite, ServiceTest) {
    ros::NodeHandle n;
    ros::ServiceClient client = n.serviceClient<beginner_tutorials::ModifyString>(
            "ModifyString");
    bool exists(client.waitForExistence(ros::Duration(5)));  // checking for service existence
    EXPECT_TRUE(exists);

    beginner_tutorials::ModifyString srv;
    srv.request.changeString = "Test";
    client.call(srv.request, srv.response);
    EXPECT_EQ("Test", srv.response.changedString);  // checking whether publishing string changed
}

// Run all the tests that were declared with TEST()
int main(int argc, char **argv) {
    ros::init(argc, argv, "talkerNodeTest");
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}