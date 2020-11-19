^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package vrxperience_bridge
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.0.0 (2020-11-19)
------------------
* Merge pull request `#5 <https://github.com/autowarefoundation/ansys-vrxperience-ros2/issues/5>`_ from autowarefoundation/components
  ROS2 Components and Clean-up
* Merge pull request `#4 <https://github.com/autowarefoundation/ansys-vrxperience-ros2/issues/4>`_ from autowarefoundation/fix-memory-leak
  Fix memory leak in receiver.
* Removing unnecessary preprocessor macros.
* Updating senders and receivers to be Components.
* Preparing data receiver and sender to have child components.
* Preparing package.xml and CMakeLists.txt for ROS Components.
* Merge pull request `#3 <https://github.com/autowarefoundation/ansys-vrxperience-ros2/issues/3>`_ from autowarefoundation/fix-incorrect-indexing
  Fix incorrect index being used when iterating over received DDS samples
* Merge pull request `#2 <https://github.com/autowarefoundation/ansys-vrxperience-ros2/issues/2>`_ from autowarefoundation/linting-fixes
  Linting fixes
* CMake linting.
* Uncrustify fixes.
* Merge pull request `#1 <https://github.com/autowarefoundation/ansys-vrxperience-ros2/issues/1>`_ from autowarefoundation/switch-to-cyclonedds
  Switch to Cyclone DDS for exchanging data with the simulator
* Fix most of the build warnings
  - change int to uint32_t type for array indexing
  - reorder member variables to match order of initialization
  - prevent warning about unused rosMsg argument in send_dds_done_reply
* Split VRXPERIENCE IDLs into separate files
  This shortens length of generated source and header files and prevents the generator
  from complaining about exceeding file limit for C code.
* Fix incorrect topic descriptor for receiving CabToSteeringCorrective
* Fix Cyclone DDS subscription code
  - initialize sample buffer on start
  - make sure a sample is new before processing it
* Switch from RTI Connext to Eclipse CycloneDDS
* Initial commit.
* Contributors: Adam Gotlib, Joshua Whitley
