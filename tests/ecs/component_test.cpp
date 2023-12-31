#include <gtest/gtest.h>
#include <component.h>

TEST(ComponentTest, EachComponentHasUniqueId) {
  class Component1 : public zgameengine::ecs::Component<Component1> {};
  class Component2 : public zgameengine::ecs::Component<Component2> {};
  EXPECT_NE(Component1::Type(), Component2::Type());
}

TEST(ComponentTest, SameComponentHasSameId) {
  class Component3 : public zgameengine::ecs::Component<Component3> {};
  auto a = Component3::Type();
  auto b = Component3::Type();
  EXPECT_EQ(a, b);
}
