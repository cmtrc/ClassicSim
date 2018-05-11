
#include "BattleShoutBuff.h"
#include "Warrior.h"
#include "CharacterStats.h"

void BattleShoutBuff::buff_effect_when_applied() {
    pchar->get_stats()->increase_melee_ap(base_ap * ranks_imp_shout[rank_imp_shout]);
}

void BattleShoutBuff::buff_effect_when_removed() {
    pchar->get_stats()->decrease_melee_ap(base_ap * ranks_imp_shout[rank_imp_shout]);
}

void BattleShoutBuff::increase_effect_via_booming_voice() {
    ++rank_booming_voice;
    // TODO: Assert max rank?
    duration = base_duration * ranks_booming_voice[rank_booming_voice];
}

void BattleShoutBuff::decrease_effect_via_booming_voice() {
    --rank_booming_voice;
    assert(rank_booming_voice >= 0);
    duration = base_duration * ranks_booming_voice[rank_booming_voice];
}

void BattleShoutBuff::increase_effect_via_imp_shout() {
    ++rank_imp_shout;
    // TODO: Assert max rank?
}

void BattleShoutBuff::decrease_effect_via_imp_shout() {
    --rank_imp_shout;
    assert(rank_imp_shout >= 0);
}