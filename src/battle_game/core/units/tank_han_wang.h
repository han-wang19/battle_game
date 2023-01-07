#pragma once 
#include "battle_game/core/unit.h"

namespace battle_game::unit {
class TankHanWang : public Tank {
    public:
        TankHanWang(GameCore *game_core, uint32_t id, uint32_t player_id);
    protected:
        [[nodiscard]] const char *UnitName() const override;
        [[nodiscard]] const char *Author() const override;
};
}