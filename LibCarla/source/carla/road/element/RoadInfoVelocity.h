// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "carla/road/element/RoadInfo.h"

namespace carla {
namespace road {
namespace element {

  class RoadInfoVelocity : public RoadInfo {

  public:

    void AcceptVisitor(RoadInfoVisitor &v) override final {
      v.Visit(*this);
    }

    RoadInfoVelocity(float vel) : velocity(vel) {}
    RoadInfoVelocity(float s, float vel)
      : RoadInfo(s),
        velocity(vel) {}

    float GetVelocity() {
      return velocity;
    }

  private:

    float velocity;
  };

} // namespace element
} // namespace road
} // namespace carla
