add_library(ecs INTERFACE "entity.h"
        component.h
        registry.h
        typeid_generator.h
        system.h
        system.h
)
target_include_directories(ecs INTERFACE .)
target_compile_features(ecs INTERFACE cxx_std_20)

