#region Local Var
	auto uLocal_0 = 0;
	auto uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	auto uLocal_12 = 0;
	auto uLocal_13 = 0;
	float fLocal_14 = 0;
	auto uLocal_15 = 0;
	auto uLocal_16 = 0;
	int iLocal_17 = 0;
	auto uLocal_18 = 0;
	auto uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	auto uLocal_27 = 0;
	int iLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	auto uLocal_43 = 0;
	auto uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int[] iLocal_52 = new int[12];
	Vector3[] vLocal_65 = new Vector3[12];
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	auto uLocal_105 = 0;
	int iLocal_106 = 0;
	int[] iLocal_107 = new int[10];
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	auto uLocal_120 = 0;
	auto uLocal_121 = 0;
	auto uLocal_122 = 0;
	auto uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	struct<7> Local_128 = 0;
	auto uLocal_135 = 0;
	int iLocal_136 = 0;
	auto uLocal_137 = 0;
	auto uLocal_138 = 0;
	auto uLocal_139 = 0;
	auto uLocal_140 = 0;
	auto uLocal_141 = 0;
	int iLocal_142 = 0;
	auto uLocal_143 = 0;
	auto uLocal_144 = 0;
	auto uLocal_145 = 16;
	auto uLocal_146 = 0;
	auto uLocal_147 = 0;
	auto uLocal_148 = 0;
	auto uLocal_149 = 0;
	auto uLocal_150 = 0;
	auto uLocal_151 = 0;
	auto uLocal_152 = 0;
	auto uLocal_153 = 0;
	auto uLocal_154 = 0;
	auto uLocal_155 = 0;
	auto uLocal_156 = 0;
	auto uLocal_157 = 0;
	auto uLocal_158 = 0;
	auto uLocal_159 = 0;
	auto uLocal_160 = 0;
	auto uLocal_161 = 0;
	auto uLocal_162 = 0;
	auto uLocal_163 = 0;
	auto uLocal_164 = 0;
	auto uLocal_165 = 0;
	auto uLocal_166 = 0;
	auto uLocal_167 = 0;
	auto uLocal_168 = 0;
	auto uLocal_169 = 0;
	auto uLocal_170 = 0;
	auto uLocal_171 = 0;
	auto uLocal_172 = 0;
	auto uLocal_173 = 0;
	auto uLocal_174 = 0;
	auto uLocal_175 = 0;
	auto uLocal_176 = 0;
	auto uLocal_177 = 0;
	auto uLocal_178 = 0;
	auto uLocal_179 = 0;
	auto uLocal_180 = 0;
	auto uLocal_181 = 0;
	auto uLocal_182 = 0;
	auto uLocal_183 = 0;
	auto uLocal_184 = 0;
	auto uLocal_185 = 0;
	auto uLocal_186 = 0;
	auto uLocal_187 = 0;
	auto uLocal_188 = 0;
	auto uLocal_189 = 0;
	auto uLocal_190 = 0;
	auto uLocal_191 = 0;
	auto uLocal_192 = 0;
	auto uLocal_193 = 0;
	auto uLocal_194 = 0;
	auto uLocal_195 = 0;
	auto uLocal_196 = 0;
	auto uLocal_197 = 0;
	auto uLocal_198 = 0;
	auto uLocal_199 = 0;
	auto uLocal_200 = 0;
	auto uLocal_201 = 0;
	auto uLocal_202 = 0;
	auto uLocal_203 = 0;
	auto uLocal_204 = 0;
	auto uLocal_205 = 0;
	auto uLocal_206 = 0;
	auto uLocal_207 = 0;
	auto uLocal_208 = 0;
	auto uLocal_209 = 0;
	auto uLocal_210 = 0;
	auto uLocal_211 = 0;
	auto uLocal_212 = 0;
	auto uLocal_213 = 0;
	auto uLocal_214 = 0;
	auto uLocal_215 = 0;
	auto uLocal_216 = 0;
	auto uLocal_217 = 0;
	auto uLocal_218 = 0;
	auto uLocal_219 = 0;
	auto uLocal_220 = 0;
	auto uLocal_221 = 0;
	auto uLocal_222 = 0;
	auto uLocal_223 = 0;
	auto uLocal_224 = 0;
	auto uLocal_225 = 0;
	auto uLocal_226 = 0;
	auto uLocal_227 = 0;
	auto uLocal_228 = 0;
	auto uLocal_229 = 0;
	auto uLocal_230 = 0;
	auto uLocal_231 = 0;
	auto uLocal_232 = 0;
	auto uLocal_233 = 0;
	auto uLocal_234 = 0;
	auto uLocal_235 = 0;
	auto uLocal_236 = 0;
	auto uLocal_237 = 0;
	auto uLocal_238 = 0;
	auto uLocal_239 = 0;
	auto uLocal_240 = 0;
	auto uLocal_241 = 0;
	auto uLocal_242 = 0;
	auto uLocal_243 = 0;
	auto uLocal_244 = 0;
	auto uLocal_245 = 0;
	auto uLocal_246 = 0;
	auto uLocal_247 = 0;
	auto uLocal_248 = 0;
	auto uLocal_249 = 0;
	auto uLocal_250 = 0;
	auto uLocal_251 = 0;
	auto uLocal_252 = 0;
	auto uLocal_253 = 0;
	auto uLocal_254 = 0;
	auto uLocal_255 = 0;
	auto uLocal_256 = 0;
	auto uLocal_257 = 0;
	auto uLocal_258 = 0;
	auto uLocal_259 = 0;
	auto uLocal_260 = 0;
	auto uLocal_261 = 0;
	auto uLocal_262 = 0;
	auto uLocal_263 = 0;
	auto uLocal_264 = 0;
	auto uLocal_265 = 0;
	auto uLocal_266 = 0;
	auto uLocal_267 = 0;
	auto uLocal_268 = 0;
	auto uLocal_269 = 0;
	auto uLocal_270 = 0;
	auto uLocal_271 = 0;
	auto uLocal_272 = 0;
	auto uLocal_273 = 0;
	auto uLocal_274 = 0;
	auto uLocal_275 = 0;
	auto uLocal_276 = 0;
	auto uLocal_277 = 0;
	auto uLocal_278 = 0;
	auto uLocal_279 = 0;
	auto uLocal_280 = 0;
	auto uLocal_281 = 0;
	auto uLocal_282 = 0;
	auto uLocal_283 = 0;
	auto uLocal_284 = 0;
	auto uLocal_285 = 0;
	auto uLocal_286 = 0;
	auto uLocal_287 = 0;
	auto uLocal_288 = 0;
	auto uLocal_289 = 0;
	auto uLocal_290 = 0;
	auto uLocal_291 = 0;
	auto uLocal_292 = 0;
	auto uLocal_293 = 0;
	auto uLocal_294 = 0;
	auto uLocal_295 = 0;
	auto uLocal_296 = 0;
	auto uLocal_297 = 0;
	auto uLocal_298 = 0;
	auto uLocal_299 = 0;
	auto uLocal_300 = 0;
	auto uLocal_301 = 0;
	auto uLocal_302 = 0;
	auto uLocal_303 = 0;
	auto uLocal_304 = 0;
	auto uLocal_305 = 0;
	auto uLocal_306 = 0;
	auto uLocal_307 = 0;
	auto uLocal_308 = 0;
	auto uLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	Vector3 vLocal_312 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	struct<76> Local_318 = 10;
	auto uLocal_394 = 0;
	auto uLocal_395 = 0;
	auto uLocal_396 = 0;
	auto uLocal_397 = 0;
	auto uLocal_398 = 0;
	auto uLocal_399 = 0;
	auto uLocal_400 = 0;
	auto uLocal_401 = 0;
	auto uLocal_402 = 0;
	auto uLocal_403 = 0;
	int[] iLocal_404 = new int[3];
	int[] iLocal_408 = new int[3];
	int[] iLocal_412 = new int[3];
	float fLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	struct<13>[] Local_420 = new struct<13>[10];
	auto uLocal_551 = 0;
	auto uLocal_552 = 0;
	auto uLocal_553 = 0;
	auto uLocal_554 = 0;
	auto uLocal_555 = 0;
	auto uLocal_556 = 0;
	auto uLocal_557 = 0;
	auto uLocal_558 = 0;
	auto uLocal_559 = 0;
	auto uLocal_560 = 0;
	auto uLocal_561 = 0;
	auto uLocal_562 = 0;
	auto uLocal_563 = 0;
	auto uLocal_564 = 0;
	auto uLocal_565 = 0;
	auto uLocal_566 = 0;
	auto uLocal_567 = 0;
	auto uLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	var[] uLocal_576 = new var[20];
	var[] uLocal_597 = new var[20];
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	auto uLocal_620 = 0;
	int iLocal_621 = 0;
	auto uLocal_622 = 0;
	auto uLocal_623 = 0;
	auto uLocal_624 = 0;
	Vector3 vLocal_625 = 0;
	int iLocal_628 = 0;
	struct<41> Local_629 = 3;
	auto uLocal_670 = 0;
	auto uLocal_671 = 0;
	auto uLocal_672 = 0;
	auto uLocal_673 = 0;
#endregion

void main()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_416 = 0f;
	iLocal_417 = true;
	vLocal_625 = {1683.682f, 2518.867f, 44.5651f};
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_83(0);
	}
	iLocal_311 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		clear_player_has_damaged_at_least_one_non_animal_ped(player_id());
	}
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_311, 0))
		{
			func_83(0);
		}
		func_82();
		vLocal_312 = {ENTITY::GET_ENTITY_COORDS(iLocal_311, 1)};
		switch (iLocal_310)
		{
			case 0:
				func_80();
				iLocal_310 = 1;
				break;
			
			case 1:
				if (!Global_25128)
				{
					func_79();
					func_78();
					func_77();
					func_75();
					iLocal_310 = 2;
				}
				break;
			
			case 2:
				if ((((func_74() && func_73()) && func_72()) && func_71()) && func_70())
				{
					iLocal_310 = 3;
				}
				break;
			
			case 3:
				func_64();
				wait(false);
				func_63();
				wait(false);
				func_60();
				func_59();
				iLocal_310 = 4;
				break;
			
			case 4:
				if (!Global_25128)
				{
					if (Global_88539)
					{
						func_83(0);
					}
					func_34();
					func_33();
					func_30();
					func_29();
					func_27();
					func_5();
					func_4();
				}
				else if (func_1(0))
				{
					func_83(1);
				}
				break;
		}
		wait(false);
	}
}

bool func_1(int iParam0)
{
	if (iParam0)
	{
		if (func_3())
		{
			return true;
		}
	}
	if (func_2(14))
	{
		return true;
	}
	return false;
}

int func_2(int iParam0)
{
	return Global_35711 == iParam0;
}

bool func_3()
{
	if (Global_100101)
	{
		return true;
	}
	if (!func_2(14) && _get_number_of_instances_of_streamed_script(joaat("director_mode")) > 0)
	{
		return true;
	}
	return false;
}

void func_4()
{
	int iVar0;
	int iVar1;
	
	iVar1 = false;
	if (iLocal_51 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, 0, true, 0))
			{
				if (!iLocal_103)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[0] = 1;
				}
			}
			else
			{
				iLocal_107[0] = 0;
			}
		}
	}
	else if (iLocal_51 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, 0, true, 0))
			{
				if (!iLocal_103)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[1] = 1;
				}
			}
			else
			{
				iLocal_107[1] = 0;
			}
		}
	}
	else if (iLocal_51 == 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, 0, true, 0))
			{
				if (!iLocal_103)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[2] = 1;
				}
			}
			else
			{
				iLocal_107[2] = 0;
			}
		}
	}
	else if (iLocal_51 == 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, 0, true, 0))
			{
				if (!iLocal_103)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[3] = 1;
				}
			}
			else
			{
				iLocal_107[3] = 0;
			}
		}
	}
	else if (iLocal_51 == 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, 0, true, 0))
			{
				if (!iLocal_103)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[4] = 1;
				}
			}
			else
			{
				iLocal_107[4] = 0;
			}
		}
	}
	else if (iLocal_51 == 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, 0, true, 0))
			{
				if (!iLocal_103)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[5] = 1;
				}
			}
			else
			{
				iLocal_107[5] = 0;
			}
		}
	}
	else if (iLocal_51 == 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, 0, true, 0))
			{
				if (!iLocal_103)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[6] = 1;
				}
			}
			else
			{
				iLocal_107[6] = 0;
			}
		}
	}
	else if (iLocal_51 == 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, true, 0))
			{
				if (!iLocal_103)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[7] = 1;
				}
			}
			else
			{
				iLocal_107[7] = 0;
			}
		}
	}
	else if (iLocal_51 == 9)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, true, 0))
			{
				if (!iLocal_103)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[8] = 1;
				}
			}
			else
			{
				iLocal_107[8] = 0;
			}
		}
	}
	else if (iLocal_51 == 10)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, 0, true, 0))
			{
				if (!iLocal_103)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[9] = 1;
				}
			}
			else
			{
				iLocal_107[9] = 0;
			}
		}
	}
	iLocal_51++;
	if (iLocal_51 > 10)
	{
		iLocal_51 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_107[iVar0])
			{
				iVar1 = true;
			}
			iVar0++;
		}
		if (!iVar1)
		{
			if (!iLocal_103)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
				AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
			}
		}
	}
}

void func_5()
{
	Vector3 vVar0;
	
	switch (iLocal_50)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
			{
				iLocal_50++;
			}
			break;
		
		case 1:
			iLocal_124 = create_vehicle(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, 1, true);
			iLocal_126 = PED::CREATE_PED_inside_vehicle(iLocal_124, 6, joaat("s_m_y_cop_01"), -1, 1, true);
			func_26(&iLocal_126);
			iLocal_50++;
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vVar0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			}
			if ((func_16(iLocal_126, iLocal_124, &Local_128, &uLocal_135, 0, 1, 0, 1, 1) || func_16(iLocal_127, iLocal_125, &Local_128, &uLocal_135, 0, 1, 0, 1, 1)) || (func_15(vVar0, 4, 20, 0) && !is_ped_in_flying_vehicle(PLAYER::PLAYER_PED_ID())))
			{
				_door_control(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, false, 0f, 50f, 0f);
				_door_control(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, false, 0f, 50f, 0f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_126, 0))
				{
					task_combat_ped(iLocal_126, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				if (!func_14(&iLocal_136))
				{
					func_11(&iLocal_136);
				}
				iLocal_50++;
			}
			break;
		
		case 3:
			if (func_14(&iLocal_136))
			{
				if (func_8(&iLocal_136) > 15f)
				{
					iLocal_125 = create_vehicle(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, 1, true);
					iLocal_127 = PED::CREATE_PED_inside_vehicle(iLocal_125, 6, joaat("s_m_y_cop_01"), -1, 1, true);
					func_26(&iLocal_127);
					task_combat_ped(iLocal_127, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_50++;
				}
				else if (get_player_wanted_level(player_id()) == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						vVar0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
					}
					if (func_7(1818.237f, 2604.927f, 44.57381f, vVar0, 1125515264))
					{
						func_6();
						iLocal_50 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (get_player_wanted_level(player_id()) == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					vVar0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
				}
				if (func_7(1818.237f, 2604.927f, 44.57381f, vVar0, 1125515264))
				{
					func_6();
					iLocal_50 = 0;
				}
			}
			break;
	}
}

void func_6()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		delete_vehicle(&iLocal_124);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_126))
	{
		PED::DELETE_PED(&iLocal_126);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		delete_vehicle(&iLocal_125);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_127))
	{
		PED::DELETE_PED(&iLocal_127);
	}
}

bool func_7(Vector3 vParam0, Vector3 vParam1, float fParam2)
{
	if (vdist2(vParam0, vParam3) < fParam6 * fParam6)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_124) && ENTITY::DOES_ENTITY_EXIST(iLocal_126)) && ENTITY::DOES_ENTITY_EXIST(iLocal_125)) && ENTITY::DOES_ENTITY_EXIST(iLocal_127))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_124) || !is_entity_on_screen(iLocal_124))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_126) || !is_entity_on_screen(iLocal_126))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_125) || !is_entity_on_screen(iLocal_125))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_127) || !is_entity_on_screen(iLocal_127))
						{
							return true;
						}
					}
				}
			}
		}
	}
	else if (vdist2(vParam0, vParam3) > 62500f)
	{
		return true;
	}
	return false;
}

float func_8(int iParam0)
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_9(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_9(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return to_float(iVar0) / 1000f;
	}
	return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
}

int func_10(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(*iParam0, 2);
}

void func_11(int iParam0)
{
	if (!func_14(iParam0))
	{
		func_12(iParam0);
	}
}

void func_12(int iParam0)
{
	func_13(iParam0, 0f);
}

void func_13(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_9(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - fParam1;
	GAMEPLAY::SET_BIT(iParam0, true);
	GAMEPLAY::CLEAR_BIT(iParam0, 2);
	*iParam0.f_2 = 0f;
}

int func_14(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(*iParam0, true);
}

bool func_15(Vector3 vParam0, int iParam1, int iParam2, int iParam3)
{
	Vector3[] vVar0 = new Vector3[15];
	Vector3[] vVar46 = new Vector3[15];
	float[] fVar92 = new float[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = {-1332.211f, 100.4608f, 40.38437f};
			vVar46[0 /*3*/] = {-1094.238f, 148.4274f, 73f};
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = {-999.7344f, -110.2231f, 25.25706f};
			vVar46[1 /*3*/] = {-1149.494f, 109.2558f, 73f};
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = {-1035.113f, -84.95885f, 28.2746f};
			vVar46[2 /*3*/] = {-1261.103f, 50.08148f, 73f};
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = {-804.3439f, -3346.5f, 10f};
			vVar46[0 /*3*/] = {-1816.954f, -2768.893f, IntToFloat(250 + iParam4)};
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = {-1911.488f, -2934.197f, 10f};
			vVar46[1 /*3*/] = {-968.6236f, -3477.748f, IntToFloat(250 + iParam4)};
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = {-844.9433f, -2802.785f, 10f};
			vVar46[2 /*3*/] = {-1011.081f, -3086.904f, IntToFloat(250 + iParam4)};
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = {-1021.086f, -2952.277f, 10f};
			vVar46[3 /*3*/] = {-1599.008f, -2616.271f, IntToFloat(250 + iParam4)};
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = {-1027.136f, -2436.457f, 10f};
			vVar46[4 /*3*/] = {-1392.61f, -2226.763f, IntToFloat(250 + iParam4)};
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = {-1497.549f, -2408.712f, 10f};
			vVar46[5 /*3*/] = {-1136.917f, -2617.955f, IntToFloat(250 + iParam4)};
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = {-982.7924f, -2831.709f, 12.93313f};
			vVar46[6 /*3*/] = {-966.4677f, -2803.458f, 16.68313f};
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = {-1110.083f, -3496.806f, 12f};
			vVar46[7 /*3*/] = {-1955.298f, -3010.431f, IntToFloat(250 + iParam4)};
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = {-1886.899f, -3193.024f, 12f};
			vVar46[8 /*3*/] = {-1836.143f, -3105.268f, IntToFloat(250 + iParam4)};
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = {-1134.337f, -3535.648f, 12f};
			vVar46[9 /*3*/] = {-1259.649f, -3463.486f, IntToFloat(250 + iParam4)};
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = {-969.1279f, -3463.899f, 12f};
			vVar46[10 /*3*/] = {-896.3734f, -3505.715f, IntToFloat(250 + iParam4)};
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = {-1369.491f, -2173.579f, 10f};
			vVar46[11 /*3*/] = {-1685.626f, -2720.364f, IntToFloat(250 + iParam4)};
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = {-1010.926f, -3550.943f, 10f};
			vVar46[12 /*3*/] = {-1110.198f, -3493.617f, IntToFloat(250 + iParam4)};
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = {-1773.944f, 3287.334f, 30f};
			vVar46[0 /*3*/] = {-2029.776f, 2845.083f, IntToFloat(250 + iParam4)};
			fVar92[0] = 250f;
			vVar0[1 /*3*/] = {-2725.889f, 3291.099f, 30f};
			vVar46[1 /*3*/] = {-2009.182f, 2879.835f, IntToFloat(250 + iParam4)};
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = {-2442.026f, 3326.699f, 30f};
			vVar46[2 /*3*/] = {-2033.928f, 3089.049f, IntToFloat(250 + iParam4)};
			fVar92[2] = 200f;
			vVar0[3 /*3*/] = {-1917.165f, 3374.209f, 30f};
			vVar46[3 /*3*/] = {-2016.791f, 3195.058f, IntToFloat(250 + iParam4)};
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = {-2192.753f, 3373.278f, 30f};
			vVar46[4 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
			fVar92[4] = 140.5f;
			vVar0[5 /*3*/] = {-2077.663f, 3344.514f, 30f};
			vVar46[5 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = {-2861.755f, 3352.661f, 30f};
			vVar46[6 /*3*/] = {-2715.871f, 3269.916f, IntToFloat(250 + iParam4)};
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = {-2005.574f, 3364.533f, 30f};
			vVar46[7 /*3*/] = {-1977.569f, 3330.888f, IntToFloat(250 + iParam4)};
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = {-1682.235f, 3004.285f, 30f};
			vVar46[8 /*3*/] = {-1942.747f, 2947.441f, IntToFloat(250 + iParam4)};
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = {-2393.295f, 2936.406f, 31.6801f};
			vVar46[9 /*3*/] = {-2453.037f, 3006.863f, 52.31003f};
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = {-2347.185f, 3023.83f, 31.56573f};
			vVar46[10 /*3*/] = {-2517.33f, 2989.063f, 49.95644f};
			fVar92[10] = 127.25f;
			vVar0[11 /*3*/] = {-2259.922f, 3358.04f, 29.99972f};
			vVar46[11 /*3*/] = {-2299.772f, 3385.79f, 38.06014f};
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = {-2476.309f, 3363.914f, 31.67933f};
			vVar46[12 /*3*/] = {-2431.981f, 3287.669f, 39.97826f};
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = {-2103.081f, 2797.783f, 29.37864f};
			vVar46[13 /*3*/] = {-2096.821f, 2874.423f, 57.80989f};
			fVar92[13] = 65.75f;
			if (iParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[10 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[11 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[12 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[13 /*3*/].f_2 += IntToFloat(iVar111);
			iVar108 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = {1541.607f, 2527.555f, 40f};
			vVar46[0 /*3*/] = {1815.575f, 2535.06f, IntToFloat(150 + iParam4)};
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = {1788.879f, 2445.727f, 40f};
			vVar46[1 /*3*/] = {1716.96f, 2502.957f, IntToFloat(150 + iParam4)};
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = {1601.157f, 2436.244f, 40f};
			vVar46[2 /*3*/] = {1650.078f, 2515.923f, IntToFloat(150 + iParam4)};
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = {1706.331f, 2407.597f, 40f};
			vVar46[3 /*3*/] = {1698.555f, 2460.208f, IntToFloat(150 + iParam4)};
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = {1712.452f, 2756.218f, 40f};
			vVar46[4 /*3*/] = {1718.848f, 2589.162f, IntToFloat(150 + iParam4)};
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = {1830.228f, 2661.24f, 40f};
			vVar46[5 /*3*/] = {1774.812f, 2679.419f, IntToFloat(150 + iParam4)};
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = {1559.05f, 2632.22f, 40f};
			vVar46[6 /*3*/] = {1657.208f, 2595.484f, IntToFloat(150 + iParam4)};
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = {1612.021f, 2716.869f, 40f};
			vVar46[7 /*3*/] = {1657.165f, 2669.721f, IntToFloat(150 + iParam4)};
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = {1809.872f, 2729.827f, 40f};
			vVar46[8 /*3*/] = {1789.855f, 2705.037f, IntToFloat(150 + iParam4)};
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = {1818.789f, 2605.948f, 40f};
			vVar46[9 /*3*/] = {1783.114f, 2606.783f, IntToFloat(150 + iParam4)};
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = {3411.002f, 3663.185f, 20f};
			vVar46[0 /*3*/] = {3615.583f, 3626.194f, IntToFloat(40 + iParam4)};
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = {3426.66f, 3733.078f, 20f};
			vVar46[1 /*3*/] = {3643.801f, 3694.362f, IntToFloat(40 + iParam4)};
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = {3446.036f, 3795.688f, 20f};
			vVar46[2 /*3*/] = {3650.914f, 3766.152f, IntToFloat(40 + iParam4)};
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = {526.053f, -3391.497f, -10f};
			vVar46[0 /*3*/] = {523.2289f, -3118.678f, IntToFloat(10 + iParam4)};
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = {459.4397f, -3199.99f, 4.819676f};
			vVar46[1 /*3*/] = {593.8928f, -3199.998f, 30.06926f};
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = {552.8467f, -3111.054f, 4.819394f};
			vVar46[2 /*3*/] = {585.3137f, -3111.844f, 17.56923f};
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = {598.4666f, -3140.147f, 4.819257f};
			vVar46[3 /*3*/] = {597.4973f, -3117.063f, 17.31926f};
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = {-1108.55f, -570.8798f, 20f};
			vVar46[0 /*3*/] = {-1187.811f, -477.5037f, IntToFloat(50 + iParam4)};
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = {-1201.378f, -485.9673f, 20f};
			vVar46[1 /*3*/] = {-1215.796f, -464.8281f, IntToFloat(50 + iParam4)};
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = {-985.6311f, -525.4233f, 20f};
			vVar46[2 /*3*/] = {-1013.393f, -475.2057f, IntToFloat(50 + iParam4)};
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = {-1055.849f, -477.8226f, 20f};
			vVar46[3 /*3*/] = {-1073.333f, -498.717f, IntToFloat(50 + iParam4)};
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = {461.5684f, -984.572f, 29.43951f};
			vVar46[0 /*3*/] = {471.17f, -984.4292f, 40.14212f};
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = {457.3404f, -984.756f, 34.43951f};
			vVar46[1 /*3*/] = {457.2084f, -993.7189f, 29.38958f};
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = {477.6227f, -986.6f, 40.00819f};
			vVar46[2 /*3*/] = {424.8687f, -986.3279f, 48.71241f};
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = {474.3889f, -974.4613f, 39.55761f};
			vVar46[3 /*3*/] = {474.0358f, -1021.972f, 49.10033f};
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = {442.1768f, -974.1888f, 29.68951f};
			vVar46[4 /*3*/] = {442.1855f, -979.8635f, 33.43951f};
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (is_point_in_angled_area(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, true))
		{
			return true;
		}
		iVar109++;
	}
	return false;
}

bool func_16(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!func_25(*uParam2, 1))
		{
			if (func_24(iParam0, uParam2))
			{
				*uParam3 = 1;
				return true;
			}
		}
		if (!func_25(*uParam2, 2))
		{
			if (get_player_wanted_level(player_id()) > 0)
			{
				*uParam3 = 2;
				return true;
			}
		}
		if (!func_25(*uParam2, 4))
		{
			if (func_22(iVar0, iParam0, uParam2, iParam5))
			{
				*uParam3 = 4;
				return true;
			}
		}
		if (!func_25(*uParam2, 8))
		{
			if (func_21(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return true;
			}
		}
		iVar1 = !func_25(*uParam2, 128);
		if (iParam4)
		{
			if (func_17(iParam0, iParam1, 1, iParam6, iVar1, 1))
			{
				*uParam3 = 32;
				return true;
			}
		}
		else if (!func_25(*uParam2, 16))
		{
			if (func_17(iParam0, iParam1, 0, iParam6, iVar1, iParam8))
			{
				*uParam3 = 16;
				return true;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return true;
		}
	}
	return false;
}

bool func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3)
	{
		if (!iLocal_45)
		{
			iLocal_46 = get_entity_health(iParam0);
			iLocal_45 = true;
		}
		iLocal_47 = get_entity_health(iParam0);
		iLocal_48 = iLocal_46 - iLocal_47;
		iVar0 = get_players_last_vehicle();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return true;
				}
			}
		}
		if (iLocal_45)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return true;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return true;
	}
	if (!iParam3)
	{
		iVar1 = get_players_last_vehicle();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return true;
			}
		}
	}
	if (iParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (is_ped_being_jacked(iParam0))
			{
				if (get_peds_jacker(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return true;
				}
			}
		}
	}
	if (iParam5)
	{
		if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, false, true, 0))
			{
				if (has_player_damaged_at_least_one_ped(player_id()))
				{
					return true;
				}
			}
		}
	}
	if (is_ped_performing_stealth_kill(PLAYER::PLAYER_PED_ID()))
	{
		if (was_ped_killed_by_stealth(iParam0))
		{
			return true;
		}
	}
	if (func_20(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return true;
	}
	if (iParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_18(iParam0, 1) < 1.5f)
		{
			return true;
		}
		else if (is_ped_in_any_vehicle(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), get_vehicle_ped_is_in(iParam0, 0)))
			{
				return true;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return true;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return true;
			}
		}
	}
	return false;
}

auto func_18(int iParam0, int iParam1)
{
	return func_19(get_player_ped(get_player_index()), iParam0, iParam1);
}

auto func_19(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	}
	else
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0)};
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
	}
	else
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 0)};
	}
	return INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar0, vVar3, iParam2);
}

bool func_20(int iParam0, int iParam1)
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (is_ped_shooting(iParam0))
		{
			if (vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < 2.5f)
			{
				if (is_ped_facing_ped(iParam0, iParam1, 180f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_21(int iParam0, int iParam1, auto uParam2)
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (is_ped_shooting(iParam0) && !is_ped_current_weapon_silenced(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(*uParam2.f_4), IntToFloat(*uParam2.f_4), IntToFloat(*uParam2.f_4), false, true, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_22(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	Vector3 vVar0;
	int iVar3;
	
	iVar3 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
	}
	if (is_bullet_in_area(vVar0, 4f, 1))
	{
		return true;
	}
	if (has_bullet_impacted_in_area(vVar0, to_float(*uParam2.f_6), 1, 1))
	{
		return true;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (is_ped_shooting(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(*uParam2.f_6 * 3), IntToFloat(*uParam2.f_6 * 3), IntToFloat(*uParam2.f_6 * 3), false, true, 0))
			{
				if (is_ped_facing_ped(get_ped_index_from_entity_index(iParam1), iParam0, 120f) && has_entity_clear_los_to_entity(iParam1, iParam0, 17))
				{
					return true;
				}
			}
		}
		else
		{
			if (is_ped_in_any_vehicle(get_ped_index_from_entity_index(iParam1), 0))
			{
				iVar3 = get_vehicle_ped_is_in(get_ped_index_from_entity_index(iParam1), 0);
			}
			if (is_ped_planting_bomb(iParam0) || func_23(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(*uParam2.f_6 * 3), IntToFloat(*uParam2.f_6 * 3), IntToFloat(*uParam2.f_6 * 3), false, true, 0))
				{
					if (is_ped_facing_ped(get_ped_index_from_entity_index(iParam1), iParam0, 120f) && has_entity_clear_los_to_entity(iParam1, iParam0, 17))
					{
						return true;
					}
				}
			}
		}
	}
	if (iParam3)
	{
		if (is_projectile_in_area(vVar0.x - IntToFloat(*uParam2.f_6), vVar0.y - IntToFloat(*uParam2.f_6), vVar0.z - IntToFloat(*uParam2.f_6), vVar0.x + IntToFloat(*uParam2.f_6), vVar0.y + IntToFloat(*uParam2.f_6), vVar0.z + IntToFloat(*uParam2.f_6), 0))
		{
			return true;
		}
	}
	return false;
}

bool func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (get_ped_in_vehicle_seat(iParam0, -1) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_19(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (get_entity_player_is_free_aiming_at(player_id(), &iVar1))
							{
								if ((is_entity_a_vehicle(iVar1) && get_vehicle_index_from_entity_index(iVar1) == iParam0) || (is_entity_a_ped(iVar1) && get_ped_index_from_entity_index(iVar1) == get_ped_in_vehicle_seat(iParam0, -1)))
								{
									if ((is_ped_on_foot(PLAYER::PLAYER_PED_ID()) && CONTROLS::IS_CONTROL_PRESSED(0, 24)) || (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && CONTROLS::IS_CONTROL_PRESSED(0, 69)))
									{
										return true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_24(int iParam0, auto uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (is_player_free_aiming_at_entity(player_id(), iParam0) || is_player_targetting_entity(player_id(), iParam0))
			{
				if (is_ped_facing_ped(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_18(iParam0, 1) < *uParam1.f_2)
					{
						if (*uParam1.f_1 == 0)
						{
							*uParam1.f_1 = GAMEPLAY::GET_GAME_TIMER();
						}
						else if (GAMEPLAY::GET_GAME_TIMER() - *uParam1.f_1 > *uParam1.f_3)
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

int func_25(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(int iParam0)
{
	give_weapon_to_ped(*iParam0, joaat("weapon_assaultshotgun"), -1, false, true);
	set_blocking_of_non_temporary_events(*iParam0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
	set_ped_target_loss_response(*iParam0, 1);
	set_ped_combat_movement(*iParam0, 1);
	set_ped_desired_move_blend_ratio(*iParam0, 0f);
	set_ped_keep_task(*iParam0, true);
	set_ped_accuracy(*iParam0, 100);
	set_ped_combat_range(*iParam0, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 23, false);
	set_ped_seeing_range(*iParam0, 1000f);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, true);
}

void func_27()
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (iLocal_574)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_569, 0))
		{
			if (!is_playback_going_on_for_vehicle(iLocal_569))
			{
				start_playback_recorded_vehicle(iLocal_569, 101, "PrisonHeli", 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_570, 0))
			{
				vVar0 = {get_offset_from_entity_in_world_coords(iLocal_570, 0f, 4f, -2f)};
				task_vehicle_aim_at_coord(iLocal_570, vVar0);
			}
			if (iLocal_572)
			{
				if (!func_28())
				{
					iLocal_572 = false;
					set_vehicle_searchlight(iLocal_569, 0, 0);
				}
			}
			else if (func_28())
			{
				iLocal_572 = true;
				set_vehicle_searchlight(iLocal_569, 1, 0);
			}
			if (iLocal_572)
			{
				vVar3 = {ENTITY::GET_ENTITY_COORDS(iLocal_569, 1)};
				if (vdist2(vLocal_312, vVar3) < 90000f)
				{
					if (!iLocal_573)
					{
						iLocal_573 = 1;
					}
				}
			}
		}
		else if (does_blip_exist(iLocal_571))
		{
			remove_blip(&iLocal_571);
		}
	}
}

bool func_28()
{
	if (TIME::GET_CLOCK_HOURS() >= 20 || TIME::GET_CLOCK_HOURS() < 6)
	{
		return true;
	}
	return false;
}

void func_29()
{
	int iVar0;
	Vector3 vVar1;
	
	if (!Local_629.f_18[0])
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
		}
		if (!iLocal_106)
		{
			if (vdist2(vVar1, vLocal_625) < 5625f)
			{
				iLocal_628 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(Local_629.f_27[iVar0]))
		{
			if (!Local_629.f_18[iVar0])
			{
				if (func_16(Local_629.f_27[iVar0], 0, &Local_128, &uLocal_135, 1, 1, 0, 1, 1) || iLocal_628)
				{
					task_combat_ped(Local_629.f_27[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					Local_629.f_18[iVar0] = 1;
				}
			}
			if (!Local_629.f_18[iVar0])
			{
				if (!is_waypoint_playback_going_on_for_ped(Local_629.f_27[iVar0]))
				{
					task_follow_waypoint_recording(Local_629.f_27[iVar0], Local_629.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (does_blip_exist(Local_629.f_36[iVar0]))
		{
			remove_blip(&(Local_629.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_629.f_31[iVar0]))
		{
			if (PED::IS_PED_INJURED(Local_629.f_31[iVar0]))
			{
				if (does_blip_exist(Local_629.f_40[iVar0]))
				{
					remove_blip(&(Local_629.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_629.f_22[0])
	{
		if (!PED::IS_PED_INJURED(Local_629.f_31[0]))
		{
			if ((func_16(Local_629.f_31[0], 0, &Local_128, &uLocal_135, 1, 1, 0, 1, 1) || Local_629.f_18[1] == 1) || iLocal_628)
			{
				AI::CLEAR_PED_TASKS(Local_629.f_31[0]);
				task_combat_ped(Local_629.f_31[0], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_629.f_22[0] = 1;
			}
		}
	}
	if (!Local_629.f_22[1])
	{
		if (!PED::IS_PED_INJURED(Local_629.f_31[1]))
		{
			if ((func_16(Local_629.f_31[1], 0, &Local_128, &uLocal_135, 0, 1, 0, 1, 1) || Local_629.f_18[1] == 1) || iLocal_628)
			{
				AI::CLEAR_PED_TASKS(Local_629.f_31[1]);
				task_combat_ped(Local_629.f_31[1], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_629.f_22[1] = 1;
			}
		}
	}
	if (!Local_629.f_22[2])
	{
		if (!PED::IS_PED_INJURED(Local_629.f_31[2]))
		{
			if ((func_16(Local_629.f_31[2], 0, &Local_128, &uLocal_135, 0, 1, 0, 1, 1) || Local_629.f_18[2] == 1) || iLocal_628)
			{
				AI::CLEAR_PED_TASKS(Local_629.f_31[2]);
				task_combat_ped(Local_629.f_31[2], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_629.f_22[2] = 1;
			}
		}
	}
	if (!Local_629.f_22[3])
	{
		if (!PED::IS_PED_INJURED(Local_629.f_31[3]))
		{
			if ((func_16(Local_629.f_31[3], 0, &Local_128, &uLocal_135, 0, 1, 0, 1, 1) || Local_629.f_18[2] == 1) || iLocal_628)
			{
				AI::CLEAR_PED_TASKS(Local_629.f_31[3]);
				task_combat_ped(Local_629.f_31[3], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_629.f_22[3] = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_629.f_27[1]))
	{
		if (is_waypoint_playback_going_on_for_ped(Local_629.f_27[1]))
		{
			if (!Local_629.f_22[0])
			{
				if (!PED::IS_PED_INJURED(Local_629.f_31[0]))
				{
					task_follow_to_offset_of_entity(Local_629.f_31[0], Local_629.f_27[1], -2f, 0f, 0f, 1f, -1, 0.1f, 1);
				}
			}
			if (!Local_629.f_22[1])
			{
				if (!PED::IS_PED_INJURED(Local_629.f_31[1]))
				{
					task_follow_to_offset_of_entity(Local_629.f_31[1], Local_629.f_27[1], -1f, 0f, 0f, 1f, -1, 0.1f, 1);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_629.f_27[2]))
	{
		if (is_waypoint_playback_going_on_for_ped(Local_629.f_27[2]))
		{
			if (!Local_629.f_22[2])
			{
				if (!PED::IS_PED_INJURED(Local_629.f_31[2]))
				{
					task_follow_to_offset_of_entity(Local_629.f_31[2], Local_629.f_27[2], 1f, 0f, 0f, 1f, -1, 0.1f, 1);
				}
			}
			if (!Local_629.f_22[3])
			{
				if (!PED::IS_PED_INJURED(Local_629.f_31[3]))
				{
					task_follow_to_offset_of_entity(Local_629.f_31[3], Local_629.f_27[2], -1f, 0f, 0f, 1f, -1, 0.1f, 1);
				}
			}
		}
	}
}

void func_30()
{
	int iVar0;
	Vector3 vVar1;
	
	iLocal_419++;
	if (iLocal_419 >= 30)
	{
		if (!iLocal_106)
		{
			if (func_15(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_318.f_64[iVar0]) && !PED::IS_PED_INJURED(Local_318.f_64[iVar0]))
					{
						if (get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) != -1)
						{
							if (get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 1 || get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 2)
							{
								set_ped_accuracy(Local_318.f_64[iVar0], 10);
								iLocal_418 = 1;
							}
						}
						else if (is_ped_in_flying_vehicle(PLAYER::PLAYER_PED_ID()))
						{
							set_ped_accuracy(Local_318.f_64[iVar0], 10);
							iLocal_418 = 1;
						}
						else
						{
							set_ped_accuracy(Local_318.f_64[iVar0], 100);
							iLocal_418 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_418 = 0;
			}
		}
		iLocal_419 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_318.f_64[iVar0]) && !PED::IS_PED_INJURED(Local_318.f_64[iVar0]))
		{
			if (is_player_wanted_level_greater(get_player_index(), 0))
			{
				_0xDC64D2C53493ED12(player_id());
			}
			if ((((func_16(Local_318.f_64[iVar0], 0, &Local_128, &uLocal_135, 0, 1, 0, 1, 1) || is_bullet_in_area(Local_318[iVar0 /*3*/], 20f, 1)) || is_sniper_bullet_in_area(Local_318[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_318[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_418) || func_32(&(Local_318.f_64[iVar0])))
			{
				if (!func_2(5))
				{
					if (is_ped_in_flying_vehicle(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_119)
						{
							func_31(iVar0);
						}
					}
					else
					{
						func_31(iVar0);
					}
				}
			}
			else if (get_player_wanted_level(player_id()) == 0)
			{
				if (!is_waypoint_playback_going_on_for_ped(Local_318.f_64[iVar0]))
				{
					task_follow_waypoint_recording(Local_318.f_64[iVar0], Local_318.f_42[iVar0], 0, 0, -1);
					Local_318.f_53[iVar0] = 0;
				}
			}
		}
		else if (does_blip_exist(Local_318.f_75[iVar0]))
		{
			remove_blip(&(Local_318.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_408[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_408[iVar0], 0)) && ENTITY::DOES_ENTITY_EXIST(iLocal_404[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_404[iVar0], 0))
		{
			vVar1 = {get_offset_from_entity_in_world_coords(iLocal_408[iVar0], 0f, 3.5f, -2f)};
			task_vehicle_aim_at_coord(iLocal_408[iVar0], vVar1);
			set_vehicle_engine_on(iLocal_404[iVar0], false, 0, 0);
			if (iLocal_412[iVar0])
			{
				if (!func_28())
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_404[iVar0], 0))
					{
						iLocal_412[iVar0] = 0;
						set_vehicle_searchlight(iLocal_404[iVar0], 0, 0);
					}
				}
			}
			else if (func_28())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_404[iVar0], 0))
				{
					iLocal_412[iVar0] = 1;
					set_vehicle_searchlight(iLocal_404[iVar0], 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_416 > 20f)
	{
		iLocal_417 = false;
	}
	else if (fLocal_416 < -20f)
	{
		iLocal_417 = true;
	}
	if (iLocal_417)
	{
		fLocal_416 += 0.25f;
	}
	else
	{
		fLocal_416 -= 0.25f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_404[0]))
	{
		set_entity_heading(iLocal_404[0], 53f + fLocal_416);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_404[1]))
	{
		set_entity_heading(iLocal_404[1], 13f + fLocal_416);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_404[2]))
	{
		set_entity_heading(iLocal_404[2], 250f + fLocal_416);
	}
}

void func_31(int iParam0)
{
	if (!Local_318.f_53[iParam0])
	{
		task_shoot_at_entity(Local_318.f_64[iParam0], PLAYER::PLAYER_PED_ID(), -1, 0);
		set_ped_seeing_range(Local_318.f_64[iParam0], 1000f);
		_0xF1C03A5352243A30(Local_318.f_64[iParam0]);
		Local_318.f_53[iParam0] = 1;
		if (get_player_wanted_level(player_id()) == 0)
		{
			set_player_wanted_level(player_id(), 3, 0);
			set_player_wanted_level_now(player_id(), 0);
		}
	}
}

bool func_32(auto uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(*uParam0, 1)};
	}
	if (vdist2(vVar0, vVar3) < 100f)
	{
		return true;
	}
	return false;
}

void func_33()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (get_player_wanted_level(player_id()) >= 2 || func_15(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, 150, 0))
		{
			if (prepare_alarm("PRISON_ALARMS"))
			{
				start_alarm("PRISON_ALARMS", false);
			}
		}
		else
		{
			stop_alarm("PRISON_ALARMS", false);
		}
	}
}

void func_34()
{
	Vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, 0, true, 0))
		{
			func_57(&Local_128, 2);
		}
		else
		{
			func_55(&Local_128, 2);
		}
	}
	if (iLocal_49 > 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			vVar0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			if (is_ped_in_flying_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				if (func_15(vVar0, 4, 150, 0))
				{
					func_54(4, 1);
					if (!func_14(&iLocal_142))
					{
						func_11(&iLocal_142);
					}
					if (!iLocal_118)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_126) && !ENTITY::IS_ENTITY_DEAD(iLocal_126, 0))
						{
							func_53(&uLocal_145, 8, iLocal_126, "TANNOY", 0, 1);
							if (func_37(&uLocal_145, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								iLocal_106 = true;
								iLocal_118 = true;
							}
						}
					}
				}
				else
				{
					func_54(4, 0);
					if (func_14(&iLocal_142))
					{
						func_12(&iLocal_142);
					}
					iLocal_106 = false;
				}
			}
			else
			{
				func_54(4, 0);
				if (func_14(&iLocal_142))
				{
					func_12(&iLocal_142);
				}
				iLocal_106 = false;
			}
			if (iLocal_106)
			{
				if (func_14(&iLocal_142))
				{
					if (func_8(&iLocal_142) > 10f)
					{
						if (get_player_wanted_level(player_id()) < 4)
						{
							set_player_wanted_level(player_id(), 4, 0);
							set_player_wanted_level_now(player_id(), 0);
							iLocal_119 = true;
							iLocal_106 = false;
							func_54(4, 0);
						}
					}
				}
			}
			if (!iLocal_103)
			{
				if (iLocal_118)
				{
					if (!func_36())
					{
						if (is_player_wanted_level_greater(player_id(), 0))
						{
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							iLocal_103 = true;
						}
					}
				}
				else if (is_player_wanted_level_greater(player_id(), 0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
					iLocal_103 = true;
				}
			}
			if (!iLocal_106)
			{
				if (func_15(vVar0, 4, 100, 0))
				{
					if (!iLocal_103)
					{
						if (iLocal_118)
						{
							if (!func_36())
							{
								AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
								AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
								iLocal_103 = true;
							}
						}
						else
						{
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							iLocal_103 = true;
						}
					}
					func_35();
				}
			}
			iLocal_49 = 0;
		}
	}
	iLocal_49++;
}

void func_35()
{
	int iVar0;
	
	if (!iLocal_102)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			iLocal_52[iVar0] = add_navmesh_blocking_object(vLocal_65[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
			iVar0++;
		}
		iLocal_102 = 1;
	}
}

bool func_36()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

int func_37(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_38(sParam2, iParam3, 0);
}

bool func_38(char* sParam0, int iParam1, int iParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_51();
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return false;
		}
		if (func_50(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_49();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2285, false);
			if (iParam2)
			{
				func_43();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return false;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return false;
				}
			}
			if (Global_14379 == 1)
			{
				return false;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (func_42())
				{
					return false;
				}
				if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_41())
			{
				return false;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return false;
						break;
					
					case 8:
						return false;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 9))
				{
					return false;
				}
			}
			func_40();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_39();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return false;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_51();
	}
	return false;
}

void func_39()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_15712 = 1;
}

void func_40()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = {Global_15794};
	Global_15812 = {Global_15800};
	Global_15767 = Global_15766;
	Global_15836 = {Global_15818};
	Global_15842 = {Global_15824};
	Global_15848 = {Global_15830};
	Global_15854 = {Global_15860};
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = {Global_15743};
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_2284, 16);
}

bool func_41()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_42()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_43()
{
	if (func_2(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_44();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

auto func_44()
{
	func_45();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_45()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_48(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_47(PLAYER::PLAYER_PED_ID());
			if (func_46(iVar0) && (!func_2(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_46(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

int func_46(int iParam0)
{
	return iParam0 < 3;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_46(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_49()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = {0f, 0f, 0f};
}

int func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1338622.f_949, iParam0);
}

void func_51()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_52(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_53(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
	}
	*uParam0[iParam1 /*10*/] = iParam2;
	StringCopy(uParam0[iParam1 /*10*/].f_1, sParam3, 24);
	*(uParam0[iParam1 /*10*/]).f_7 = 1;
	*(uParam0[iParam1 /*10*/]).f_8 = iParam4;
	*(uParam0[iParam1 /*10*/]).f_9 = iParam5;
	if (!Global_69489)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_8 == 0)
			{
				set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else
			{
				set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_9 == 0)
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

void func_54(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&Global_25277, iParam0);
	StringCopy(&(Global_25278[iParam0 /*6*/]), get_this_script_name(), 24);
	Global_25333[iParam0] = iParam1;
}

void func_55(auto uParam0, int iParam1)
{
	func_56(uParam0, iParam1);
}

void func_56(auto uParam0, auto uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_57(auto uParam0, int iParam1)
{
	func_58(uParam0, iParam1);
}

void func_58(auto uParam0, auto uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

void func_59()
{
	set_model_as_no_longer_needed(joaat("s_m_m_security_01"));
	set_model_as_no_longer_needed(joaat("s_m_m_prisguard_01"));
}

void func_60()
{
	func_62();
	func_61();
}

void func_61()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_629.f_27[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_629.f_27[iVar0], 0))
		{
			give_weapon_to_ped(Local_629.f_27[iVar0], joaat("weapon_assaultrifle"), -1, true, true);
			set_entity_lod_dist(Local_629.f_27[iVar0], 1000);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_629.f_27[iVar0], -183807561);
			_0xA9B61A329BFDCBEA(Local_629.f_27[iVar0], false);
			set_blocking_of_non_temporary_events(Local_629.f_27[iVar0], true);
			if (!PED::IS_PED_INJURED(Local_629.f_27[iVar0]))
			{
				task_follow_waypoint_recording(Local_629.f_27[iVar0], Local_629.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_62()
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_629.f_27[iVar0]))
		{
			Local_629.f_27[iVar0] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Local_629[iVar0 /*3*/], Local_629.f_10[iVar0], 1, true);
			wait(false);
		}
		iVar0++;
	}
	vVar1 = {_get_object_offset_from_coords(Local_629[1 /*3*/], Local_629.f_10[1], -2f, 0f, 0f)};
	vVar4 = {_get_object_offset_from_coords(Local_629[1 /*3*/], Local_629.f_10[1], -1f, 0f, 0f)};
	vVar7 = {_get_object_offset_from_coords(Local_629[2 /*3*/], Local_629.f_10[2], 1f, 0f, 0f)};
	vVar10 = {_get_object_offset_from_coords(Local_629[2 /*3*/], Local_629.f_10[2], -1f, 0f, 0f)};
	Local_629.f_31[0] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), vVar1, Local_629.f_10[1], 1, true);
	Local_629.f_31[1] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), vVar4, Local_629.f_10[1], 1, true);
	Local_629.f_31[2] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), vVar7, Local_629.f_10[2], 1, true);
	Local_629.f_31[3] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), vVar10, Local_629.f_10[2], 1, true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_629.f_31[iVar0]))
		{
			give_weapon_to_ped(Local_629.f_31[iVar0], joaat("weapon_assaultrifle"), -1, true, true);
			set_entity_lod_dist(Local_629.f_31[iVar0], 500);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_629.f_31[iVar0], -183807561);
			set_ped_steers_around_peds(Local_629.f_31[iVar0], 0);
			set_blocking_of_non_temporary_events(Local_629.f_31[iVar0], true);
		}
		iVar0++;
	}
	set_model_as_no_longer_needed(joaat("s_m_m_prisguard_01"));
}

void func_63()
{
	if (iLocal_574)
	{
		iLocal_569 = create_vehicle(joaat("polmav"), 10f, 10f, -30f, 0f, 1, true);
		set_vehicle_engine_on(iLocal_569, true, 1, 0);
		set_heli_blades_full_speed(iLocal_569);
		set_entity_velocity(iLocal_569, 0f, 0f, 10f);
		set_entity_lod_dist(iLocal_569, 500);
		if (func_28())
		{
			iLocal_572 = true;
			set_vehicle_searchlight(iLocal_569, 1, 0);
		}
		iLocal_570 = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, true);
		set_ped_into_vehicle(iLocal_570, iLocal_569, -1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_569, 0))
		{
			start_playback_recorded_vehicle(iLocal_569, 101, "PrisonHeli", 1);
		}
		set_model_as_no_longer_needed(joaat("polmav"));
	}
}

void func_64()
{
	func_69();
	func_68();
	func_67();
	func_66();
	func_65();
}

void func_65()
{
	Local_420[0 /*13*/][0 /*3*/] = {1827.69f, 2474.181f, 61.7202f};
	Local_420[0 /*13*/][1 /*3*/] = {1826.054f, 2478.934f, 61.7157f};
	Local_420[0 /*13*/][2 /*3*/] = {1820.909f, 2477.528f, 61.7153f};
	Local_420[0 /*13*/][3 /*3*/] = {1822.585f, 2472.122f, 61.7167f};
	open_patrol_route("miss_Tower_01");
	add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	Local_420[1 /*13*/][0 /*3*/] = {1764.729f, 2409.139f, 61.7533f};
	Local_420[1 /*13*/][1 /*3*/] = {1763.129f, 2413.976f, 61.7328f};
	Local_420[1 /*13*/][2 /*3*/] = {1758.079f, 2411.984f, 61.7403f};
	Local_420[1 /*13*/][3 /*3*/] = {1760.213f, 2406.827f, 61.7419f};
	open_patrol_route("miss_Tower_02");
	add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	Local_420[2 /*13*/][0 /*3*/] = {1658.829f, 2390.888f, 61.7462f};
	Local_420[2 /*13*/][1 /*3*/] = {1662.521f, 2394.692f, 61.7532f};
	Local_420[2 /*13*/][2 /*3*/] = {1658.854f, 2398.062f, 61.7573f};
	Local_420[2 /*13*/][3 /*3*/] = {1655.15f, 2394.705f, 61.7429f};
	open_patrol_route("miss_Tower_03");
	add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f, 55.1775f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f, 44.9049f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f, 44.5652f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	Local_420[3 /*13*/][0 /*3*/] = {1537.28f, 2468.338f, 61.7497f};
	Local_420[3 /*13*/][1 /*3*/] = {1542.189f, 2465.756f, 61.7247f};
	Local_420[3 /*13*/][2 /*3*/] = {1543.899f, 2470.971f, 61.7482f};
	Local_420[3 /*13*/][3 /*3*/] = {1539.14f, 2473.264f, 61.7359f};
	open_patrol_route("miss_Tower_04");
	add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f, 51.3366f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f, 44.8143f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f, 44.8417f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	Local_420[4 /*13*/][0 /*3*/] = {1535.098f, 2581.919f, 61.7312f};
	Local_420[4 /*13*/][1 /*3*/] = {1535.124f, 2581.101f, 61.7002f};
	Local_420[4 /*13*/][2 /*3*/] = {1538.325f, 2585.722f, 61.7251f};
	Local_420[4 /*13*/][3 /*3*/] = {1534.679f, 2589.268f, 61.7123f};
	open_patrol_route("miss_Tower_05");
	add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f, 44.5655f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f, 44.9156f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	Local_420[5 /*13*/][0 /*3*/] = {1566.921f, 2682.525f, 61.7716f};
	Local_420[5 /*13*/][1 /*3*/] = {1567.927f, 2677.463f, 61.7741f};
	Local_420[5 /*13*/][2 /*3*/] = {1572.574f, 2678.193f, 61.7702f};
	Local_420[5 /*13*/][3 /*3*/] = {1572.359f, 2683.086f, 61.7664f};
	open_patrol_route("miss_Tower_06");
	add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f, 37.6965f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f, 44.4309f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	Local_420[6 /*13*/][0 /*3*/] = {1648.104f, 2761.528f, 61.9103f};
	Local_420[6 /*13*/][1 /*3*/] = {1646.051f, 2756.671f, 61.9091f};
	Local_420[6 /*13*/][2 /*3*/] = {1651.533f, 2754.668f, 61.9021f};
	Local_420[6 /*13*/][3 /*3*/] = {1653.125f, 2759.327f, 61.9056f};
	open_patrol_route("miss_Tower_07");
	add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	Local_420[7 /*13*/][0 /*3*/] = {1774.523f, 2766.559f, 61.9143f};
	Local_420[7 /*13*/][1 /*3*/] = {1769.768f, 2763.816f, 61.9248f};
	Local_420[7 /*13*/][2 /*3*/] = {1772.442f, 2759.139f, 61.9193f};
	Local_420[7 /*13*/][3 /*3*/] = {1776.893f, 2762.356f, 61.9258f};
	open_patrol_route("miss_Tower_08");
	add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f, 44.4414f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f, 44.5747f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f, 44.9326f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	Local_420[9 /*13*/][0 /*3*/] = {1824.288f, 2625.042f, 61.9749f};
	Local_420[9 /*13*/][1 /*3*/] = {1820.524f, 2621.49f, 61.9951f};
	Local_420[9 /*13*/][2 /*3*/] = {1820.414f, 2621.544f, 61.9908f};
	Local_420[9 /*13*/][3 /*3*/] = {1823.45f, 2617.477f, 61.9829f};
	open_patrol_route("miss_Tower_10");
	add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
}

void func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_318.f_64[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_318.f_64[iVar0], 0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_318.f_64[iVar0], -183807561);
			PED::SET_PED_CONFIG_FLAG(Local_318.f_64[iVar0], 132, true);
			set_ped_to_inform_respected_friends(Local_318.f_64[iVar0], 300f, 10);
			set_ped_seeing_range(Local_318.f_64[iVar0], 1000f);
			set_ped_id_range(Local_318.f_64[iVar0], 1000f);
			set_ped_hearing_range(Local_318.f_64[iVar0], 1000f);
			PED::SET_PED_COMBAT_ABILITY(Local_318.f_64[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_318.f_64[iVar0], 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_318.f_64[iVar0], 0, false);
			set_ped_target_loss_response(Local_318.f_64[iVar0], 1);
			set_ped_combat_movement(Local_318.f_64[iVar0], 1);
			set_ped_desired_move_blend_ratio(Local_318.f_64[iVar0], 0f);
			set_ped_keep_task(Local_318.f_64[iVar0], true);
			set_ped_accuracy(Local_318.f_64[iVar0], 20);
			set_ped_combat_range(Local_318.f_64[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_318.f_64[iVar0], 23, false);
			give_weapon_to_ped(Local_318.f_64[iVar0], joaat("weapon_sniperrifle"), -1, true, true);
			set_entity_lod_dist(Local_318.f_64[iVar0], 1000);
			set_blocking_of_non_temporary_events(Local_318.f_64[iVar0], true);
			set_ped_seeing_range(Local_318.f_64[iVar0], 1000f);
			if (!PED::IS_PED_INJURED(Local_318.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					task_patrol(Local_318.f_64[iVar0], "miss_Tower_01", 1, 0, 1);
				}
				else if (iVar0 == 1)
				{
					task_patrol(Local_318.f_64[iVar0], "miss_Tower_02", 1, 0, 1);
				}
				else if (iVar0 == 2)
				{
					task_patrol(Local_318.f_64[iVar0], "miss_Tower_03", 1, 0, 1);
				}
				else if (iVar0 == 3)
				{
					task_patrol(Local_318.f_64[iVar0], "miss_Tower_04", 1, 0, 1);
				}
				else if (iVar0 == 4)
				{
					task_patrol(Local_318.f_64[iVar0], "miss_Tower_05", 1, 0, 1);
				}
				else if (iVar0 == 5)
				{
					task_patrol(Local_318.f_64[iVar0], "miss_Tower_06", 1, 0, 1);
				}
				else if (iVar0 == 6)
				{
					task_patrol(Local_318.f_64[iVar0], "miss_Tower_07", 1, 0, 1);
				}
				else if (iVar0 == 7)
				{
					task_patrol(Local_318.f_64[iVar0], "miss_Tower_08", 1, 0, 1);
				}
				else if (iVar0 == 9)
				{
					task_patrol(Local_318.f_64[iVar0], "miss_Tower_10", 1, 0, 1);
				}
				else
				{
					task_follow_waypoint_recording(Local_318.f_64[iVar0], Local_318.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_67()
{
	int iVar0;
	
	if (!CAM::IS_SPHERE_VISIBLE(1823.845f, 2621.267f, 57f, 0.5f))
	{
		iLocal_404[0] = create_vehicle(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, 1, true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_404[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_404[0], 0))
		{
			iLocal_408[0] = PED::CREATE_PED_inside_vehicle(iLocal_404[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, true);
			set_entity_can_be_damaged(iLocal_408[0], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_408[0], iLocal_316);
			set_entity_collision(iLocal_404[0], false, 0);
			set_entity_visible(iLocal_404[0], false, 0);
			set_entity_can_be_damaged(iLocal_404[0], 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_404[0], true);
		}
		wait(false);
	}
	if (!CAM::IS_SPHERE_VISIBLE(1761.418f, 2410.378f, 61f, 0.5f))
	{
		iLocal_404[1] = create_vehicle(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, 1, true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_404[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_404[1], 0))
		{
			iLocal_408[1] = PED::CREATE_PED_inside_vehicle(iLocal_404[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, true);
			set_entity_can_be_damaged(iLocal_408[1], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_408[1], iLocal_316);
			set_entity_collision(iLocal_404[1], false, 0);
			set_entity_visible(iLocal_404[1], false, 0);
			set_entity_can_be_damaged(iLocal_404[1], 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_404[1], true);
		}
		wait(false);
	}
	if (!CAM::IS_SPHERE_VISIBLE(1534.635f, 2585.162f, 61f, 0.5f))
	{
		iLocal_404[2] = create_vehicle(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, 1, true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_404[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_404[2], 0))
		{
			iLocal_408[2] = PED::CREATE_PED_inside_vehicle(iLocal_404[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, true);
			set_entity_can_be_damaged(iLocal_408[2], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_408[2], iLocal_316);
			set_entity_collision(iLocal_404[2], false, 0);
			set_entity_visible(iLocal_404[2], false, 0);
			set_entity_can_be_damaged(iLocal_404[2], 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_404[2], true);
		}
		wait(false);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_408[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_408[iVar0], 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_404[iVar0], 0))
		{
			if (func_28())
			{
				iLocal_412[iVar0] = 1;
				set_vehicle_searchlight(iLocal_404[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_68()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_318.f_64[iVar0]))
		{
			Local_318.f_64[iVar0] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Local_318[iVar0 /*3*/], Local_318.f_31[iVar0], 1, true);
			set_model_as_no_longer_needed(joaat("s_m_m_prisguard_01"));
			wait(false);
		}
		iVar0++;
	}
}

void func_69()
{
	Local_318[0 /*3*/] = {1827.69f, 2474.181f, 61.7202f};
	Local_318[1 /*3*/] = {1764.729f, 2409.139f, 61.7533f};
	Local_318[2 /*3*/] = {1658.829f, 2390.888f, 61.7462f};
	Local_318[3 /*3*/] = {1537.28f, 2468.338f, 61.7497f};
	Local_318[4 /*3*/] = {1530.493f, 2585.172f, 61.7001f};
	Local_318[5 /*3*/] = {1566.921f, 2682.525f, 61.7716f};
	Local_318[6 /*3*/] = {1648.104f, 2761.528f, 61.9103f};
	Local_318[7 /*3*/] = {1774.523f, 2766.559f, 61.9143f};
	Local_318[8 /*3*/] = {1852.475f, 2697.632f, 61.9547f};
	Local_318[9 /*3*/] = {1824.288f, 2625.042f, 61.9749f};
	Local_318.f_31[0] = 248.9733f;
	Local_318.f_31[1] = 45.8793f;
	Local_318.f_31[2] = 186.3656f;
	Local_318.f_31[3] = 313.5206f;
	Local_318.f_31[4] = 95.9574f;
	Local_318.f_31[5] = 289.3531f;
	Local_318.f_31[6] = 13.7511f;
	Local_318.f_31[7] = 0f;
	Local_318.f_31[8] = 208.5786f;
	Local_318.f_31[9] = 280.9389f;
}

bool func_70()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!get_is_waypoint_recording_loaded(Local_629.f_14[iVar0]))
		{
			wait(false);
		}
		iVar0++;
	}
	return true;
}

bool func_71()
{
	if (iLocal_618)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_prisoner_01")))
		{
			return false;
		}
	}
	return true;
}

bool func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!get_is_waypoint_recording_loaded(Local_318.f_42[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_prisguard_01")))
	{
		return false;
	}
	return true;
}

bool func_73()
{
	if (iLocal_574)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
		{
			return false;
		}
		if (!has_vehicle_recording_been_loaded(101, "PrisonHeli"))
		{
			return false;
		}
	}
	return true;
}

bool func_74()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_prisguard_01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
	{
		return false;
	}
	return true;
}

void func_75()
{
	int iVar0;
	
	func_76();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		request_waypoint_recording(Local_629.f_14[iVar0]);
		iVar0++;
	}
}

void func_76()
{
	Local_629[0 /*3*/] = {1768.628f, 2538.97f, 44.4054f};
	Local_629[1 /*3*/] = {1633.613f, 2498.849f, 44.4117f};
	Local_629[2 /*3*/] = {1622.61f, 2555.683f, 44.4051f};
	Local_629.f_10[0] = 0f;
	Local_629.f_10[1] = 0f;
	Local_629.f_10[2] = 198.4323f;
	Local_629.f_14[0] = "PatrolGuard02";
	Local_629.f_14[1] = "PatrolGuard03";
	Local_629.f_14[2] = "PatrolGuard04";
}

void func_77()
{
	int iVar0;
	
	Local_318.f_42[0] = "TowerGuard01";
	Local_318.f_42[1] = "TowerGuard02";
	Local_318.f_42[2] = "TowerGuard03";
	Local_318.f_42[3] = "TowerGuard04";
	Local_318.f_42[4] = "TowerGuard05";
	Local_318.f_42[5] = "TowerGuard06";
	Local_318.f_42[6] = "TowerGuard07";
	Local_318.f_42[7] = "TowerGuard08";
	Local_318.f_42[8] = "TowerGuard09";
	Local_318.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		request_waypoint_recording(Local_318.f_42[iVar0]);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(joaat("polmav"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_prisguard_01"));
}

void func_78()
{
	iLocal_574 = false;
	if (func_28())
	{
		iLocal_575 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, 65535) % 2;
		if (iLocal_575 == 0)
		{
			iLocal_574 = true;
			STREAMING::REQUEST_MODEL(joaat("polmav"));
			request_vehicle_recording(101, "PrisonHeli");
		}
		else
		{
			iLocal_574 = false;
		}
	}
}

void func_79()
{
	STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_prisguard_01"));
	STREAMING::REQUEST_MODEL(joaat("polmav"));
}

void func_80()
{
	iLocal_315 = iLocal_315;
	iLocal_315 = 0;
	func_81();
	func_34();
	Local_128.f_4 = 75;
	Local_128.f_6 = 15;
	_door_control(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, true, 0f, 0f, 0f);
	_door_control(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, true, 0f, 50f, 0f);
	add_relationship_group("Prison_Guards", &iLocal_316);
	add_relationship_group("Prison_Prisoners", &iLocal_317);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_316, iLocal_317);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_317, iLocal_316);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_316, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_316);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1862763509, iLocal_317);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_317, 1862763509);
}

void func_81()
{
	vLocal_65[0 /*3*/] = {1809.816f, 2482.877f, 44.4744f};
	vLocal_65[1 /*3*/] = {1755.823f, 2424.904f, 44.4319f};
	vLocal_65[2 /*3*/] = {1661.2f, 2410.096f, 44.4265f};
	vLocal_65[3 /*3*/] = {1555.966f, 2476.43f, 44.4042f};
	vLocal_65[4 /*3*/] = {1549.141f, 2583.103f, 44.4225f};
	vLocal_65[5 /*3*/] = {1581.156f, 2671.974f, 44.481f};
	vLocal_65[6 /*3*/] = {1655.49f, 2743.69f, 44.4665f};
	vLocal_65[7 /*3*/] = {1768.776f, 2748.527f, 44.4402f};
	vLocal_65[8 /*3*/] = {1831.2f, 2696f, 44.4578f};
	vLocal_65[9 /*3*/] = {1803.121f, 2617.781f, 44.5082f};
	vLocal_65[10 /*3*/] = {1817.221f, 2608.387f, 44.6204f};
	vLocal_65[11 /*3*/] = {1843.838f, 2608.361f, 44.6178f};
}

void func_82()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, 0, true, 0) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, 0, true, 0)) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, 0, true, 0))
		{
			if (get_player_wanted_level(player_id()) == 0)
			{
				set_player_wanted_level(player_id(), 2, 0);
				set_player_wanted_level_now(player_id(), 0);
			}
		}
	}
	if (!iLocal_104)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, 0, false, 0))
			{
				if (has_player_damaged_at_least_one_non_animal_ped(player_id()))
				{
					set_player_wanted_level(player_id(), 4, 0);
					set_player_wanted_level_now(player_id(), 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, -183807561);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -183807561, 1862763509);
					iLocal_104 = 1;
				}
				if ((is_bullet_in_area(1874.072f, 2605.423f, 44.6723f, 100f, 1) && !has_player_damaged_at_least_one_ped(player_id())) || (is_ped_shooting(PLAYER::PLAYER_PED_ID()) && !has_player_damaged_at_least_one_non_animal_ped(player_id())))
				{
					set_player_wanted_level_now(player_id(), 0);
					set_player_wanted_level(player_id(), true, 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, -183807561);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -183807561, 1862763509);
					iLocal_104 = 1;
				}
			}
		}
	}
}

void func_83(int iParam0)
{
	int iVar0;
	
	func_89();
	func_88();
	func_87();
	func_86();
	func_85();
	func_84();
	stop_alarm("PRISON_ALARMS", true);
	if (iLocal_104)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -183807561);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, -183807561, 1862763509);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (_0x0EAEB0DB4B132399(iLocal_52[iVar0]))
		{
			remove_navmesh_blocking_object(iLocal_52[iVar0]);
		}
		iVar0++;
	}
	_door_control(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, true, 0f, 0f, 0f);
	_door_control(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, true, 0f, 50f, 0f);
	if (iParam0)
	{
		clear_area(1695.1f, 2595.8f, 50f, 1000f, 1, 0, 0, false);
	}
	terminate_this_thread();
}

void func_84()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		set_vehicle_as_no_longer_needed(&iLocal_124);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_126))
	{
		set_ped_as_no_longer_needed(&iLocal_126);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		set_vehicle_as_no_longer_needed(&iLocal_125);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_127))
	{
		set_ped_as_no_longer_needed(&iLocal_127);
	}
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_629.f_27[iVar0]))
		{
			if (does_blip_exist(Local_629.f_36[iVar0]))
			{
				remove_blip(&(Local_629.f_36[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_629.f_27[iVar0]))
			{
				PED::DELETE_PED(&(Local_629.f_27[iVar0]));
			}
			else
			{
				set_ped_as_no_longer_needed(&(Local_629.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_629.f_31[iVar0]))
		{
			if (does_blip_exist(Local_629.f_40[iVar0]))
			{
				remove_blip(&(Local_629.f_40[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_629.f_31[iVar0]))
			{
				PED::DELETE_PED(&(Local_629.f_31[iVar0]));
			}
			else
			{
				set_ped_as_no_longer_needed(&(Local_629.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_86()
{
	if (does_blip_exist(iLocal_621))
	{
		remove_blip(&iLocal_621);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_619))
	{
		delete_vehicle(&iLocal_619);
	}
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_576[iVar0]))
		{
			if (does_blip_exist(uLocal_597[iVar0]))
			{
				remove_blip(&(uLocal_597[iVar0]));
			}
			PED::DELETE_PED(&(uLocal_576[iVar0]));
		}
		iVar0++;
	}
}

void func_88()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_404[iVar0]))
		{
			delete_vehicle(&(iLocal_404[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_408[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_408[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_318.f_64[iVar0]))
		{
			if (does_blip_exist(Local_318.f_75[iVar0]))
			{
				remove_blip(&(Local_318.f_75[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_318.f_64[iVar0]))
			{
				PED::DELETE_PED(&(Local_318.f_64[iVar0]));
			}
			else
			{
				set_ped_as_no_longer_needed(&(Local_318.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_89()
{
	if (does_blip_exist(iLocal_571))
	{
		remove_blip(&iLocal_571);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_569))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_569))
		{
			delete_vehicle(&iLocal_569);
			PED::DELETE_PED(&iLocal_570);
		}
		else
		{
			func_90(&iLocal_569, &iLocal_570);
			set_vehicle_as_no_longer_needed(&iLocal_569);
		}
	}
}

void func_90(int iParam0, auto uParam1)
{
	if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1)) && !ENTITY::IS_ENTITY_DEAD(*iParam0, 0)) && !ENTITY::IS_ENTITY_DEAD(*uParam1, 0))
	{
		if (is_entity_in_air(*iParam0))
		{
			if (is_playback_going_on_for_vehicle(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					task_plane_mission(*uParam1, *iParam0, false, false, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 30f, 100, 50);
				}
			}
		}
	}
}

