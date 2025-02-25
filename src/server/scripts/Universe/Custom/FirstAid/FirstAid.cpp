/* ------------------------------------ */
/* AUTHOR   Aurøra                      */
/*    FOR   Universe Private Server     */
/* ------------------------------------ */

class universe_first_aid : public PlayerScript
{
private:
    bool isEnabled = true;
    uint32 firstAid = 45542; /* First Aid */

public:
    universe_first_aid() : PlayerScript("universe_first_aid") {}

    void OnLogin(Player* player, bool /*firstLogin*/) {
        if (isEnabled) {
            if (!player->HasSpell(firstAid)) {
                player->LearnSpell(firstAid, false);
            }
        }
    }
};

void AddSC_universe_first_aid()
{
    new universe_first_aid();
}
