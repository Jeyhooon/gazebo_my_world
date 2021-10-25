
#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyFlat : public WorldPlugin
  {
    public: WorldPluginMyFlat() : WorldPlugin()
            {
              printf("Welcome to my flat!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyFlat)
}