#pragma once
#include <cstdint>
#include <vector>
#include <utils/TypeAliases.hpp>
#include <utils/GameContext.hpp>
/*----------------------------------------------------------------------------------------*/

namespace SalsaEngine {

struct EntityManager_t : public GameContext_t {

    explicit EntityManager_t();

    static constexpr inline std::size_t kDEFAULT_INIT_ENTITIES { 5500 };

    void CreateEntity(uint32_t xPos, uint32_t yPos, std::string_view pngFile);
    const VecEntities_t& GetEntities() const override final { return _allEntities; }


private:

    VecEntities_t _allEntities {};

};

}; // namespace SalsaEngine

