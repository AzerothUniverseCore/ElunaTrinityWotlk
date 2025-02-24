/*
 * This file is part of the AzerothUniverseCoreLegacy Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// This is where scripts' loading functions should be declared:

/* ######### Custom ######## > */
void AddSolocraftScripts();
void AddSC_AutoBalance();
/* ######################## > */

/* ######### Spells ######## > */
void AddSC_bloodmage_spell_scripts();
void AddSC_demon_hunter_spell_scripts();
void AddSC_evoker_spell_scripts();
void AddSC_knight_spell_scripts();
void AddSC_monk_spell_scripts();
void AddSC_tamer_spell_scripts();
void AddSC_hero_spell_scripts();
/* ######################## > */

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddUniverseScripts()
{
	/* ######### Custom ######## > */
	AddSolocraftScripts();
	// VAS AutoBalance
    AddSC_AutoBalance();
    /* ######################## > */
	
	/* ######### Spells ######## > */
	AddSC_bloodmage_spell_scripts();
    AddSC_demon_hunter_spell_scripts();
	AddSC_evoker_spell_scripts();
	AddSC_knight_spell_scripts();
	AddSC_monk_spell_scripts();
	AddSC_tamer_spell_scripts();
	AddSC_hero_spell_scripts();
    /* ######################## > */
}
