#ifndef ZGAMEENGINE_SRC_ECS_TYPEID_GENERATOR_H_
#define ZGAMEENGINE_SRC_ECS_TYPEID_GENERATOR_H_

#include <cstdint>

namespace zgameengine::ecs {

template<typename IdType = uint64_t>
class TypeIdGenerator {
  static IdType Identifier() noexcept {
    static IdType value = 0;
    return value++;
  }

 public:
  template<typename>
  static IdType Type() noexcept {
    static const IdType value = Identifier();
    return value;
  }
};
}



#endif //ZGAMEENGINE_SRC_ECS_TYPEID_GENERATOR_H_
