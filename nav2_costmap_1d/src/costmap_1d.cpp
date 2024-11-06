#include "nav2_costmap_1d/costmap_1d.hpp"

namespace nav2_costmap_1d
{

Costmap1D::Costmap1D()
{
}

Costmap1D::~Costmap1D()
{
}

nav2_costmap_1d::CostType Costmap1D::getCost(const nav2_costmap_1d::LocationType& loc) const {
    return costs_.at(loc);
}

}  // namespace nav2_costmap_1d
