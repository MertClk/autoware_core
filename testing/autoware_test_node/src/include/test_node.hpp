// Copyright 2024 The Autoware Contributors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef TEST_NODE_HPP_
#define TEST_NODE_HPP_

#include <autoware/node/node.hpp>

namespace autoware::test_node
{

class TestNode : public autoware::node::Node
{
public:
  explicit TestNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());
};

}  // namespace autoware::test_node

#endif  // TEST_NODE_HPP_
