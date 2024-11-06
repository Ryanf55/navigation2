#ifndef NAV2_CORE__COSTMAP_HPP_
#define NAV2_CORE__COSTMAP_HPP_

#include <memory>

namespace nav2_core
{

/**
 * @class EnvironmentModel
 * @brief Abstract interface for a representation of the environment (a map) that have an associated cost based on a location in the map.
 * @tparam LocationType  How to represent "where" in the map you are. Could be X-Y pair, or perhaps a 3D geographic coordinate.
 * @tparam CostType How to represent costs in the map. Could be "unsigned char", simply a "bool", or a complex class.
 */
template<typename LocationType, typename CostType>
class EnvironmentModel
{
public:
  using Ptr = std::shared_ptr<EnvironmentModel>;

  /**
   * @brief Virtual destructor
   */
  virtual ~EnvironmentModel() = default;

  // /**
  //  * @brief Start the costmap
  //  */
  // virtual void start() = 0;

  // /**
  //  * @brief Update the map from input state data
  //  */
  // virtual void updateMap() = 0;

  // /**
  //  * @brief Reset all map data
  //  */
  // virtual void reset() = 0;

  /**
   * @brief  Get the cost of location.
   * @param mx The location to get the cost of
   * @return The cost of the location
   */
  virtual CostType getCost(const LocationType& loc) const = 0;

};

}  // namespace nav2_core

#endif  // NAV2_CORE__COSTMAP_HPP_
