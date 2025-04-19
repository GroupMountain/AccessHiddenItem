#pragma once
#include <string>
#include <vector>

// 这里用小写，保持和Addon一致
enum class CreativeCategory {
    construction = 1,
    nature       = 2,
    equipment    = 3,
    items        = 4,
};

struct Config {
    int version = 2;

    struct ItemEntry {
        std::string      type;
        CreativeCategory creative_category;
        std::string      item_group;
        std::string      nbt;
    };

    std::vector<ItemEntry> creative_items = {
        ItemEntry{
                  .type              = "minecraft:filled_map",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:npc_spawn_egg",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:agent_spawn_egg",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:ender_dragon_spawn_egg",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:wither_spawn_egg",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:spawn_egg",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:written_book",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:command_block_minecart",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:suspicious_stew",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:board",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:lodestone_compass",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_0",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_1",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_2",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_3",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_4",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_5",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_6",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_7",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_8",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_9",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_10",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_11",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_12",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_13",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_14",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:light_block_15",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:chalkboard",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:client_request_placeholder_block",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:structure_void",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:border_block",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:allow",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:deny",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:barrier",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:structure_block",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:jigsaw",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:command_block",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:chain_command_block",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:repeating_command_block",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:portal",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:end_portal",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:end_gateway",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:invisible_bedrock",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:camera",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:flowing_water",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:water",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:flowing_lava",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:lava",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:fire",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:soul_fire",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:frosted_ice",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:info_update",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:info_update2",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:reserved6",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:stonecutter",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:glowingobsidian",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:netherreactor",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:daylight_detector_inverted",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:lit_furnace",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:lit_smoker",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:lit_blast_furnace",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:lit_redstone_ore",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:lit_deepslate_redstone_ore",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:cocoa",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:standing_sign",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:wall_sign",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:spruce_standing_sign",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:spruce_wall_sign",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:birch_standing_sign",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:birch_wall_sign",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:jungle_standing_sign",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:jungle_wall_sign",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:acacia_standing_sign",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:acacia_wall_sign",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:darkoak_standing_sign",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:darkoak_wall_sign",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.bed",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.wooden_door",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.iron_door",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.spruce_door",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.birch_door",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.jungle_door",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.acacia_door",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.dark_oak_door",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:redstone_wire",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:unlit_redstone_torch",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:lit_redstone_lamp",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:unpowered_comparator",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:powered_comparator",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:pumpkin_stem",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:melon_stem",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.kelp",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:bamboo_sapling",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:sticky_piston_arm_collision",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:piston_arm_collision",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:unpowered_repeater",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:powered_repeater",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:wall_banner",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:moving_block",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:double_stone_slab",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:double_wooden_slab",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:double_stone_block_slab2",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:double_stone_block_slab3",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:double_stone_block_slab4",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:cobbled_deepslate_double_slab",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:polished_deepslate_double_slab",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:deepslate_tile_double_slab",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:deepslate_brick_double_slab",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.wheat",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.cake",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.nether_wart",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.brewing_stand",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.cauldron",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:lava_cauldron",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:trip_wire",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.flower_pot",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:carrots",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:potatoes",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.frame",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.beetroot",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:sweet_berry_bush",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:item.campfire",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
        ItemEntry{
                  .type              = "minecraft:bubble_column",
                  .creative_category = CreativeCategory::nature,
                  .item_group        = "",
                  .nbt               = "{}"
        },
    };
};