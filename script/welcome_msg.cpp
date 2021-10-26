
#include <gazebo/gazebo.hh>


namespace gazebo
{
  class WorldPluginMyHome : public WorldPlugin
  {
    public: WorldPluginMyHome() : WorldPlugin()
            {
              std::string your_name;
              std::cout << "Please enter your name: ";
              std::getline(std::cin, your_name);
              std::cout << "Welcome to " << your_name << "'s world!" << std::endl;
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyHome)
}