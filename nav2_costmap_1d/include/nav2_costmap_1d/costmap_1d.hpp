#ifndef NAV2_COSTMAP_1D__COSTMAP1D_HPP_
#define NAV2_COSTMAP_1D__COSTMAP1D_HPP_

#include <nav2_costmap_1d/visibility_control.h>
#include <nav2_core/environment_model.hpp>
#include <vector>

namespace nav2_costmap_1d
{

// convenient for storing x/y point pairs
using LocationType = size_t;
using CostType = bool;

class Costmap1D: public nav2_core::EnvironmentModel<LocationType, CostType>
{
public:
  Costmap1D();

  Costmap1D(std::vector<unsigned char> costs);

  virtual ~Costmap1D();

  /**
   * @brief  Get the cost of a cell in the costmap
   * @param mx The cell coordinates
   * @return The cost of the cell
   */
  CostType getCost(const LocationType& loc) const override;

private:
  std::vector<bool> costs_;
};

}  // namespace nav2_costmap_1d

#endif  // NAV2_COSTMAP_1D__COSTMAP1D_HPP_
