#region Local Var
	int iLocal_0 = 0;
	auto uLocal_1 = 0;
	auto uLocal_2 = 0;
	auto uLocal_3 = 0;
	auto uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	auto uLocal_15 = 0;
	auto uLocal_16 = 0;
	float fLocal_17 = 0;
	auto uLocal_18 = 0;
	auto uLocal_19 = 0;
	int iLocal_20 = 0;
	auto uLocal_21 = 0;
	auto uLocal_22 = 0;
	char* sLocal_23 = 0;
	float fLocal_24 = 0;
	auto uLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	float fLocal_28 = 0;
	float fLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	auto uLocal_32 = 0;
	float fLocal_33 = 0;
	float fLocal_34 = 0;
	float fLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	int iLocal_38 = 0;
	auto uLocal_39 = 0;
	struct<4>[] Local_40 = new struct<4>[10];
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	struct<6> Local_83 = 10;
	Vector3 vLocal_89 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int[] iLocal_103 = new int[7];
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	Vector3 vLocal_113 = 0;
	Vector3 fLocal_116 = 0;
	int iLocal_117 = 0;
	Vector3 vLocal_118 = 0;
	Vector3 fLocal_121 = 0;
	Vector3[] vLocal_122 = new Vector3[3];
	float[] fLocal_132 = new float[3];
	Vector3[] vLocal_136 = new Vector3[7];
	float[] fLocal_158 = new float[7];
	int[] iLocal_166 = new int[3];
	int[] iLocal_170 = new int[3];
	int[] iLocal_174 = new int[7];
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	char* sLocal_184 = 0;
	char*[] sLocal_185 = new char*[7];
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	auto uLocal_199 = 0;
	auto uLocal_200 = 0;
	Vector3 vLocal_201 = 0;
	Vector3 vLocal_204 = 0;
	Vector3 vLocal_207 = 0;
	Vector3 vLocal_210 = 0;
	float fLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	auto uLocal_216 = 8;
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
	auto uLocal_310 = 0;
	auto uLocal_311 = 0;
	auto uLocal_312 = 0;
	auto uLocal_313 = 0;
	auto uLocal_314 = 0;
	auto uLocal_315 = 0;
	auto uLocal_316 = 0;
	auto uLocal_317 = 0;
	auto uLocal_318 = 0;
	auto uLocal_319 = 0;
	auto uLocal_320 = 0;
	auto uLocal_321 = 0;
	auto uLocal_322 = 0;
	auto uLocal_323 = 0;
	auto uLocal_324 = 0;
	auto uLocal_325 = 0;
	auto uLocal_326 = 0;
	auto uLocal_327 = 0;
	auto uLocal_328 = 0;
	auto uLocal_329 = 0;
	auto uLocal_330 = 0;
	auto uLocal_331 = 0;
	auto uLocal_332 = 0;
	auto uLocal_333 = 0;
	auto uLocal_334 = 0;
	auto uLocal_335 = 0;
	auto uLocal_336 = 0;
	auto uLocal_337 = 0;
	auto uLocal_338 = 0;
	auto uLocal_339 = 0;
	auto uLocal_340 = 0;
	auto uLocal_341 = 0;
	auto uLocal_342 = 0;
	auto uLocal_343 = 0;
	auto uLocal_344 = 0;
	auto uLocal_345 = 0;
	auto uLocal_346 = 0;
	auto uLocal_347 = 0;
	auto uLocal_348 = 0;
	auto uLocal_349 = 0;
	auto uLocal_350 = 0;
	auto uLocal_351 = 0;
	auto uLocal_352 = 0;
	auto uLocal_353 = 0;
	auto uLocal_354 = 0;
	auto uLocal_355 = 0;
	auto uLocal_356 = 0;
	auto uLocal_357 = 0;
	auto uLocal_358 = 0;
	auto uLocal_359 = 0;
	auto uLocal_360 = 0;
	auto uLocal_361 = 0;
	auto uLocal_362 = 0;
	auto uLocal_363 = 1;
	struct<2> Local_364 = 0;
	auto uLocal_366 = 0;
	auto uLocal_367 = 0;
	auto uLocal_368 = 0;
	auto uLocal_369 = 0;
	auto uLocal_370 = 0;
	auto uLocal_371 = 0;
	auto uLocal_372 = 0;
	auto uLocal_373 = 0;
	auto uLocal_374 = 0;
	auto uLocal_375 = 0;
	auto uLocal_376 = 0;
	auto uLocal_377 = 0;
	auto uLocal_378 = 0;
	auto uLocal_379 = 0;
	auto uLocal_380 = 0;
	auto uLocal_381 = 5;
	auto uLocal_382 = 0;
	auto uLocal_383 = 0;
	auto uLocal_384 = 0;
	auto uLocal_385 = 0;
	auto uLocal_386 = 0;
#endregion

void main()
{
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	iLocal_20 = -1;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_93 = 1;
	iLocal_102 = true;
	iLocal_183 = joaat("feltzer2");
	iLocal_193 = 1;
	vLocal_201 = {0f, 0f, 0f};
	vLocal_204 = {1f, 1f, 1f};
	vLocal_207 = {0f, 0f, 0f};
	vLocal_210 = {0f, 0f, 0f};
	fLocal_213 = 0f;
	_0x6F2135B6129620C1(1);
	vLocal_89 = {Local_364.f_1[0 /*3*/]};
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_202(0);
	}
	func_199();
	switch (Local_83.f_1)
	{
		case 1:
		case 2:
			if (!func_198(0, 8))
			{
				func_202(0);
			}
			if (!func_197(Local_83))
			{
				func_202(0);
			}
			break;
		
		case 3:
			if (!func_198(0, 7))
			{
				func_202(0);
			}
			break;
		
		case 0:
			func_202(0);
			break;
	}
	func_191();
	if (!func_167())
	{
		func_202(0);
	}
	func_161();
	while (true)
	{
		func_158(&uLocal_216);
		if (func_167())
		{
			if (is_world_point_within_brain_activation_range())
			{
				switch (iLocal_82)
				{
					case 0:
						iLocal_82 = 1;
						break;
					
					case 1:
						func_149();
						func_118();
						break;
					
					case 2:
						func_55();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_202(0);
			}
		}
		else
		{
			func_202(0);
		}
		wait(0);
	}
}

void func_1()
{
	if (!iLocal_100)
	{
		func_9();
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	func_8(-1);
	func_7(0);
	func_6(vLocal_89);
	func_5();
	Global_1312344 = 1;
	Global_1312344.f_1 = Local_83;
	StringCopy(&(Global_1312344.f_2), func_4(), 24);
	StringCopy(&(Global_1312344.f_8), func_3(Local_83), 32);
	Global_1312344.f_16 = {vLocal_89};
	Global_1315916 = 1;
	func_202(1);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (is_ps3_version())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (is_xbox360_version())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (is_orbis_version())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (is_durango_version())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (GAMEPLAY::IS_PC_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_4()
{
	char* sVar0;
	
	if (is_ps3_version())
	{
		sVar0 = "SPRACE";
	}
	else if (is_xbox360_version())
	{
		sVar0 = "2535285330962926";
	}
	else if (is_orbis_version())
	{
		sVar0 = "SPRACE";
	}
	else if (is_durango_version())
	{
		sVar0 = "2535285330962926";
	}
	else if (GAMEPLAY::IS_PC_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_5()
{
	GAMEPLAY::SET_BIT(&Global_1312423, false);
}

void func_6(Vector3 vParam0)
{
	Global_1312423.f_6 = {vParam0};
}

void func_7(int iParam0)
{
	Global_1312423.f_2 = iParam0;
}

void func_8(int iParam0)
{
	Global_1312423.f_1 = iParam0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_83.f_2 = -1;
	if (func_54(PLAYER::PLAYER_PED_ID()))
	{
		if (!is_ped_wearing_helmet(PLAYER::PLAYER_PED_ID()))
		{
			set_ped_helmet(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	while (!func_48())
	{
		wait(0);
	}
	if (Local_83.f_1 != 3)
	{
		func_15(func_43(), 1, Local_83.f_3);
		iVar0 = GAMEPLAY::GET_GAME_TIMER() + 1500;
		iVar1 = get_players_last_vehicle();
		if (func_13(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || GAMEPLAY::GET_GAME_TIMER() < iVar0)
			{
				wait(0);
			}
		}
		iVar2 = get_player_index();
		if (is_player_playing(iVar2))
		{
			set_player_control(iVar2, false, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		SCRIPT::REQUEST_SCRIPT("mission_Race");
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_Race"))
		{
			SCRIPT::REQUEST_SCRIPT("mission_Race");
			wait(0);
		}
		SYSTEM::START_NEW_SCRIPT_with_args("mission_Race", &Local_83, 6, 18000);
	}
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_Race");
	func_202(1);
}

int func_11(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

bool func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (iParam5)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!iParam6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 131, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 123, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 126, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 129, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 130, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, 1);
	_0x17FCA7199A530203();
	if (GAMEPLAY::GET_GAME_TIMER() - Global_29 > 500)
	{
		_task_bring_vehicle_to_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

bool func_13(int iParam0)
{
	if (func_14(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_14(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

int func_15(auto uParam0, int iParam1, int iParam2)
{
	if (Global_101154.f_32575[uParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101154.f_32575[uParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_16(Global_101154.f_32575[uParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

bool func_16(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_42();
	if (iParam3 < 1)
	{
		return false;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_41(99, 1);
					func_40(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_40(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_40(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_24(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_23(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_23(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (_get_this_script_hash())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_23(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_22(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_41(95, iParam3);
					break;
				
				case 1:
					func_41(97, iParam3);
					break;
				
				case 2:
					func_41(96, iParam3);
					break;
			}
			func_41(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
	}
	iVar5 = Global_52923[iVar2] + iParam3;
	switch (iParam1)
	{
		case 1:
			if (Global_52923[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52923[iVar2] = 2147483647;
				}
				else
				{
					Global_52923[iVar2] += iParam3;
				}
			}
			switch (iParam0)
			{
				case 0:
					func_40(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_40(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_40(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!iParam4)
			{
				if (Global_52923[iVar2] - iParam3 < 0)
				{
					return false;
				}
			}
			iVar3 = Global_52923[iVar2];
			Global_52923[iVar2] -= iParam3;
			if (iParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101154.f_25089.f_233[iVar2 /*69*/]++;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_1++;
		if (Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_35711 == 15)
	{
		func_17(0);
	}
	return true;
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!iParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_19(int iParam0)
{
	int iVar0;
	char[64] cVar1;
	
	iVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0))
		{
			iVar0 = true;
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_21() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_21() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_20(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0)
{
	func_41(93, iParam0);
	func_41(29, iParam0);
	func_41(30, iParam0);
}

int func_23(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_21() /*10375*/].f_7704.f_10, iParam0);
}

bool func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	if (has_achievement_been_passed(27))
	{
		return false;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (iParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000)
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_39(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_25(27, 1);
	return true;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_26(iParam0, iParam1);
}

bool func_26(int iParam0, int iParam1)
{
	if (func_38(14) && !func_37(iParam0))
	{
		return false;
	}
	if (has_achievement_been_passed(iParam0) && iParam1 == 1)
	{
		return false;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return false;
	}
	if (func_36(&Global_2563627))
	{
		if (func_34(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_27(&Global_2563627, iParam0))
		{
			return true;
		}
	}
	else
	{
		if (!give_achievement_to_player(iParam0))
		{
			return false;
		}
		if (has_achievement_been_passed(iParam0))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_27(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return false;
	}
	if (func_34(uParam0, iParam1))
	{
		return false;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
	}
	func_30(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_28(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_28(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return false;
	}
	if (func_34(uParam0, iParam1))
	{
		return false;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_29(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_29(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_30(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_31(uParam0, iVar0);
		iVar0++;
	}
	func_32(uParam0, Global_2563626 - 0.5f);
}

void func_31(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_32(auto uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		*uParam0.f_72 = 0f;
	}
	else
	{
		*uParam0.f_72 = fParam1;
	}
}

auto func_33(auto uParam0)
{
	return *uParam0.f_72;
}

int func_34(auto uParam0, int iParam1)
{
	return func_35(uParam0, iParam1) != -1;
}

int func_35(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_36(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_37(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
		
		default:
	}
	return false;
}

int func_38(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return _0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		STATS::STAT_SET_INT(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_42()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

auto func_43()
{
	func_44();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_44()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_47(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_46(PLAYER::PLAYER_PED_ID());
			if (func_45(iVar0) && (!func_38(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_45(Global_101154.f_1826.f_539.f_3549))
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

int func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_48()
{
	int iVar0;
	
	iVar0 = func_49(&(Local_83.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return false;
	}
	return true;
}

int func_49(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!iParam3)
	{
		if (Global_89089.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_53(0))
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		set_player_invincible(get_player_index(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_35711 = iParam2;
		Global_35673 = *uParam0;
		Global_35674 = iParam4;
		Global_35672 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35672 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35672)
			{
				if (Global_35678[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35673 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_51(iParam2))
		{
			return 0;
		}
		if (Global_35672 == 8)
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		Global_35678[Global_35672 /*4*/] = Global_35675;
		Global_35678[Global_35672 /*4*/].f_1 = iParam1;
		Global_35678[Global_35672 /*4*/].f_2 = iParam2;
		Global_35678[Global_35672 /*4*/].f_3 = 0;
		Global_35672++;
		if (iParam4 != 0)
		{
			func_50(uParam0, iParam4);
		}
	}
	return 2;
}

void func_50(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35672 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35672)
	{
		if (Global_35678[iVar0 /*4*/] == *uParam0)
		{
			Global_35678[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_51(int iParam0)
{
	return func_52(iParam0, Global_35711);
}

bool func_52(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return true;
	}
	if (iParam0 == 15)
	{
		return false;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return false;
					break;
			}
			return true;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return true;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return true;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return true;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return true;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return true;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return true;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return true;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
	}
	return false;
}

bool func_53(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_51(iParam0))
	{
		return false;
	}
	return true;
}

bool func_54(int iParam0)
{
	if (func_14(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_55()
{
	int iVar0;
	
	switch (iLocal_96)
	{
		case 0:
			if (func_116(0, -1, 0))
			{
				clear_help(1);
				func_104();
				set_user_radio_control_enabled(0);
				iLocal_101 = 1;
				iLocal_99 = false;
				iLocal_100 = false;
				iLocal_96 = 1;
			}
			break;
		
		case 1:
			if (func_69())
			{
				iLocal_96 = 2;
			}
			break;
		
		case 2:
			iVar0 = get_player_index();
			set_everyone_ignore_player(iVar0, 0);
			set_player_control(iVar0, true, 0);
			func_59(0, 1, 1, 0);
			func_56(1, -1);
			iLocal_96 = 0;
			if (iLocal_99)
			{
				iLocal_82 = 3;
			}
			else
			{
				set_user_radio_control_enabled(1);
				iLocal_82 = 1;
			}
			break;
	}
}

void func_56(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (!func_58(&uVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17257.f_7862)
	{
		reset_hud_component_values(15);
		Global_17257.f_7862 = 0;
	}
	_0x55598D21339CB998(0f);
	if (Global_17257.f_5498[uVar0])
	{
		clear_additional_text(9, false);
		Global_17257.f_5498[uVar0] = 0;
	}
	if (Global_17257.f_5484[uVar0])
	{
		set_streamed_texture_dict_as_no_longer_needed("CommonMenu");
		Global_17257.f_5484[uVar0] = 0;
	}
	if (Global_17257.f_5491[uVar0])
	{
		set_streamed_texture_dict_as_no_longer_needed("MPShopSale");
		Global_17257.f_5491[uVar0] = 0;
	}
	if (iParam0)
	{
		func_57(&(Global_17257.f_5530[uVar0 /*10*/]));
		Global_17257.f_5591[uVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[uVar0] = 0;
	}
}

void func_57(int iParam0)
{
	if (*iParam0.f_9 != 0)
	{
		if (has_scaleform_movie_loaded(*iParam0))
		{
			set_scaleform_movie_as_no_longer_needed(iParam0);
		}
		*iParam0 = 0;
		*iParam0.f_9 = 0;
	}
}

bool func_58(auto uParam0, int iParam1, int iParam2)
{
	char[64] cVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && network_get_this_script_is_network_script())
		{
			iParam2 = _0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, get_this_script_name(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = get_hash_key(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return true;
		}
		else if (Global_17257.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (iParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return true;
		}
	}
	return false;
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_68(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_67())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_66(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_68(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_66(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_64(player_id())) && !func_61(player_id(), 0)) && !func_60())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_64(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_60()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_62(-1, 0) == 8;
	}
	else
	{
		iVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (network_is_player_active(iParam0))
		{
			iVar0 = get_player_team(iParam0) == 8;
		}
	}
	return iVar0;
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_63();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (iParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (iParam1)
		{
		}
	}
	return iVar0;
}

auto func_63()
{
	return Global_1312747;
}

bool func_64(int iParam0)
{
	if (func_61(iParam0, 0))
	{
		return true;
	}
	if (func_65())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_65()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_66(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_67()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_68(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 13);
	}
}

bool func_69()
{
	int iVar0;
	int iVar1;
	auto uVar2;
	auto uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	func_103(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	set_input_exclusive(2, 201);
	set_input_exclusive(2, 202);
	set_input_exclusive(2, 188);
	set_input_exclusive(2, 187);
	if (iLocal_98 != 0)
	{
		if (timera() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_98 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	iVar4 = (iVar1 < -64 || is_control_just_pressed(2, 188));
	iVar5 = (iVar1 > 64 || is_control_just_pressed(2, 187));
	iVar6 = is_control_just_pressed(2, 201);
	iVar7 = is_control_just_pressed(2, 202);
	iVar8 = (iVar1 < -64 || iVar1 > 64);
	if (iVar6)
	{
		if (iLocal_97 == 1)
		{
			iLocal_100 = true;
		}
		else
		{
			iLocal_100 = false;
		}
		iLocal_99 = true;
		return true;
	}
	else if (iVar7)
	{
		iLocal_194 = 0;
		iLocal_99 = false;
		return true;
	}
	else
	{
		if (iVar5)
		{
			if (iLocal_97 == 0)
			{
				iLocal_97 = 1;
			}
			else if (iLocal_97 == 0)
			{
			}
		}
		else if (iVar4)
		{
			if (iLocal_97 == 1)
			{
				iLocal_97 = 0;
			}
			else if (iLocal_97 == 1)
			{
			}
		}
		if (iVar5 || iVar4)
		{
			if (iVar8)
			{
				settimera(0);
				iLocal_98 = 1;
			}
			func_102(iLocal_97, 1, 1);
		}
	}
	func_70(1, -1, 1, 0, 1, -1082130432, 0, 0);
	return false;
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	Vector3 vVar37;
	int iVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_99(0, iParam6))
	{
		return;
	}
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_97(29, 1, 1, &fVar35, &fVar36, iParam7))
		{
			fVar55 = fVar36;
			fVar55 += 0f;
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (get_hash_key(&(Global_17257.f_1)) == get_hash_key("HIDE"))
	{
		fVar56 = Global_17255;
	}
	else
	{
		fVar56 = Global_17255 + fVar55 + 0.034722f + 0f;
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17256;
	}
	fVar59 = 1f;
	if (iParam7)
	{
		_get_screen_active_resolution(&iVar57, &iVar58);
		fVar60 = _get_screen_aspect_ratio(0);
		if (func_96())
		{
			iVar57 = round(to_float(iVar58) * fVar60);
		}
		fVar61 = to_float(iVar57) / to_float(iVar58);
		fVar59 = fVar61 / fVar60;
		if (func_96())
		{
			fVar59 = 1f;
		}
		iVar57 = round(to_float(iVar57) / fVar59);
		iVar58 = round(to_float(iVar58) / fVar59);
	}
	else
	{
		get_screen_resolution(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5598)
		{
			if (get_hash_key(&(Global_17257.f_1)) == get_hash_key("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					draw_sprite(func_95(29), func_93(29, 1), Global_17254 + fParam5 * 0.5f, Global_17255 + fVar55 - 0f * 0.5f, fParam5, fVar55 - 0f, 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7832)
				{
					iVar1 = Global_17257.f_7828;
					iVar2 = Global_17257.f_7829;
					iVar3 = Global_17257.f_7830;
					iVar4 = Global_17257.f_7831;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_92(Global_17254, Global_17255 + fVar55, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = Global_17255 + fVar55 + 0.034722f + 0f;
				if (get_hash_key(&(Global_17257.f_1)) != 0)
				{
					func_91();
					_set_text_entry(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							add_text_component_integer(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							add_text_component_float(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							_add_text_component_item_string(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							_add_text_component_item_string(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							add_text_component_substring_player_name(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							_add_text_component_item_string(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							add_text_component_substring_player_name(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					_draw_text(Global_17254 + 0.00390625f, Global_17255 + fVar55 + 0.00416664f, 0);
				}
				if (Global_17257.f_5601 > Global_17257.f_5095)
				{
					if (Global_17257.f_5604 != 0)
					{
						func_91();
						func_89(Global_17254 + fParam5 - 0.00390625f - func_90("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603), Global_17255 + fVar55 + 0.00416664f, "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
					}
				}
			}
			iVar6 = Global_17257.f_5605;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7842)
			{
				iVar1 = Global_17257.f_7838;
				iVar2 = Global_17257.f_7839;
				iVar3 = Global_17257.f_7840;
				iVar4 = Global_17257.f_7841;
			}
			else
			{
				get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5095 && iVar6 <= Global_17257.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5355[iVar6])
					{
						if (Global_17257.f_5226[iVar6] && iVar6 != Global_17257.f_5605)
						{
							fVar49 += 0.00277776f;
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5612[iVar6];
						}
						fVar49 += fVar54;
						iVar9++;
					}
				}
				iVar6++;
			}
			if (iParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 += fVar54;
					iVar9++;
					if (Global_17257.f_5088 <= 1)
					{
						Global_17257.f_5088++;
					}
					iVar52 = 1;
				}
			}
			draw_sprite("CommonMenu", "Gradient_Bgd", Global_17254 + fParam5 * 0.5f, fVar62 + fVar49 - fVar62 * 0.5f - 0.00138888f, fParam5, fVar49 - fVar62, 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5601 > Global_17257.f_5095)
			{
				if (Global_17257.f_7847)
				{
					iVar1 = Global_17257.f_7843;
					iVar2 = Global_17257.f_7844;
					iVar3 = Global_17257.f_7845;
					iVar4 = Global_17257.f_7846;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_92(Global_17254, fVar49 + 0f, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar37 = {get_texture_resolution("CommonMenu", "shop_arrows_upANDdown")};
				vVar37.x *= 0.5f / fVar59;
				vVar37.y *= 0.5f / fVar59;
				if (Global_17257.f_7860)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					get_hud_colour(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				draw_sprite("CommonMenu", "shop_arrows_upANDdown", Global_17254 + fParam5 * 0.5f, fVar49 + 0f + 0.034722f * 0.5f, vVar37.x / 1280f * fVar59, vVar37.y / 720f * fVar59, 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 += 0f + 0.034722f;
			}
			if (get_hash_key(&(Global_17257.f_4562)) != 0 && Global_17257.f_4636 != -1)
			{
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17254 + 0.0046875f;
				if (Global_17257.f_4638 != 0)
				{
					func_97(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_88(fVar41);
				_set_text_gxt_entry(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						add_text_component_integer(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						add_text_component_float(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = _0x9040DFB09BE75706(fVar41, fVar49 + 0.00277776f);
				get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_92(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7852)
				{
					iVar1 = Global_17257.f_7848;
					iVar2 = Global_17257.f_7849;
					iVar3 = Global_17257.f_7850;
					iVar4 = Global_17257.f_7851;
				}
				else
				{
					get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				draw_sprite("CommonMenu", "Gradient_Bgd", Global_17254 + fParam5 * 0.5f, fVar49 + _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1) * 0.5f - 0.00138888f, fParam5, _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_88(fVar41);
				_set_text_entry(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						add_text_component_integer(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						add_text_component_float(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 8)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				_draw_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_17257.f_4638 != 0)
				{
					func_97(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					func_87(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_95(Global_17257.f_4638), func_93(Global_17257.f_4638, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 += _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_17257.f_4636 > 0)
				{
					if (GAMEPLAY::GET_GAME_TIMER() - Global_17257.f_4637 > Global_17257.f_4636)
					{
						StringCopy(&(Global_17257.f_4562), "", 16);
						Global_17257.f_4636 = -1;
					}
				}
			}
			if (get_hash_key(&(Global_2562053.f_21)) != 0 && Global_2562053.f_65 != -1)
			{
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17254 + 0.0046875f;
				if (Global_2562053.f_67 != 0)
				{
					func_97(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_88(fVar41);
				_set_text_gxt_entry(&(Global_2562053.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2562053.f_61)
				{
					if (Global_2562053.f_25[iVar14] == 2)
					{
						add_text_component_integer(Global_2562053.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2562053.f_25[iVar14] == 3)
					{
						add_text_component_float(Global_2562053.f_34[iVar16], Global_2562053.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2562053.f_25[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 8)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = _0x9040DFB09BE75706(fVar41, fVar49 + 0.00277776f);
				get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_92(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7852)
				{
					iVar1 = Global_17257.f_7848;
					iVar2 = Global_17257.f_7849;
					iVar3 = Global_17257.f_7850;
					iVar4 = Global_17257.f_7851;
				}
				else
				{
					get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				draw_sprite("CommonMenu", "Gradient_Bgd", Global_17254 + fParam5 * 0.5f, fVar49 + _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1) * 0.5f - 0.00138888f, fParam5, _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_88(fVar41);
				_set_text_entry(&(Global_2562053.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2562053.f_61)
				{
					if (Global_2562053.f_25[iVar14] == 2)
					{
						add_text_component_integer(Global_2562053.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2562053.f_25[iVar14] == 3)
					{
						add_text_component_float(Global_2562053.f_34[iVar16], Global_2562053.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2562053.f_25[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 8)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				_draw_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_2562053.f_67 != 0)
				{
					func_97(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					func_87(Global_2562053.f_67, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_95(Global_2562053.f_67), func_93(Global_2562053.f_67, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 += _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_2562053.f_65 > 0)
				{
					if (GAMEPLAY::GET_GAME_TIMER() - Global_2562053.f_66 > Global_2562053.f_65)
					{
						StringCopy(&(Global_2562053.f_21), "", 16);
						Global_2562053.f_65 = -1;
					}
				}
			}
			func_82(iVar57, iParam1, 0, 0, 0, 0, iParam4, 1, 0);
			_set_screen_draw_position(76, 84);
			_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17257.f_5088;
			if (Global_17257.f_5599)
			{
				iVar63 = Global_17257.f_5602 - 1;
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5612[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5612[iVar6];
				}
				if (Global_17257.f_5599)
				{
					iVar6 = Global_17257.f_7488[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				iVar32 = false;
				if (iVar6 >= Global_17257.f_5605 && iVar9 < Global_17257.f_5095)
				{
					iVar32 = true;
					if (Global_17257.f_5606 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = fVar56 + fVar64 + 0.00277776f * IntToFloat(iVar12) + 0.00277776f;
				}
				Global_17257.f_5746[iVar6] = fVar34;
				fVar33 = Global_17254 + 0.0046875f;
				iVar40 = false;
				iVar31 = Global_17257.f_5606 == iVar6;
				if ((iVar31 && iVar5 == 1) && iVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7854)
					{
						get_hud_colour(Global_17257.f_7853, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						get_hud_colour(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					draw_sprite("CommonMenu", "Gradient_Nav", Global_17254 + fParam5 * 0.5f, fVar56 + fVar65 + 0.00277776f * IntToFloat(iVar12) + fVar54 * 0.5f, fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5744 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_80(iVar31, 1, 0, 0, 0, 0);
					_set_text_entry("DFLT_MNU_OPT");
					_draw_text(fVar33, fVar34, 0);
					iVar40 = true;
				}
				else
				{
					iVar8 = false;
					while (iVar8 < Global_17257.f_5096)
					{
						if (GAMEPLAY::IS_BIT_SET(Global_17257.f_4959[iVar6], iVar8) || Global_17257.f_4926[iVar8] == 5)
						{
							if (Global_17257.f_5599)
							{
								iVar19 = Global_17257.f_7499[iVar9 * Global_17257.f_5096 + iVar8];
								iVar20 = Global_17257.f_7540[iVar9 * Global_17257.f_5096 + iVar8];
								iVar21 = Global_17257.f_7581[iVar9 * Global_17257.f_5096 + iVar8];
								iVar22 = Global_17257.f_7622[iVar9 * Global_17257.f_5096 + iVar8];
								iVar23 = Global_17257.f_7663[iVar9 * Global_17257.f_5096 + iVar8];
							}
							else
							{
								Global_17257.f_7499[iVar9 * Global_17257.f_5096 + iVar8] = iVar19;
								Global_17257.f_7540[iVar9 * Global_17257.f_5096 + iVar8] = iVar20;
								Global_17257.f_7581[iVar9 * Global_17257.f_5096 + iVar8] = iVar21;
								Global_17257.f_7622[iVar9 * Global_17257.f_5096 + iVar8] = iVar22;
								Global_17257.f_7663[iVar9 * Global_17257.f_5096 + iVar8] = iVar23;
							}
							iVar70 = 0;
							iVar53 = false;
							if (Global_17257.f_5878[0] != -1)
							{
								if (iVar6 * 5 + iVar8 == Global_17257.f_5875[0])
								{
									iVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5878[1] != -1)
							{
								if (iVar6 * 5 + iVar8 == Global_17257.f_5875[1])
								{
									iVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4932[iVar8] != -1f)
							{
								fVar33 = Global_17254 + 0.0046875f + Global_17257.f_4932[iVar8];
							}
							if ((iVar8 < 4 && Global_17257.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4932[iVar8 + 1])
							{
								fVar45 = Global_17257.f_4932[iVar8 + 1] - fVar33;
							}
							else
							{
								fVar45 = Global_17254 + Global_17256 - 0.0046875f - fVar33;
							}
							if ((Global_17257.f_4945[iVar8] && Global_17257.f_5741) && iVar31)
							{
								iVar51 = true;
							}
							else
							{
								iVar51 = false;
							}
							switch (Global_17257.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												iVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														iVar50 = true;
													}
													iVar14++;
												}
												func_80(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, iVar70, iVar50);
												_set_text_entry_for_width(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_integer(Global_17257.f_3918[iVar20 + iVar26]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_float(Global_17257.f_4175[iVar21 + iVar27], Global_17257.f_4304[iVar21 + iVar27]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = _get_text_screen_width(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_97(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar43 += fVar35;
														if (iVar14 > 0)
														{
															fVar43 -= 0.00078125f * 4f;
														}
														if (Global_17257.f_4433[iVar22 + iVar14] == 2 || Global_17257.f_4433[iVar22 + iVar14] == 48)
														{
															fVar43 -= 0.00078125f * 5f;
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 += fVar45 - fVar42 + fVar43 + 0.00078125f * 1f;
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 += fVar45 - fVar33 * 0.5f - fVar42 + fVar43 * 0.5f;
											}
											Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
											Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8] = fVar42;
											Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
											fVar42 = Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8];
											fVar43 = Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8];
										}
										if (iVar51)
										{
											if (func_97(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_97(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_87(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_95(26), func_93(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_97(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_97(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_87(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_95(27), func_93(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											iVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar50 = true;
												}
												iVar14++;
											}
											func_80(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, iVar50);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_79(iVar31);
											}
											_set_text_entry(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_integer(Global_17257.f_3918[iVar20 + iVar26]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_float(Global_17257.f_4175[iVar21 + iVar27], Global_17257.f_4304[iVar21 + iVar27]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4433[iVar22 + iVar28] == 2 || Global_17257.f_4433[iVar22 + iVar28] == 48)
												{
													if (func_97(Global_17257.f_4433[iVar22 + iVar28], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_97(Global_17257.f_4433[iVar22 + iVar28], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_87(Global_17257.f_4433[iVar22 + iVar28], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_95(Global_17257.f_4433[iVar22 + iVar28]), func_93(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_95(Global_17257.f_4433[iVar22 + iVar28]), func_93(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 += 0.00078125f * 3f;
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4953[iVar8] == 2)
											{
												_draw_text(fVar33 + fVar41 + 0.00078125f * 7f, fVar34, 0);
											}
											else
											{
												_draw_text(fVar33 + fVar41, fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 += 6f * 0.00078125f;
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4433[iVar22 + iVar14] != 2 && Global_17257.f_4433[iVar22 + iVar14] != 48)
												{
													if (func_97(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_97(Global_17257.f_4433[iVar22 + iVar14], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_87(Global_17257.f_4433[iVar22 + iVar14], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[iVar22 + iVar14] == 30)
															{
																draw_sprite(func_95(Global_17257.f_4433[iVar22 + iVar14]), func_93(Global_17257.f_4433[iVar22 + iVar14], iVar31), Global_17254 + fVar35 * 0.5f, fVar34 + 0.00277776f + fVar36 * 0.5f - 0.00078125f * 11f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_95(Global_17257.f_4433[iVar22 + iVar14]), func_93(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_95(Global_17257.f_4433[iVar22 + iVar14]), func_93(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 12f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 += 12f * 0.00078125f;
													}
												}
												iVar14++;
											}
										}
									}
									iVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_80(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_79(iVar31);
											}
											_set_text_entry_for_width("NUMBER");
											add_text_component_integer(Global_17257.f_3918[iVar20]);
											fVar42 = _get_text_screen_width(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 += fVar45 - fVar33 * 0.5f - fVar42 * 0.5f;
											}
											Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
											Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
											fVar42 = Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8];
										}
										if (iVar51)
										{
											if (func_97(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_97(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_87(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_95(26), func_93(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_97(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_97(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_87(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_95(27), func_93(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_80(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_78(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									iVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_80(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_79(iVar31);
											}
											_set_text_entry_for_width("NUMBER");
											add_text_component_float(Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
											fVar42 = _get_text_screen_width(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 += fVar45 - fVar33 * 0.5f - fVar42 * 0.5f;
											}
											Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
											Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
											fVar42 = Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8];
										}
										if (iVar51)
										{
											if (func_97(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_97(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_87(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_95(26), func_93(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_97(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_97(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_87(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_95(27), func_93(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_80(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_77(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									iVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && iVar32)
									{
										if (func_97(Global_17257.f_4433[iVar22], iVar31, 0, &fVar35, &fVar36, iParam7))
										{
											if (!Global_17257.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 += fVar45 - fVar43 + 0.00078125f * 1f;
												}
												else if (Global_17257.f_4953[iVar8] == 0)
												{
													fVar41 += fVar45 - fVar33 * 0.5f - fVar43 * 0.5f;
												}
												Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
												Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
												fVar43 = Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8];
											}
											if (iVar51)
											{
												if (func_97(26, 1, 0, &fVar35, &fVar36, iParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 -= fVar35 * 2f;
													}
													fVar44 = fVar35 * 0.5f;
													if (func_97(26, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_87(26, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_95(26), func_93(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_97(27, 1, 0, &fVar35, &fVar36, iParam7))
												{
													fVar41 += fVar35;
													fVar44 = fVar35 * 0.5f;
													if (func_97(27, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_87(27, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_95(27), func_93(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_97(Global_17257.f_4433[iVar22], iVar31, 1, &fVar35, &fVar36, iParam7))
											{
												func_87(Global_17257.f_4433[iVar22], iVar31, &iVar46, &iVar47, &iVar48);
												draw_sprite(func_95(Global_17257.f_4433[iVar22]), func_93(Global_17257.f_4433[iVar22], iVar31), fVar33 + fVar41 + fVar35 * 0.5f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35 * func_76(Global_17257.f_4433[iVar22]), fVar36 * func_76(Global_17257.f_4433[iVar22]), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									iVar40 = true;
									iVar22++;
									break;
								
								case 5:
									iVar40 = true;
									break;
							}
							if (Global_17257.f_4926[iVar8] == 5)
							{
								if (Global_17257.f_4938[iVar8] > 0.05f)
								{
									fVar33 += Global_17257.f_4938[iVar8];
								}
								else
								{
									fVar33 += 0.05f;
								}
							}
							else
							{
								fVar33 += Global_17257.f_4938[iVar8];
								if (Global_17257.f_4945[iVar8])
								{
									if (func_97(26, 1, 1, &fVar35, &fVar36, iParam7))
									{
										fVar33 -= fVar35;
									}
								}
							}
						}
						else
						{
							fVar33 += Global_17257.f_4938[iVar8];
						}
						iVar8++;
					}
				}
				if (iVar40)
				{
					if (iVar32)
					{
						Global_17257.f_7488[iVar9] = iVar6;
						Global_17257.f_5607 = iVar6;
						iVar9++;
						if (Global_17257.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar64 += Global_17257.f_5612[iVar6];
						}
						else
						{
							fVar64 += 0.034722f;
						}
					}
					if (!Global_17257.f_5598)
					{
						Global_17257.f_5355[iVar6] = 1;
						if (Global_17257.f_5097[iVar6])
						{
							if (iVar31)
							{
								Global_17257.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (iVar31)
							{
								Global_17257.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5598)
			{
				Global_17257.f_5600 = fVar56 + fVar64 + 0.00277776f * IntToFloat(iVar12);
				Global_17257.f_5603 = iVar11;
				Global_17257.f_5601 = iVar10;
				Global_17257.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5599)
	{
		Global_17257.f_5602 = iVar9;
		Global_17257.f_5599 = 1;
	}
	Global_17257.f_5743 = fVar49;
	Global_17257.f_5745 = GAMEPLAY::GET_GAME_TIMER();
	_0x55598D21339CB998(Global_17257.f_5743);
	if (!Global_17257.f_7827)
	{
		func_72();
	}
	Global_17257.f_7827 = 0;
	if (iParam2)
	{
		hide_hud_component_this_frame(10);
	}
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(8);
	if (iParam0)
	{
		func_71(1);
	}
	_0xE3A3DB414A373DAB();
}

void func_71(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

void func_72()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_75(0))
		{
			func_73(0);
		}
		GAMEPLAY::SET_BIT(&Global_2284, 2);
	}
}

void func_73(int iParam0)
{
	if (Global_14571)
	{
		func_74(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	}
	if (!func_67())
	{
		Global_14413.f_1 = 3;
	}
}

void func_74(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_75(0))
		{
			Global_14571 = 1;
			if (iParam1)
			{
				get_mobile_phone_position(&Global_14350);
			}
			Global_14341 = {Global_14359[Global_14358 /*3*/]};
			set_mobile_phone_position(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = {Global_14366[Global_14358 /*3*/]};
		if (iParam1)
		{
			set_mobile_phone_position(Global_14350);
		}
		else
		{
			set_mobile_phone_position(Global_14341);
		}
	}
}

bool func_75(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 14))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	return false;
}

float func_76(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_77(float fParam0, float fParam1, char* sParam2, Vector3 fParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_float(fParam3, iParam4);
	_draw_text(fParam0, fParam1, 0);
}

void func_78(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	_draw_text(fParam0, fParam1, iParam4);
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	
	if (iParam0)
	{
		get_hud_colour(Global_17257.f_7855[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		get_hud_colour(Global_17257.f_7855[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	set_text_colour(iVar0, iVar1, iVar2, 255);
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2)
	{
		if (iParam3)
		{
			func_81(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (iParam0 == 0)
				{
					get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (iParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			set_text_colour(iVar0, iVar1, iVar2, 255);
		}
		else if (iParam1)
		{
			if (iParam0)
			{
				get_hud_colour(14, &iVar0, &iVar1, &iVar2, &iVar3);
				set_text_colour(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				get_hud_colour(12, &iVar0, &iVar1, &iVar2, &iVar3);
				set_text_colour(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (iParam0)
		{
			set_text_colour(155, 155, 155, 255);
		}
		else
		{
			set_text_colour(155, 155, 155, 255);
		}
	}
	else if (iParam1)
	{
		if (iParam0)
		{
			set_text_colour(0, 0, 0, floor(255f * 0.8f));
		}
		else
		{
			get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
			set_text_colour(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (iParam0)
	{
		set_text_colour(155, 155, 155, 255);
	}
	else
	{
		set_text_colour(155, 155, 155, 255);
	}
	set_text_scale(0f, 0.35f);
	set_text_justification(1);
	if (iParam5)
	{
		set_text_scale(0f, 0.425f);
		set_text_font(4);
	}
	else
	{
		set_text_font(0);
	}
	set_text_wrap(0f, 1f);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void func_81(int iParam0, auto uParam1, auto uParam2, auto uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_82(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_58(&uVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_99(iParam4, iParam8))
	{
		return;
	}
	if (func_85())
	{
		return;
	}
	if (_network_is_text_chat_active())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_61(player_id(), 0))
		{
			return;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (update_onscreen_keyboard() == 0 || _network_is_text_chat_active())
		{
			return;
		}
	}
	if (Global_17257.f_4639 != 0)
	{
		if (_0x6CD79468A1E595C6(2))
		{
			iVar1 = false;
			while (iVar1 < Global_17257.f_4639)
			{
				if (Global_17257.f_4896[iVar1] != 344)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), _get_control_action_name(2, Global_17257.f_4896[iVar1], true), 64);
				}
				else if (Global_17257.f_4909[iVar1] != 31)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), _0x80C2FD58D720C801(2, Global_17257.f_4909[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17257.f_4640 = 0;
		}
		if (!Global_17257.f_4640)
		{
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "CLEAR_ALL");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_MAX_WIDTH");
			_push_scaleform_movie_function_parameter_float(1f - Global_17257.f_4951 / 100f);
			_pop_scaleform_movie_function_void();
			if (GAMEPLAY::IS_PC_VERSION())
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(true);
				_pop_scaleform_movie_function_void();
			}
			iVar1 = false;
			while (iVar1 < Global_17257.f_4639)
			{
				if (get_hash_key(&(Global_17257.f_4834[iVar1 /*4*/])) != get_hash_key("PREV"))
				{
					_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(iVar1);
					func_84(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && get_hash_key(&(Global_17257.f_4834[iVar2 /*4*/])) == get_hash_key("PREV"))
					{
						func_84(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_83(&(Global_17257.f_4834[iVar1 /*4*/]));
					}
					else
					{
						_begin_text_component(&(Global_17257.f_4834[iVar1 /*4*/]));
						if (iParam5)
						{
							add_text_component_substring_time(iParam2, 70);
						}
						else
						{
							add_text_component_integer(iParam2);
						}
						_end_text_component();
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (Global_17257.f_4896[iVar1] != 344 && GAMEPLAY::IS_BIT_SET(Global_17257.f_4922, iVar1))
						{
							_push_scaleform_movie_function_parameter_bool(true);
							_push_scaleform_movie_function_parameter_int(Global_17257.f_4896[iVar1]);
						}
						else
						{
							_push_scaleform_movie_function_parameter_bool(false);
							_push_scaleform_movie_function_parameter_int(344);
						}
					}
					_pop_scaleform_movie_function_void();
				}
				iVar1++;
			}
			if (get_hash_key(&(Global_2562053.f_16)) != get_hash_key(""))
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(Global_17257.f_4639);
				func_84(&Global_2562053);
				if (Global_2562053.f_20 == -1)
				{
					func_83(&(Global_2562053.f_16));
				}
				else
				{
					_begin_text_component(&(Global_2562053.f_16));
					if (iParam5)
					{
						add_text_component_substring_time(iParam2, 70);
					}
					else
					{
						add_text_component_integer(iParam2);
					}
					_end_text_component();
				}
				_pop_scaleform_movie_function_void();
			}
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(80);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4952)
			{
				_push_scaleform_movie_function_parameter_int(true);
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(false);
			}
			_pop_scaleform_movie_function_void();
			Global_17257.f_4640 = 1;
		}
		iVar1 = false;
		while (iVar1 < Global_17257.f_4639)
		{
			if (Global_17257.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					_push_scaleform_movie_function_parameter_int(iVar1);
					_begin_text_component(&(Global_17257.f_4834[iVar1 /*4*/]));
					if (iParam5)
					{
						add_text_component_substring_time(iParam2, 70);
					}
					else
					{
						add_text_component_integer(iParam2);
					}
					_end_text_component();
					_pop_scaleform_movie_function_void();
				}
			}
			iVar1++;
		}
		if (Global_2562053.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				_push_scaleform_movie_function_parameter_int(iVar1);
				_begin_text_component(&(Global_2562053.f_16));
				if (iParam5)
				{
					add_text_component_substring_time(iParam2, 70);
				}
				else
				{
					add_text_component_integer(iParam2);
				}
				_end_text_component();
				_pop_scaleform_movie_function_void();
			}
		}
		_set_screen_draw_position(76, 66);
		_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
		if (iParam6)
		{
			if (!Global_17257.f_7862)
			{
				set_hud_component_position(15, 0f, -0.0375f);
				Global_17257.f_7862 = 1;
			}
		}
		else if (Global_17257.f_7862)
		{
			reset_hud_component_values(15);
			Global_17257.f_7862 = 0;
		}
		_0xE3A3DB414A373DAB();
		if (Global_17257.f_4925)
		{
			_set_screen_draw_position(82, 66);
			_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
			draw_scaleform_movie(Global_17257.f_5530[uVar0 /*10*/], Global_17257.f_4923, Global_17257.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			_0xE3A3DB414A373DAB();
		}
		else
		{
			draw_scaleform_movie_fullscreen(Global_17257.f_5530[uVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_83(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_84(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

bool func_85()
{
	Vector3 vVar0;
	
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	if (func_86())
	{
		vVar0 = {0f, -500f, 0f};
		get_mobile_phone_position(&vVar0);
		if (Global_14358 == 0)
		{
			if (vVar0.y > -119f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (vVar0.y > -101f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_86()
{
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	return false;
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	auto uVar0;
	
	get_hud_colour(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (iParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_88(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	set_text_font(0);
	set_text_scale(0f, 0.35f);
	set_text_leading(2);
	set_text_colour(iVar0, iVar1, iVar2, iVar3);
	set_text_wrap(fParam0, Global_17254 + Global_17256 - 0.0046875f);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void func_89(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	add_text_component_integer(iParam4);
	_draw_text(fParam0, fParam1, 0);
}

float func_90(char* sParam0, int iParam1, int iParam2)
{
	if (!is_string_null(sParam0))
	{
		if (get_hash_key(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_91();
	_set_text_entry_for_width(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	return _get_text_screen_width(1);
}

void func_91()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7837)
	{
		iVar0 = Global_17257.f_7833;
		iVar1 = Global_17257.f_7834;
		iVar2 = Global_17257.f_7835;
		iVar3 = Global_17257.f_7836;
	}
	set_text_font(0);
	set_text_scale(0f, 0.35f);
	set_text_colour(iVar0, iVar1, iVar2, iVar3);
	set_text_wrap(Global_17254 + 0.0046875f, Global_17254 + Global_17256 - 0.0046875f);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void func_92(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

auto func_93(int iParam0, int iParam1)
{
	char*[] sVar0 = new char*[2];
	
	if (!is_string_null_or_empty(&(Global_17257.f_6687[iParam0 /*16*/])))
	{
		return func_94(&(Global_17257.f_6687[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (iParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

auto func_94(auto uParam0)
{
	return uParam0;
}

char* func_95(int iParam0)
{
	if (!is_string_null_or_empty(&(Global_17257.f_5886[iParam0 /*16*/])))
	{
		return func_94(&(Global_17257.f_5886[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

bool func_96()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	_get_screen_active_resolution(&iVar0, &iVar1);
	fVar2 = to_float(iVar0) / to_float(iVar1);
	if (fVar2 > 3.5f)
	{
		return true;
	}
	return false;
}

bool func_97(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	Vector3 vVar7;
	
	sVar0 = func_95(iParam0);
	sVar1 = func_93(iParam0, iParam1);
	if (get_hash_key(sVar1) != 0)
	{
		fVar4 = 1f;
		if (iParam5)
		{
			_get_screen_active_resolution(&iVar2, &iVar3);
			fVar5 = _get_screen_aspect_ratio(0);
			if (func_96())
			{
				iVar2 = round(to_float(iVar3) * fVar5);
			}
			fVar6 = to_float(iVar2) / to_float(iVar3);
			fVar4 = fVar6 / fVar5;
			if (func_96())
			{
				fVar4 = 1f;
			}
			if (_get_number_of_instances_of_streamed_script(joaat("director_mode")) > 0)
			{
				get_screen_resolution(&iVar2, &iVar3);
			}
			iVar2 = round(to_float(iVar2) / fVar4);
			iVar3 = round(to_float(iVar3) / fVar4);
		}
		else
		{
			get_screen_resolution(&iVar2, &iVar3);
		}
		vVar7 = {get_texture_resolution(sVar0, sVar1)};
		vVar7.x *= func_98(iParam0) / fVar4;
		vVar7.y *= func_98(iParam0) / fVar4;
		if (!iParam2)
		{
			vVar7.x -= 2f;
			vVar7.y -= 2f;
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		*fParam3 = vVar7.x / IntToFloat(iVar2) * IntToFloat(iVar2 / iVar3);
		*fParam4 = vVar7.y / IntToFloat(iVar3) / vVar7.x / IntToFloat(iVar2) * *fParam3;
		if (!iParam5)
		{
			if (!get_is_widescreen() && iParam0 != 30)
			{
				*fParam3 *= 1.33f;
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17256)
			{
				*fParam4 *= Global_17256 / *fParam3;
				*fParam3 = Global_17256;
			}
		}
		return true;
	}
	return false;
}

float func_98(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

bool func_99(int iParam0, int iParam1)
{
	if (Global_2428492.f_1358.f_688 != 0)
	{
		return true;
	}
	if ((((((((!is_screen_faded_in() || (func_101(8, -1) && func_100() != 64)) || (get_pause_menu_state() != 0 && !iParam1)) || (is_player_switch_in_progress() && !iParam0)) || _0x2EAC52B4019E2782()) || Global_69749) || Global_17257.f_7861) || is_warning_message_active()) || Global_91330.f_1352)
	{
		return false;
	}
	return true;
}

auto func_100()
{
	return Global_1315846;
}

int func_101(int iParam0, int iParam1)
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

void func_102(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5606 = iParam0;
	Global_17257.f_5741 = iParam2;
	if (Global_17257.f_5606 < Global_17257.f_5605)
	{
		Global_17257.f_5605 = Global_17257.f_5606;
	}
	else if ((Global_17257.f_5599 && Global_17257.f_5606 > Global_17257.f_5607) || (!Global_17257.f_5599 && Global_17257.f_5606 >= Global_17257.f_5605 + Global_17257.f_5095))
	{
		iVar0 = Global_17257.f_5605;
		while (iVar0 <= Global_17257.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17257.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5095 && Global_17257.f_5605 < 128)
		{
			Global_17257.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5605;
			while (iVar0 <= Global_17257.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17257.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	if (iParam1)
	{
		StringCopy(&(Global_17257.f_4562), "", 16);
		StringCopy(&(Global_2562053.f_21), "", 16);
	}
}

void func_103(auto uParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4)
{
	*uParam0 = floor(get_control_normal(2, 218) * 127f);
	*uParam1 = floor(get_control_normal(2, 219) * 127f);
	*uParam2 = floor(get_control_normal(2, 220) * 127f);
	*uParam3 = floor(get_control_normal(2, 221) * 127f);
	if (iParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor(get_disabled_control_normal(2, 218) * 127f);
			*uParam1 = floor(get_disabled_control_normal(2, 219) * 127f);
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor(get_disabled_control_normal(2, 220) * 127f);
			*uParam3 = floor(get_disabled_control_normal(2, 221) * 127f);
		}
	}
}

void func_104()
{
	func_115(0);
	func_114(1, 0, 0, 0, 0);
	func_113(1, 1, 1, 1, 1);
	if (Local_83.f_1 == 3)
	{
		func_112("SEA_MENU");
	}
	else
	{
		func_112("STREET_MENU");
	}
	func_108(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_108(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_107(201, "ITEM_SELECT", -1);
	func_107(202, "ITEM_EXIT", -1);
	func_106(11, "ITEM_SCROLL", -1);
	func_105(0);
	func_102(0, 1, 1);
	iLocal_97 = 0;
}

void func_105(int iParam0)
{
	Global_17257.f_5605 = iParam0;
}

void func_106(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = _0x80C2FD58D720C801(2, iParam0, true);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2562053, sVar0, 64);
		StringCopy(&(Global_2562053.f_16), sParam1, 16);
		Global_2562053.f_20 = iParam2;
		return;
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_17257.f_4922), Global_17257.f_4639);
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = 344;
	Global_17257.f_4909[Global_17257.f_4639] = iParam0;
	Global_17257.f_4639++;
}

void func_107(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = _get_control_action_name(2, iParam0, true);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2562053, sVar0, 64);
		StringCopy(&(Global_2562053.f_16), sParam1, 16);
		Global_2562053.f_20 = iParam2;
		return;
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_17257.f_4922), Global_17257.f_4639);
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 31;
	Global_17257.f_4639++;
}

void func_108(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	auto uVar3;
	float fVar4;
	
	if (Global_17257.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5088 >= 128)
	{
		return;
	}
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 < Global_17257.f_5608)
	{
		return;
	}
	if (Global_17257.f_5088 != iParam0)
	{
		Global_17257.f_5088 = iParam0;
		Global_17257.f_5089 = 0;
	}
	iVar0 = Global_17257.f_4926[Global_17257.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 1)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam1, 24);
	if (!is_string_null_or_empty(sParam1) && !does_text_label_exist(sParam1))
	{
	}
	Global_17257.f_1610[Global_17257.f_5090] = iParam3;
	Global_17257.f_1867[Global_17257.f_5090] = iParam4;
	Global_17257.f_5090++;
	if (!iParam3)
	{
		func_111(Global_17257.f_5088, 1);
	}
	else
	{
		func_111(Global_17257.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_110(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_97(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 += fVar2 * 2f;
		}
		if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
		{
			Global_17257.f_4938[Global_17257.f_5089] = fVar1;
		}
	}
	if (iParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_109(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
			if (fVar4 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar4;
			}
		}
	}
	GAMEPLAY::SET_BIT(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 1;
	Global_17257.f_5609 = Global_17257.f_5090 - 1;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = iParam2;
}

float func_109(char* sParam0)
{
	if (!does_text_label_exist(sParam0))
	{
	}
	return _get_text_scale_height(0.35f, 0);
}

float func_110(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		if (get_hash_key(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_80(0, 1, 0, 0, 0, 0);
	_set_text_entry_for_width(sParam0);
	return _get_text_screen_width(1);
}

void func_111(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor(to_float(iParam0) / 32f);
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_17257.f_5881[iVar0]), iParam0 - iVar0 * 32);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_17257.f_5881[iVar0]), iParam0 - iVar0 * 32);
	}
}

void func_112(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_1), sParam0, 16);
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_113(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_114(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4926[0] = iParam0;
	Global_17257.f_4926[1] = iParam1;
	Global_17257.f_4926[2] = iParam2;
	Global_17257.f_4926[3] = iParam3;
	Global_17257.f_4926[4] = iParam4;
	Global_17257.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5096++;
	}
}

void func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2443586[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17257.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4959[iVar0] = 0;
		Global_17257.f_5097[iVar0] = 0;
		Global_17257.f_5226[iVar0] = 0;
		Global_17257.f_5746[iVar0] = 0f;
		Global_17257.f_5355[iVar0] = 0;
		Global_17257.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4926[iVar0] = 0;
		Global_17257.f_4938[iVar0] = 0f;
		Global_17257.f_4932[iVar0] = -1f;
		Global_17257.f_4945[iVar0] = 0;
		Global_17257.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 344;
		Global_17257.f_4909[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_17257.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6687[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2562053.f_16), "", 16);
	Global_2562053.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5088 = 0;
	Global_17257.f_5089 = 0;
	Global_17257.f_5090 = 0;
	Global_17257.f_5092 = 0;
	Global_17257.f_5093 = 0;
	Global_17257.f_5094 = 0;
	Global_17257.f_5091 = 0;
	Global_17257.f_5741 = 0;
	Global_17257.f_5606 = 0;
	Global_17257.f_5605 = 0;
	Global_17257.f_5607 = 0;
	StringCopy(&(Global_17257.f_4562), "", 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = 0;
	Global_17257.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4638 = 0;
	StringCopy(&(Global_2562053.f_21), "", 16);
	Global_2562053.f_61 = 0;
	Global_2562053.f_62 = 0;
	Global_2562053.f_63 = 0;
	Global_2562053.f_64 = 0;
	Global_2562053.f_65 = 0;
	Global_2562053.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2562053.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2562053.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4944 = 0f;
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_5611 = 0;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = 0;
	Global_17257.f_5609 = 0;
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	Global_17257.f_5095 = 10;
	Global_17257.f_5096 = 0;
	Global_17257.f_5743 = 0f;
	Global_17257.f_5744 = 0f;
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	Global_17257.f_5600 = 0f;
	Global_17257.f_5601 = 0;
	Global_17257.f_5603 = 0;
	Global_17257.f_5602 = 0;
	Global_17257.f_5604 = 0;
	Global_17257.f_7858 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5875[iVar0] = -1;
		Global_17257.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4951 = 0f;
	Global_17257.f_4922 = 0;
	Global_17257.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5881)
	{
		Global_17257.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_7837 = 0;
	Global_17257.f_7832 = 0;
	Global_17257.f_7842 = 0;
	Global_17257.f_7847 = 0;
	Global_17257.f_7852 = 0;
	Global_17257.f_7854 = 0;
	Global_17257.f_7860 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = _get_screen_aspect_ratio(0);
	if (iParam0)
	{
		Global_17256 = 0.225f * 16f / 9f / fVar2;
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17256 = 0.225f * 16f / 9f / fVar2;
	}
	else
	{
		Global_17256 = 0.225f;
	}
}

int func_116(char* sParam0, int iParam1, int iParam2)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_58(&uVar0, 1, iParam1))
	{
		return false;
	}
	iVar1 = true;
	StringCopy(&(Global_17257.f_5505[uVar0 /*4*/]), sParam0, 16);
	if (!is_string_null_or_empty(&(Global_17257.f_5505[uVar0 /*4*/])))
	{
		request_additional_text(&(Global_17257.f_5505[uVar0 /*4*/]), 9);
		Global_17257.f_5498[uVar0] = 1;
		if (!has_this_additional_text_loaded(&(Global_17257.f_5505[uVar0 /*4*/]), 9))
		{
			iVar1 = false;
		}
	}
	request_streamed_texture_dict("CommonMenu", false);
	Global_17257.f_5484[uVar0] = 1;
	if (!has_streamed_texture_dict_loaded("CommonMenu"))
	{
		iVar1 = false;
	}
	if (iParam2)
	{
		request_streamed_texture_dict("MPShopSale", false);
		Global_17257.f_5491[uVar0] = 1;
		if (!has_streamed_texture_dict_loaded("MPShopSale"))
		{
			iVar1 = false;
		}
	}
	iVar2 = false;
	StringCopy(&(Global_17257.f_5530[uVar0 /*10*/].f_1), "instructional_buttons", 24);
	iVar2 = func_117(&(Global_17257.f_5530[uVar0 /*10*/]));
	if (!iVar1 || !iVar2)
	{
	}
	return (iVar1 && iVar2);
}

int func_117(auto uParam0)
{
	switch (*uParam0.f_9)
	{
		case 0:
			if (!has_scaleform_movie_loaded(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(uParam0.f_1);
				*uParam0.f_9 = 1;
				if (*uParam0.f_7)
				{
					if (has_scaleform_movie_loaded(*uParam0))
					{
						*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_9 = 2;
					}
				}
			}
			else
			{
				*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
				*uParam0.f_9 = 2;
			}
			break;
		
		case 1:
			if (has_scaleform_movie_loaded(*uParam0))
			{
				*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
				*uParam0.f_9 = 2;
			}
			break;
		
		case 2:
			if (!has_scaleform_movie_loaded(*uParam0))
			{
				*uParam0.f_9 = 0;
			}
			break;
	}
	return *uParam0.f_9 == 2;
}

void func_118()
{
	int iVar0;
	
	if (func_148())
	{
		if (func_131())
		{
			iVar0 = 6;
			if (Local_83.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_129(iVar0);
			if (func_54(iLocal_103[iVar0]))
			{
				if (iLocal_102)
				{
					if (is_entity_playing_anim(iLocal_103[iVar0], sLocal_184, sLocal_185[iVar0], 3))
					{
						stop_anim_task(iLocal_103[iVar0], sLocal_184, sLocal_185[iVar0], -8f);
					}
					func_120(iVar0);
				}
			}
			set_input_exclusive(0, 51);
			if (is_control_just_released(0, 51))
			{
				iLocal_194 = 1;
				clear_help(1);
				iLocal_82 = 3;
			}
		}
		else if (!iLocal_93)
		{
			stop_gameplay_hint(0);
			iLocal_93 = 1;
		}
	}
	else
	{
		func_119();
		if (!iLocal_93)
		{
			stop_gameplay_hint(0);
			iLocal_93 = 1;
		}
	}
}

void func_119()
{
	if (iLocal_92 && GAMEPLAY::GET_GAME_TIMER() > iLocal_95)
	{
		clear_help(1);
		iLocal_92 = 0;
	}
}

void func_120(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_103[iParam0], 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		switch (iLocal_195)
		{
			case 0:
				if (vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_103[iParam0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 64f)
				{
					iLocal_196 = 0;
					iLocal_197 = 0;
					iLocal_195 = 1;
				}
				break;
			
			case 1:
				open_sequence_task(&iVar0);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
				close_sequence_task(iVar0);
				task_perform_sequence(iLocal_103[iParam0], iVar0);
				clear_sequence_task(&iVar0);
				iLocal_195 = 2;
				break;
			
			case 2:
				if (AI::GET_SCRIPT_TASK_STATUS(iLocal_103[iParam0], 242628503) != 1 || is_ped_facing_ped(iLocal_103[iParam0], PLAYER::PLAYER_PED_ID(), 20f))
				{
					task_turn_ped_to_face_entity(iLocal_103[iParam0], PLAYER::PLAYER_PED_ID(), -1);
					if (!iLocal_197)
					{
						func_127(iLocal_103[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_127(iLocal_103[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_195 = 3;
				}
				break;
			
			case 3:
				if (!is_ambient_speech_playing(iLocal_103[iParam0]))
				{
					func_125(&iLocal_198);
					AI::TASK_PLAY_ANIM(iLocal_103[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_195 = 4;
				}
				break;
			
			case 4:
				if (vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_103[iParam0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 225f)
				{
					iLocal_195 = 0;
				}
				if (func_121(&iLocal_198) >= 5f && !iLocal_196)
				{
					iLocal_196 = 1;
					iLocal_195 = 1;
				}
				else if (func_121(&iLocal_198) >= 10f && !iLocal_197)
				{
					iLocal_197 = 1;
					iLocal_195 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_121(int iParam0)
{
	if (func_124(iParam0))
	{
		if (func_123(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_122(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_122(int iParam0)
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

int func_123(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

int func_124(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, true);
}

void func_125(int iParam0)
{
	func_126(iParam0, 0f);
}

void func_126(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_122(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - fParam1;
	GAMEPLAY::SET_BIT(iParam0, true);
	GAMEPLAY::CLEAR_BIT(iParam0, 2);
	*iParam0.f_2 = 0f;
}

void func_127(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_128(iParam3), 0);
}

int func_128(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_129(int iParam0)
{
	if (is_player_playing(player_id()) && !func_130())
	{
		if (func_54(iLocal_103[iParam0]))
		{
			if (iLocal_93 && get_entity_speed(PLAYER::PLAYER_PED_ID()) < 20f)
			{
				set_gameplay_entity_hint(iLocal_103[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_93 = 0;
			}
		}
	}
}

bool func_130()
{
	if (_0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		return true;
	}
	return false;
}

bool func_131()
{
	if (is_player_playing(player_id()))
	{
		if (func_147())
		{
			return false;
		}
		if (func_146(func_43()) < Local_83.f_3)
		{
			if (Local_83.f_1 == 3)
			{
				func_143("SEA_NA_CASH", Local_83.f_3);
			}
			else
			{
				func_143("STREET_NA_CASH", Local_83.f_3);
			}
			iLocal_92 = 1;
			iLocal_95 = GAMEPLAY::GET_GAME_TIMER() + 1000;
			return false;
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_142(&iLocal_0);
			iLocal_0 = get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID());
			if (!func_137())
			{
				iLocal_92 = 1;
				iLocal_95 = GAMEPLAY::GET_GAME_TIMER() + 1000;
				return false;
			}
			else if ((get_entity_health(iLocal_0) <= 200 || is_entity_on_fire(iLocal_0)) || func_136())
			{
				func_135("RACE_VehDmg");
				iLocal_92 = 1;
				iLocal_95 = GAMEPLAY::GET_GAME_TIMER() + 1000;
				return false;
			}
			else if (get_ped_in_vehicle_seat(iLocal_0, -1) != PLAYER::PLAYER_PED_ID())
			{
				func_132();
				return false;
			}
			else
			{
				if (func_75(0) || _get_number_of_instances_of_streamed_script(joaat("appinternet")) > 0)
				{
					func_119();
					return false;
				}
				switch (Local_83.f_1)
				{
					case 1:
						func_143("STREET_PLAY_B", Local_83.f_3);
						break;
					
					case 2:
						func_143("STREET_PLAY_C", Local_83.f_3);
						break;
					
					case 3:
						func_135("SEA_PLAY");
						break;
				}
				iLocal_92 = 1;
				iLocal_95 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
		else
		{
			func_142(&iLocal_0);
			func_132();
			return false;
		}
	}
	return false;
}

void func_132()
{
	char* sVar0;
	
	if (Local_83.f_1 == 3)
	{
		if (func_13(iLocal_111))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_134(sVar0))
		{
			func_133(sVar0);
			iLocal_92 = 1;
			iLocal_95 = GAMEPLAY::GET_GAME_TIMER() + 1000;
		}
	}
	else if (Local_83.f_1 == 1)
	{
		if (!func_134("STREET_NA_BIKE"))
		{
			func_133("STREET_NA_BIKE");
			iLocal_92 = 1;
			iLocal_95 = GAMEPLAY::GET_GAME_TIMER() + 1000;
		}
	}
	else if (!func_134("STREET_NA_CAR"))
	{
		func_133("STREET_NA_CAR");
		iLocal_92 = 1;
		iLocal_95 = GAMEPLAY::GET_GAME_TIMER() + 1000;
	}
}

void func_133(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

int func_134(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_135(char* sParam0)
{
	if (!func_134(sParam0))
	{
		func_133(sParam0);
	}
}

bool func_136()
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
	if (is_this_model_a_bike(iVar0))
	{
		if (is_vehicle_tyre_burst(iLocal_0, 6, 0) || is_vehicle_tyre_burst(iLocal_0, 7, 0))
		{
			return true;
		}
	}
	else if (is_this_model_a_car(iVar0))
	{
		if (((is_vehicle_tyre_burst(iLocal_0, false, 0) || is_vehicle_tyre_burst(iLocal_0, true, 0)) || is_vehicle_tyre_burst(iLocal_0, 4, 0)) || is_vehicle_tyre_burst(iLocal_0, 5, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_137()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_83.f_1)
	{
		case 1:
			iVar0 = func_141();
			if (iVar0 == 1)
			{
				func_135("STREET_NA_COP");
				return false;
			}
			else if (iVar0 == 2)
			{
				func_135("STREET_NA_BIKE");
				return false;
			}
			break;
		
		case 2:
			iVar0 = func_139();
			if (iVar0 == 1)
			{
				func_135("STREET_NA_COP");
				return false;
			}
			else if (iVar0 == 2)
			{
				func_135("STREET_NA_CAR");
				return false;
			}
			break;
		
		case 3:
			if (!func_138())
			{
				if (func_13(iLocal_111))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_135(sVar1);
				return false;
			}
			break;
	}
	return true;
}

bool func_138()
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return true;
			}
		}
	}
	return false;
}

int func_139()
{
	int iVar0;
	int iVar1;
	int[] iVar2 = new int[83];
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (func_140(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == 1938952078)
			{
				return 1;
			}
			if (((is_this_model_a_bike(iVar0) || is_this_model_a_boat(iVar0)) || is_this_model_a_heli(iVar0)) || is_this_model_a_plane(iVar0))
			{
				return 2;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = 1938952078;
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

bool func_140(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return true;
			break;
	}
	return false;
}

int func_141()
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (is_this_model_a_bike(iVar0) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_142(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, 0);
		if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, 1))
		{
			set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

void func_143(char* sParam0, int iParam1)
{
	if (!func_145(sParam0, iParam1))
	{
		func_144(sParam0, iParam1);
	}
}

void func_144(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	add_text_component_integer(iParam1);
	_display_help_text_from_string_label(0, 1, true, -1);
}

int func_145(char* sParam0, int iParam1)
{
	_0x0A24DA3A41B718F5(sParam0);
	add_text_component_integer(iParam1);
	return _0x10BDDBFC529428DD(0);
}

int func_146(int iParam0)
{
	auto uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_147()
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID());
			if (func_14(iVar0))
			{
				if (is_entity_in_air(iVar0))
				{
					if (Local_83.f_1 == 3 && is_entity_in_water(iVar0))
					{
						return false;
					}
					return true;
				}
				else
				{
					return false;
				}
			}
		}
	}
	return false;
}

bool func_148()
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		iVar0 = 20;
		if (Local_83.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (get_distance_between_coords(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_89, 1) < IntToFloat(iVar0) && get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_149()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_154(&uLocal_216))
	{
		if (Local_83.f_1 == 2)
		{
			if (func_151())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_111))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_182) && STREAMING::HAS_MODEL_LOADED(iLocal_182))
					{
						iLocal_111 = create_vehicle(iLocal_182, vLocal_113, fLocal_116, 1, true);
						if (can_create_random_ped(1) && can_create_random_driver())
						{
							iLocal_112 = create_random_ped_as_driver(iLocal_111, 1);
							task_vehicle_temp_action(iLocal_112, iLocal_111, 1, 99999999);
							set_blocking_of_non_temporary_events(iLocal_112, true);
							set_ped_keep_task(iLocal_112, true);
						}
						set_vehicle_on_ground_properly(iLocal_111);
						set_vehicle_engine_on(iLocal_111, true, 1, 0);
						set_vehicle_radio_enabled(iLocal_111, 1);
						set_vehicle_radio_loud(iLocal_111, 1);
						_0x774BD811F656A122(get_radio_station_name(10), 1);
						set_veh_radio_station(iLocal_111, get_radio_station_name(10));
						_0xAB04325045427AAE(iLocal_111, 0);
						set_model_as_no_longer_needed(iLocal_182);
						wait(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_117))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_183))
					{
						iLocal_117 = create_vehicle(iLocal_183, vLocal_118, fLocal_121, 1, true);
						set_vehicle_engine_on(iLocal_117, false, 1, 0);
						set_vehicle_radio_enabled(iLocal_117, 1);
						set_vehicle_radio_loud(iLocal_117, 1);
						set_vehicle_on_ground_properly(iLocal_117);
						_0x774BD811F656A122(get_radio_station_name(10), 1);
						set_veh_radio_station(iLocal_117, get_radio_station_name(10));
						_0xAB04325045427AAE(iLocal_117, 0);
						set_model_as_no_longer_needed(iLocal_183);
						wait(0);
					}
				}
				if (has_anim_dict_loaded(sLocal_184))
				{
					if (iLocal_193)
					{
						iVar0 = 0;
						while (iVar0 <= iLocal_174 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_103[iVar0]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_103[iVar0], 0) && !func_150(iLocal_103[iVar0], -2017877118))
								{
									AI::TASK_PLAY_ANIM(iLocal_103[iVar0], sLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									set_ped_keep_task(iLocal_103[iVar0], true);
								}
							}
							else if (STREAMING::HAS_MODEL_LOADED(iLocal_174[iVar0]))
							{
								iLocal_103[iVar0] = PED::CREATE_PED(25, iLocal_174[iVar0], vLocal_136[iVar0 /*3*/], fLocal_158[iVar0], 1, true);
								set_entity_coords_no_offset(iLocal_103[iVar0], vLocal_136[iVar0 /*3*/], 0, 0, 1);
								set_blocking_of_non_temporary_events(iLocal_103[iVar0], true);
								AI::TASK_PLAY_ANIM(iLocal_103[iVar0], sLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								set_ped_keep_task(iLocal_103[iVar0], true);
							}
							iVar0++;
						}
						if ((((((((func_54(iLocal_103[0]) && func_54(iLocal_103[1])) && func_54(iLocal_103[2])) && func_54(iLocal_103[3])) && func_54(iLocal_103[4])) && func_54(iLocal_103[5])) && func_54(iLocal_103[6])) && func_13(iLocal_111)) && func_13(iLocal_117))
						{
							iLocal_102 = true;
							iVar0 = 0;
							while (iVar0 <= iLocal_174 - 1)
							{
								set_model_as_no_longer_needed(iLocal_174[iVar0]);
								iVar0++;
							}
							iLocal_193 = 0;
						}
					}
				}
			}
		}
		else if (Local_83.f_1 == 1)
		{
			if (func_151())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_111))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_182))
					{
						iLocal_111 = create_vehicle(iLocal_182, vLocal_113, fLocal_116, 1, true);
						if (can_create_random_ped(0) && can_create_random_bike_rider())
						{
							iLocal_112 = create_random_ped_as_driver(iLocal_111, 1);
							task_vehicle_temp_action(iLocal_112, iLocal_111, 1, 99999999);
							set_blocking_of_non_temporary_events(iLocal_112, true);
							set_ped_keep_task(iLocal_112, true);
						}
						set_vehicle_engine_on(iLocal_111, true, 1, 0);
						set_vehicle_radio_enabled(iLocal_111, 1);
						set_vehicle_radio_loud(iLocal_111, 1);
						_0x774BD811F656A122(get_radio_station_name(10), 1);
						set_veh_radio_station(iLocal_111, get_radio_station_name(10));
						_0xAB04325045427AAE(iLocal_111, 0);
						set_model_as_no_longer_needed(iLocal_182);
					}
				}
				if (has_anim_dict_loaded(sLocal_184))
				{
					if (iLocal_193)
					{
						iVar1 = 0;
						while (iVar1 <= iLocal_174 - 3)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_103[iVar1]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_103[iVar1], 0) && !func_150(iLocal_103[iVar1], -2017877118))
								{
									set_entity_coords_no_offset(iLocal_103[iVar1], vLocal_136[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										AI::TASK_PLAY_ANIM(iLocal_103[iVar1], sLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										AI::TASK_PLAY_ANIM(iLocal_103[iVar1], sLocal_184, sLocal_185[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									set_ped_keep_task(iLocal_103[iVar1], true);
								}
							}
							else if (STREAMING::HAS_MODEL_LOADED(iLocal_174[iVar1]))
							{
								iLocal_103[iVar1] = PED::CREATE_PED(25, iLocal_174[iVar1], vLocal_136[iVar1 /*3*/], fLocal_158[iVar1], 1, true);
								set_blocking_of_non_temporary_events(iLocal_103[iVar1], true);
							}
							iVar1++;
						}
						if ((((func_54(iLocal_103[0]) && func_54(iLocal_103[1])) && func_54(iLocal_103[2])) && func_54(iLocal_103[3])) && func_54(iLocal_103[4]))
						{
							task_look_at_entity(iLocal_103[4], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= iLocal_174 - 1)
							{
								set_model_as_no_longer_needed(iLocal_174[iVar1]);
								iVar1++;
							}
							iLocal_193 = 0;
						}
					}
				}
			}
		}
		else if (Local_83.f_1 == 3)
		{
			if (func_151())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_111))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_182))
					{
						iLocal_111 = create_vehicle(iLocal_182, vLocal_113, fLocal_116, 1, true);
						set_vehicle_on_ground_properly(iLocal_111);
						_0xE842A9398079BD82(iLocal_111, 0f);
						_0xE3EBAAE484798530(iLocal_111, 0);
						_0xB28B1FE5BFADD7F5(iLocal_111, 0);
						if (_get_boat_anchor(iLocal_111))
						{
							set_boat_anchor(iLocal_111, true);
						}
						set_vehicle_engine_on(iLocal_111, false, 1, 0);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_166[iVar2]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar2]))
						{
							if (!PED::IS_PED_INJURED(iLocal_170[iVar2]) && func_13(iLocal_166[iVar2]))
							{
								if (is_vehicle_seat_free(iLocal_166[iVar2], -1))
								{
									set_ped_into_vehicle(iLocal_170[iVar2], iLocal_166[iVar2], -1);
								}
							}
						}
						else if (func_13(iLocal_166[iVar2]) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_jetski_01")))
						{
							iLocal_170[iVar2] = PED::CREATE_PED_inside_vehicle(iLocal_166[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, true);
							set_ped_dies_in_water(iLocal_170[iVar2], 0);
							set_blocking_of_non_temporary_events(iLocal_170[iVar2], true);
						}
					}
					else if (STREAMING::HAS_MODEL_LOADED(iLocal_182))
					{
						iLocal_166[iVar2] = create_vehicle(iLocal_182, vLocal_122[iVar2 /*3*/], fLocal_132[iVar2], 1, true);
						set_vehicle_on_ground_properly(iLocal_166[iVar2]);
						_0xE842A9398079BD82(iLocal_166[iVar2], 0f);
						_0xE3EBAAE484798530(iLocal_166[iVar2], 1);
						_0xB28B1FE5BFADD7F5(iLocal_166[iVar2], 1);
						if (_get_boat_anchor(iLocal_166[iVar2]))
						{
							set_boat_anchor(iLocal_166[iVar2], true);
						}
						set_vehicle_engine_on(iLocal_166[iVar2], false, 1, 0);
					}
					iVar2++;
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iLocal_111) && ENTITY::DOES_ENTITY_EXIST(iLocal_166[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_166[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_166[2]))
				{
					set_model_as_no_longer_needed(iLocal_182);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_170[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_170[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_170[2]))
				{
					set_model_as_no_longer_needed(joaat("a_m_y_jetski_01"));
				}
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
			}
		}
	}
}

bool func_150(int iParam0, int iParam1)
{
	if (func_54(iParam0))
	{
		if (AI::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || AI::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_151()
{
	if (!func_153())
	{
		return false;
	}
	if (func_54(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_152(PLAYER::PLAYER_PED_ID(), vLocal_113, 100f) || is_screen_faded_out())
		{
			return true;
		}
	}
	return false;
}

int func_152(int iParam0, Vector3 vParam1, float fParam2)
{
	return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), vParam1) <= fParam4 * fParam4;
}

bool func_153()
{
	if (Local_83.f_1 == 3)
	{
		return true;
	}
	else if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		if (get_clock_hours() >= 20 || get_clock_hours() < 5)
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

bool func_154(auto uParam0)
{
	int iVar0;
	
	if (!*uParam0.f_145)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 30))
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 29))
			{
				return false;
			}
			if (!func_155(uParam0[iVar0 /*18*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	*uParam0.f_145 = 0;
	return true;
}

int func_155(auto uParam0)
{
	return func_156(*uParam0, uParam0.f_2, *uParam0.f_1);
}

int func_156(int iParam0, char* sParam1, int iParam2)
{
	if (GAMEPLAY::IS_BIT_SET(iParam0, 30))
	{
		if (GAMEPLAY::IS_BIT_SET(iParam0, 29))
		{
			switch (func_157(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return has_anim_dict_loaded(sParam1);
					break;
				
				case 2:
					return has_clip_set_loaded(sParam1);
					break;
				
				case 3:
					return has_streamed_texture_dict_loaded(sParam1);
					break;
				
				case 4:
					return has_vehicle_recording_been_loaded(iParam2, sParam1);
					break;
				
				case 5:
					return get_is_waypoint_recording_loaded(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, GAMEPLAY::IS_BIT_SET(iParam0, 27));
					break;
				
				case 7:
					return _has_streamed_script_loaded(iParam2);
					break;
				
				case 8:
					return has_additional_text_loaded(iParam2);
					break;
				
				case 9:
					return has_ptfx_asset_loaded();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

int func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 10)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_158(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_145)
	{
		if ((GAMEPLAY::GET_FRAME_COUNT() >= *uParam0.f_146 + *uParam0.f_147 || GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 2)) || GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 30))
				{
					if (!GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 29))
					{
						func_159(uParam0[iVar0 /*18*/]);
						*uParam0.f_146 = GAMEPLAY::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_159(int iParam0)
{
	func_160(iParam0, iParam0.f_2, *iParam0.f_1);
}

void func_160(int iParam0, char* sParam1, int iParam2)
{
	if (GAMEPLAY::IS_BIT_SET(*iParam0, 30))
	{
		switch (func_157(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				request_anim_dict(sParam1);
				break;
			
			case 2:
				request_clip_set(sParam1);
				break;
			
			case 3:
				request_streamed_texture_dict(sParam1, GAMEPLAY::IS_BIT_SET(*iParam0, 28));
				break;
			
			case 4:
				request_vehicle_recording(iParam2, sParam1);
				break;
			
			case 5:
				request_waypoint_recording(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, GAMEPLAY::IS_BIT_SET(*iParam0, 27));
				break;
			
			case 7:
				_request_streamed_script(iParam2);
				break;
			
			case 8:
				request_additional_text(sParam1, iParam2);
				break;
			
			case 9:
				request_ptfx_asset();
				break;
			
			default:
				break;
		}
		GAMEPLAY::SET_BIT(iParam0, 29);
	}
}

void func_161()
{
	int iVar0;
	
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		switch (Local_83)
		{
			case 0:
				vLocal_113 = {-158.67f, -1555.16f, 34.63f};
				fLocal_116 = 187.71f;
				vLocal_118 = {-155.15f, -1550.83f, 34.53f};
				fLocal_121 = 213.13f;
				vLocal_201 = {-68.87878f, -1818.903f, 24.55311f};
				vLocal_204 = {-56.0098f, -1807.029f, 27.85417f};
				vLocal_136[0 /*3*/] = {-157.19f, -1555.36f, 35.07f};
				vLocal_136[1 /*3*/] = {-157.04f, -1557.57f, 35.11f};
				vLocal_136[2 /*3*/] = {-159.83f, -1557.39f, 34.96f};
				vLocal_136[3 /*3*/] = {-156.64f, -1551.96f, 34.92f};
				vLocal_136[4 /*3*/] = {-156.25f, -1552.58f, 34.93f};
				vLocal_136[5 /*3*/] = {-153.23f, -1553.05f, 34.93f};
				vLocal_136[6 /*3*/] = {-155.3f, -1556.41f, 35.13f};
				fLocal_158[0] = 101.91f;
				fLocal_158[1] = 38.48f;
				fLocal_158[2] = -36.7f;
				fLocal_158[3] = -52.93f;
				fLocal_158[4] = -75.07f;
				fLocal_158[5] = 33.13f;
				fLocal_158[6] = -170.02f;
				break;
			
			case 1:
				vLocal_113 = {368.72f, 294.06f, 102.96f};
				fLocal_116 = 25.17f;
				vLocal_118 = {373.71f, 290.72f, 102.89f};
				fLocal_121 = 33.24f;
				vLocal_201 = {-523.5497f, 262.2986f, 80.01991f};
				vLocal_204 = {-509.1013f, 272.478f, 86.17713f};
				vLocal_136[0 /*3*/] = {367.24f, 293.81f, 103.41f};
				vLocal_136[1 /*3*/] = {368.73f, 296.89f, 103.41f};
				vLocal_136[2 /*3*/] = {366.94f, 296.34f, 103.43f};
				vLocal_136[3 /*3*/] = {375.21f, 291.85f, 103.25f};
				vLocal_136[4 /*3*/] = {374.81f, 292.47f, 103.26f};
				vLocal_136[5 /*3*/] = {371.51f, 291.85f, 103.31f};
				vLocal_136[6 /*3*/] = {373.86f, 296.3f, 103.31f};
				fLocal_158[0] = -64.83f;
				fLocal_158[1] = -163.04f;
				fLocal_158[2] = -118.77f;
				fLocal_158[3] = 127.18f;
				fLocal_158[4] = 105.04f;
				fLocal_158[5] = -146.75f;
				fLocal_158[6] = 10.11f;
				break;
			
			case 2:
				vLocal_113 = {-807.98f, -2555.14f, 13.34f};
				fLocal_116 = 3.35f;
				vLocal_118 = {-810.1f, -2560.85f, 13.38f};
				fLocal_121 = 43.57f;
				vLocal_201 = {-1000.759f, -2436.092f, 17.16946f};
				vLocal_204 = {-986.7399f, -2424.87f, 22.16946f};
				vLocal_136[0 /*3*/] = {-809.45f, -2554.82f, 13.76f};
				vLocal_136[1 /*3*/] = {-808.47f, -2552.43f, 13.76f};
				vLocal_136[2 /*3*/] = {-806.32f, -2552.87f, 13.76f};
				vLocal_136[3 /*3*/] = {-808.59f, -2559.5f, 13.76f};
				vLocal_136[4 /*3*/] = {-809.1f, -2558.97f, 13.76f};
				vLocal_136[5 /*3*/] = {-812.82f, -2559.48f, 13.76f};
				vLocal_136[6 /*3*/] = {-810.72f, -2555.37f, 13.76f};
				fLocal_158[0] = -86.65f;
				fLocal_158[1] = -130.05f;
				fLocal_158[2] = 150.04f;
				fLocal_158[3] = 137.51f;
				fLocal_158[4] = 115.37f;
				fLocal_158[5] = -136.43f;
				fLocal_158[6] = 20.43f;
				break;
			
			case 3:
				vLocal_113 = {778.59f, -1160.2f, 28.35f};
				fLocal_116 = 302.47f;
				vLocal_118 = {778.47f, -1164.01f, 28.25f};
				fLocal_121 = 287.97f;
				vLocal_201 = {-1000.759f, -2436.092f, 17.16946f};
				vLocal_204 = {-986.7399f, -2424.87f, 22.16946f};
				vLocal_136[0 /*3*/] = {778.16f, -1158.78f, 28.88f};
				vLocal_136[1 /*3*/] = {780.82f, -1158.1f, 28.73f};
				vLocal_136[2 /*3*/] = {781.52f, -1158.81f, 28.7f};
				vLocal_136[3 /*3*/] = {779.16f, -1165.74f, 28.72f};
				vLocal_136[4 /*3*/] = {779.86f, -1165.52f, 28.72f};
				vLocal_136[5 /*3*/] = {780.75f, -1161.99f, 28.65f};
				vLocal_136[6 /*3*/] = {783.8f, -1165.61f, 28.74f};
				fLocal_158[0] = -147.53f;
				fLocal_158[1] = 171.51f;
				fLocal_158[2] = 104.94f;
				fLocal_158[3] = 21.91f;
				fLocal_158[4] = -0.22f;
				fLocal_158[5] = 107.91f;
				fLocal_158[6] = -95.23f;
				break;
			
			case 4:
				vLocal_113 = {-1066.59f, -1151.04f, 1.71f};
				fLocal_116 = 258.32f;
				vLocal_136[0 /*3*/] = {-1065.07f, -1151.02f, 2.16f};
				vLocal_136[1 /*3*/] = {-1065.35f, -1149.36f, 2.16f};
				vLocal_136[2 /*3*/] = {-1067.13f, -1151.68f, 2.16f};
				vLocal_136[3 /*3*/] = {-1066.3f, -1149.38f, 2.16f};
				vLocal_136[4 /*3*/] = {-1066.01f, -1152.26f, 2.16f};
				fLocal_158[0] = 75.06f;
				fLocal_158[1] = 134.25f;
				fLocal_158[2] = -52.71f;
				fLocal_158[3] = -93.39f;
				fLocal_158[4] = -141.52f;
				vLocal_201 = {-1265.744f, -1057.199f, 5.410841f};
				vLocal_204 = {-1258.679f, -1049.919f, 9.443882f};
				break;
		}
		func_166(Local_83, &vLocal_207, &vLocal_210, &fLocal_213);
		iLocal_174[0] = joaat("a_f_y_hipster_02");
		iLocal_174[1] = joaat("a_m_y_hipster_02");
		iLocal_174[2] = joaat("a_m_y_hipster_02");
		iLocal_174[3] = joaat("a_f_y_hipster_02");
		iLocal_174[4] = joaat("a_m_y_hipster_02");
		iLocal_174[5] = joaat("a_m_y_hipster_02");
		iLocal_174[6] = joaat("a_m_y_hipster_02");
		if (Local_83.f_1 == 1)
		{
			sLocal_184 = "random@street_race";
			sLocal_185[0] = "_car_b_chatting_female";
			sLocal_185[1] = "_car_b_chatting_male";
			sLocal_185[2] = "_car_b_chatting_male";
			sLocal_185[3] = "_car_b_chatting_female";
			sLocal_185[4] = "_car_b_lookout";
		}
		else
		{
			sLocal_184 = "random@street_race";
			sLocal_185[0] = "_car_a_flirt_girl";
			sLocal_185[1] = "_car_a_gawker_male_a";
			sLocal_185[2] = "_car_a_gawker_male_b";
			sLocal_185[3] = "_car_b_chatting_female";
			sLocal_185[4] = "_car_b_chatting_male";
			sLocal_185[5] = "_car_b_driver";
			sLocal_185[6] = "_car_b_lookout";
			func_165(&uLocal_216, iLocal_183);
		}
		iLocal_182 = func_164(Local_83.f_1);
		iVar0 = 0;
		while (iVar0 <= iLocal_174 - 1)
		{
			func_165(&uLocal_216, iLocal_174[iVar0]);
			iVar0++;
		}
		func_165(&uLocal_216, iLocal_182);
		func_162(&uLocal_216, sLocal_184);
		set_ped_paths_in_area(vLocal_201, vLocal_204, false, 0);
		set_roads_in_angled_area(vLocal_207, vLocal_210, fLocal_213, 0, false, 1);
		iLocal_94 = 1;
	}
	else if (Local_83.f_1 == 3)
	{
		switch (Local_83)
		{
			case 5:
				vLocal_113 = {3066.63f, 650.9f, 0.17f};
				fLocal_116 = 351.81f;
				vLocal_122[0 /*3*/] = {3073.57f, 648.09f, 0.01f};
				fLocal_132[0] = 5.72f;
				vLocal_122[1 /*3*/] = {3071.53f, 648.79f, -0.09f};
				fLocal_132[1] = 351.33f;
				vLocal_122[2 /*3*/] = {3068.73f, 645.53f, -0.07f};
				fLocal_132[2] = 348.18f;
				break;
			
			case 6:
				vLocal_113 = {3462.11f, 5192.15f, -0.04f};
				fLocal_116 = 222.9f;
				vLocal_122[0 /*3*/] = {3456.64f, 5195.91f, 0.12f};
				fLocal_132[0] = 211.54f;
				vLocal_122[1 /*3*/] = {3453.19f, 5192.84f, -0.17f};
				fLocal_132[1] = 201.55f;
				vLocal_122[2 /*3*/] = {3451.06f, 5189.43f, -0.3f};
				fLocal_132[2] = 221.55f;
				break;
			
			case 7:
				vLocal_113 = {194.64f, 3621.27f, 29.91f};
				fLocal_116 = 163.95f;
				vLocal_122[0 /*3*/] = {198.62f, 3620.46f, 29.91f};
				fLocal_132[0] = 175.4f;
				vLocal_122[1 /*3*/] = {202.78f, 3619.69f, 29.87f};
				fLocal_132[1] = 163.69f;
				vLocal_122[2 /*3*/] = {210.14f, 3618.88f, 29.87f};
				fLocal_132[2] = 175.31f;
				break;
			
			case 8:
				vLocal_113 = {627.58f, -2138.06f, -0.07f};
				fLocal_116 = 180.09f;
				vLocal_122[0 /*3*/] = {643.09f, -2146.11f, -0.09f};
				fLocal_132[0] = 143.89f;
				vLocal_122[1 /*3*/] = {638.21f, -2145.3f, -0.1f};
				fLocal_132[1] = 172.41f;
				vLocal_122[2 /*3*/] = {633.56f, -2143.83f, -0.04f};
				fLocal_132[2] = 191.97f;
				break;
		}
		iLocal_182 = joaat("seashark");
		func_165(&uLocal_216, iLocal_182);
		func_165(&uLocal_216, joaat("a_m_y_jetski_01"));
	}
}

void func_162(auto uParam0, char* sParam1)
{
	func_163(uParam0, 1, -1, sParam1, 0);
}

void func_163(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 30))
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if (*(uParam0[iVar0 /*18*/]).f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!are_strings_equal(sParam3, "NULL"))
					{
						if (are_strings_equal(uParam0[iVar0 /*18*/].f_2, sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!*uParam0.f_145)
	{
		*uParam0.f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 30))
		{
			StringCopy(uParam0[iVar0 /*18*/].f_2, sParam3, 64);
			*(uParam0[iVar0 /*18*/]).f_1 = iParam2;
			*uParam0[iVar0 /*18*/] = iParam4;
			GAMEPLAY::SET_BIT(uParam0[iVar0 /*18*/], iParam1);
			GAMEPLAY::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_164(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("bati");
			break;
		
		case 2:
			iVar0 = joaat("ninef");
			break;
		
		case 3:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_165(auto uParam0, int iParam1)
{
	func_163(uParam0, 0, iParam1, "NULL", 0);
}

void func_166(int iParam0, auto uParam1, auto uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = {311.1262f, -1896.261f, 20.68329f};
			*uParam2 = {-295.0653f, -1405.53f, 35.3146f};
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = {273.185f, 335.2969f, 105.5704f};
			*uParam2 = {412.2877f, 299.2304f, 101.0724f};
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = {-823.7157f, -2588f, 13.7691f};
			*uParam2 = {-801.3356f, -2464.007f, 12.42913f};
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = {791.8257f, -1423.863f, 24.17954f};
			*uParam2 = {783.167f, -1015.648f, 50.24134f};
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = {-1084.03f, -1165.724f, 0.150211f};
			*uParam2 = {-1029.213f, -1134.581f, 2.174534f};
			*fParam3 = 10f;
			break;
	}
}

bool func_167()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_53(9))
	{
		return false;
	}
	if (func_38(6) || func_38(7))
	{
		return false;
	}
	if (Global_55743)
	{
		return false;
	}
	if (func_190())
	{
		return false;
	}
	if (Local_83.f_1 != 3 && func_43() != 1)
	{
		return false;
	}
	if (is_stunt_jump_in_progress())
	{
		return false;
	}
	if (func_54(PLAYER::PLAYER_PED_ID()) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = get_players_last_vehicle();
		if (((func_13(iVar0) && is_ped_sitting_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0)) && !func_189(PLAYER::PLAYER_PED_ID(), iVar0, -1)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("taxi"))
		{
			return false;
		}
	}
	switch (Local_83)
	{
		case 0:
			if (Global_101128[0])
			{
				return false;
			}
			break;
		
		case 1:
			if (Global_101128[1])
			{
				return false;
			}
			break;
		
		case 2:
			if (Global_101128[2])
			{
				return false;
			}
			break;
		
		case 3:
			if (Global_101128[3])
			{
				return false;
			}
			break;
		
		case 4:
			if (Global_101128[4])
			{
				return false;
			}
			break;
		
		case 5:
			if (Global_101118[0])
			{
				return false;
			}
			break;
		
		case 6:
			if (Global_101118[1])
			{
				return false;
			}
			break;
		
		case 7:
			if (Global_101118[2])
			{
				return false;
			}
			break;
		
		case 8:
			if (Global_101118[3])
			{
				return false;
			}
			break;
	}
	if (!func_153())
	{
		iVar1 = 0;
		while (iVar1 <= iLocal_174 - 1)
		{
			if (func_54(iLocal_103[iVar1]))
			{
				open_sequence_task(&iVar2);
				task_pause(false, iVar1 * 100);
				task_wander_standard(false, 1193033728, 0);
				close_sequence_task(iVar2);
				task_perform_sequence(iLocal_103[iVar1], iVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= iLocal_170 - 1)
		{
			if (func_54(iLocal_170[iVar1]))
			{
				open_sequence_task(&iVar2);
				task_pause(false, iVar1 * 110);
				if (func_13(iLocal_166[iVar1]) && is_ped_in_vehicle(iLocal_170[iVar1], iLocal_166[iVar1], 0))
				{
					task_vehicle_drive_wander(false, iLocal_166[iVar1], 30f, 786597);
				}
				else
				{
					task_wander_standard(false, 1193033728, 0);
				}
				close_sequence_task(iVar2);
				task_perform_sequence(iLocal_170[iVar1], iVar2);
			}
			iVar1++;
		}
		if (func_54(iLocal_112))
		{
			if (func_13(iLocal_111) && is_ped_in_vehicle(iLocal_112, iLocal_111, 0))
			{
				task_vehicle_drive_wander(iLocal_112, iLocal_111, 30f, 786597);
			}
			else
			{
				task_wander_standard(iLocal_112, 1193033728, 0);
			}
		}
		return false;
	}
	if (func_169())
	{
		iVar4 = 0;
		while (iVar4 <= iLocal_174 - 1)
		{
			if (func_54(iLocal_103[iVar4]))
			{
				open_sequence_task(&iVar3);
				task_pause(false, iVar4 * 50);
				AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				close_sequence_task(iVar3);
				if (iVar4 % 2 == 0)
				{
					func_168(iLocal_103[iVar4], 1);
				}
				task_perform_sequence(iLocal_103[iVar4], iVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= iLocal_170 - 1)
		{
			if (func_13(iLocal_166[iVar4]) && Local_83.f_1 == 3)
			{
				set_boat_anchor(iLocal_166[iVar4], false);
			}
			if (func_54(iLocal_170[iVar4]))
			{
				open_sequence_task(&iVar3);
				task_pause(false, iVar4 * 60);
				if (func_13(iLocal_166[iVar4]) && is_ped_in_vehicle(iLocal_170[iVar4], iLocal_166[iVar4], 0))
				{
					task_vehicle_drive_wander(false, iLocal_166[iVar4], 50f, 786468);
				}
				else
				{
					AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				}
				close_sequence_task(iVar3);
				task_perform_sequence(iLocal_170[iVar4], iVar3);
				if (iVar4 % 2 == 0)
				{
					func_168(iLocal_170[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_13(iLocal_111) && Local_83.f_1 == 3)
		{
			set_boat_anchor(iLocal_111, false);
		}
		if (func_54(iLocal_112))
		{
			if (func_13(iLocal_111) && is_ped_in_vehicle(iLocal_112, iLocal_111, 0))
			{
				task_vehicle_drive_wander(iLocal_112, iLocal_111, 50f, 786468);
			}
			else
			{
				AI::TASK_SMART_FLEE_PED(iLocal_112, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			}
		}
		switch (Local_83)
		{
			case 0:
				Global_101128[0] = 1;
				Global_101134[0] = GAMEPLAY::GET_GAME_TIMER();
				break;
			
			case 1:
				Global_101128[1] = 1;
				Global_101134[1] = GAMEPLAY::GET_GAME_TIMER();
				break;
			
			case 2:
				Global_101128[2] = 1;
				Global_101134[2] = GAMEPLAY::GET_GAME_TIMER();
				break;
			
			case 3:
				Global_101128[3] = 1;
				Global_101134[3] = GAMEPLAY::GET_GAME_TIMER();
				break;
			
			case 4:
				Global_101128[4] = 1;
				Global_101134[4] = GAMEPLAY::GET_GAME_TIMER();
				break;
			
			case 5:
				Global_101118[0] = 1;
				Global_101123[0] = GAMEPLAY::GET_GAME_TIMER();
				break;
			
			case 6:
				Global_101118[1] = 1;
				Global_101123[1] = GAMEPLAY::GET_GAME_TIMER();
				break;
			
			case 7:
				Global_101118[2] = 1;
				Global_101123[2] = GAMEPLAY::GET_GAME_TIMER();
				break;
			
			case 8:
				Global_101118[3] = 1;
				Global_101123[3] = GAMEPLAY::GET_GAME_TIMER();
				break;
		}
		return false;
	}
	return true;
}

void func_168(int iParam0, int iParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_54(iParam0))
	{
		iVar1 = 2;
		if (iParam1)
		{
			iVar1 = 3;
		}
		iVar2 = get_random_int_in_range(false, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (is_ped_male(iParam0))
		{
			func_127(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_127(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

bool func_169()
{
	int iVar0;
	
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		return true;
	}
	if (Local_83.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= iLocal_170 - 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar0]))
			{
				if (PED::IS_PED_INJURED(iLocal_170[iVar0]))
				{
					return true;
				}
				else if (func_170(iLocal_170[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || is_ped_being_jacked(iLocal_170[iVar0]))
				{
					return true;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_166[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_166[iVar0], 0))
				{
					return true;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_166[iVar0], PLAYER::PLAYER_PED_ID(), 1) && get_entity_health(iLocal_166[iVar0]) < 900)
				{
					return true;
				}
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_111, 0))
			{
				return true;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_111, PLAYER::PLAYER_PED_ID(), 1) && get_entity_health(iLocal_111) < 900)
			{
				return true;
			}
		}
		return false;
	}
	if (func_152(PLAYER::PLAYER_PED_ID(), vLocal_89, 50f) && is_ped_shooting(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_112))
	{
		if (PED::IS_PED_INJURED(iLocal_112))
		{
			return true;
		}
		else if (func_170(iLocal_112, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return true;
		}
		else if (is_ped_being_jacked(iLocal_112))
		{
			set_blocking_of_non_temporary_events(iLocal_112, false);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_111, 0))
		{
			return true;
		}
		else if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_111, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_111, PLAYER::PLAYER_PED_ID(), 1))
		{
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_117))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_117, 0))
		{
			return true;
		}
		else if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_117, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_117, PLAYER::PLAYER_PED_ID(), 1))
		{
			return true;
		}
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_174 - 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_103[iVar0]))
		{
			if (PED::IS_PED_INJURED(iLocal_103[iVar0]))
			{
				return true;
			}
			else if (func_170(iLocal_103[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_170(int iParam0, int iParam1, Vector3 fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Vector3 vVar0;
	
	if (func_14(PLAYER::PLAYER_PED_ID()) && func_14(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (func_184(iParam0, iParam1, iParam5, iParam6, iParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
			{
				vVar0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
				if (vVar0.x * vVar0.x + vVar0.y * vVar0.y + vVar0.z * vVar0.z <= 5f)
				{
					return func_183(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (iParam4)
		{
			return 0;
		}
		else if (func_171(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

bool func_171(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_14(PLAYER::PLAYER_PED_ID()) && func_14(iParam0))
	{
		if (func_182(iParam0) || is_player_targetting_entity(player_id(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_172(iParam0, fParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_172(int iParam0, float fParam1)
{
	return func_173(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

int func_173(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	auto uVar0;
	Vector3 vVar1;
	int iVar4;
	
	iVar4 = func_181(iParam0, iParam1);
	if (!func_14(iParam0) || !func_14(iParam1))
	{
		if (iVar4 != -1)
		{
			func_180(&(Local_40[iVar4 /*4*/]));
		}
		return false;
	}
	if (!func_177(iParam0, iParam1, fParam2, iParam3))
	{
		return false;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_176();
		if (iVar4 == -1)
		{
			return false;
		}
		Local_40[iVar4 /*4*/].f_1 = iParam0;
		Local_40[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = {get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f)};
	uVar0 = func_174(&(Local_40[iVar4 /*4*/]), vVar1, iParam1, &(Local_40[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || GAMEPLAY::GET_GAME_TIMER() - Local_40[iVar4 /*4*/].f_3 < iParam4);
}

bool func_174(auto uParam0, Vector3 vParam1, int iParam2, auto uParam3, int iParam4, int iParam5)
{
	auto uVar0;
	Vector3 vVar1;
	auto uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = false;
	if (!func_14(iParam4))
	{
		*uParam0 = 0;
		return false;
	}
	if (*uParam0 == 0)
	{
		vVar1 = {func_175(iParam4, iParam7)};
		*uParam0 = _0x7EE9F5D83DD4F90E(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return false;
	}
	iVar8 = _get_raycast_result(*uParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return false;
	}
	else if (iVar8 == 1)
	{
		return false;
	}
	*uParam0 = 0;
	if (is_entity_a_ped(iVar7))
	{
		func_14(iVar7);
		if (get_ped_index_from_entity_index(iVar7) == iParam4)
		{
			if (iLocal_81)
			{
				draw_debug_line_with_two_colours(vParam1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = GAMEPLAY::GET_GAME_TIMER();
			return true;
		}
		return false;
	}
	if (is_entity_a_vehicle(iVar7))
	{
		func_14(iVar7);
		if (is_ped_in_any_vehicle(iParam4, 0))
		{
			if (get_vehicle_index_from_entity_index(iVar7) == get_vehicle_ped_is_in(iParam4, 0))
			{
				if (iLocal_81)
				{
					draw_debug_line_with_two_colours(vParam1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
		return false;
	}
	return false;
}

Vector3 func_175(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = get_random_int_in_range(false, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return get_ped_bone_coords(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return get_ped_bone_coords(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return get_ped_bone_coords(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return get_ped_bone_coords(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return get_ped_bone_coords(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
}

int func_176()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40)
	{
		if ((Local_40[iVar0 /*4*/] == 0 && Local_40[iVar0 /*4*/].f_1 == 0) && Local_40[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_177(int iParam0, int iParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	vVar0 = {func_179(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1))};
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return true;
	}
	if (iParam3 == 0)
	{
		vVar3 = {get_entity_forward_vector(iParam0)};
	}
	else
	{
		vVar3 = {func_179(get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) - get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_178(vVar3, vVar0);
	if (fVar6 <= cos(fParam2 / 2f))
	{
		return false;
	}
	return true;
}

float func_178(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

Vector3 func_179(Vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * Vector(fVar1, fVar1, fVar1)};
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_180(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
}

int func_181(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40)
	{
		if (Local_40[iVar0 /*4*/].f_1 == iParam0 && Local_40[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_182(int iParam0)
{
	if (is_player_free_aiming_at_entity(player_id(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return true;
	}
	return false;
}

int func_183(int iParam0, int iParam1, Vector3 fParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {get_entity_forward_vector(iParam0)};
	vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	return vVar0.x * vVar3.x + vVar0.y * vVar3.y / vdist(vVar3, 0f, 0f, 0f) > cos(fParam2);
}

bool func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (iParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (iParam2)
	{
		fVar0 = 2f;
	}
	if (func_14(PLAYER::PLAYER_PED_ID()) && func_14(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!iParam2)
		{
			if (func_188(iParam0, iParam1, fVar0, fVar1))
			{
				return true;
			}
			if (func_185(iParam0, fVar1, iParam3, iParam4))
			{
				return true;
			}
		}
		else
		{
			if (is_ped_current_weapon_silenced(PLAYER::PLAYER_PED_ID()))
			{
				if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
				{
					if (is_bullet_in_area(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fVar0, 1))
					{
						return true;
					}
				}
			}
			else
			{
				if (iParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_188(iParam0, iParam1, fVar0, fVar1))
				{
					return true;
				}
			}
			if (func_185(iParam0, fVar1, iParam3, iParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_185(int iParam0, float fParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	vVar3 = {vVar0};
	vVar0.x -= fParam1;
	vVar0.y -= fParam1;
	vVar0.z -= fParam1;
	vVar3.x += fParam1;
	vVar3.y += fParam1;
	vVar3.z += fParam1;
	if (iParam2)
	{
		if (((_0x34318593248C8FB2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || _0x34318593248C8FB2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || _0x34318593248C8FB2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || _0x34318593248C8FB2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (iParam3)
			{
				if (func_186(iParam0, fParam1))
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
	}
	else
	{
		if (iParam3)
		{
			if (func_186(iParam0, fParam1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (is_projectile_in_area(vVar0, vVar3, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_186(int iParam0, float fParam1)
{
	auto uVar0;
	Vector3 vVar1;
	
	if ((((_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_187(iParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_187(int iParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	vVar0 = {func_179(vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, 1))};
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return true;
	}
	if (iParam5 == 0)
	{
		vVar3 = {get_entity_forward_vector(iParam0)};
	}
	else
	{
		vVar3 = {func_179(get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) - get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_178(vVar3, vVar0);
	if (fVar6 <= cos(fParam4 / 2f))
	{
		return false;
	}
	return true;
}

bool func_188(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam1)
	{
		if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
		{
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return true;
			}
		}
	}
	if (is_bullet_in_area(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam2, 1))
	{
		return true;
	}
	return false;
}

bool func_189(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, iParam2) == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_190()
{
	switch (Local_83)
	{
		case 5:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29501.f_2, false);
			break;
		
		case 6:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29501.f_2, true);
			break;
		
		case 7:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29501.f_2, 2);
			break;
		
		case 8:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29501.f_2, 3);
			break;
		
		case 0:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_3, false);
			break;
		
		case 1:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_3, true);
			break;
		
		case 2:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_3, 2);
			break;
		
		case 3:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_3, 3);
			break;
		
		case 4:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_3, 4);
			break;
	}
	return false;
}

void func_191()
{
	iLocal_82 = 0;
	iLocal_92 = 0;
	iLocal_99 = false;
	iLocal_100 = false;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	func_193(1);
	set_scenario_type_enabled("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", false);
	set_scenario_type_enabled("WORLD_VEHICLE_PARK_PARALLEL", false);
	if (Local_83 == 1)
	{
		iLocal_215 = func_192(374.0083f, 279.5919f, 102.3306f, 40f);
		clear_area_of_vehicles(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, false);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		iLocal_214 = func_192(vLocal_89, 60f);
	}
}

int func_192(Vector3 vParam0, float fParam1)
{
	Vector3 vVar0;
	
	vVar0 = {fParam3 / 2f, fParam3 / 2f, fParam3 / 2f};
	return add_scenario_blocking_area(vParam0 - vVar0, vParam0 + vVar0, 0, 1, 1, 1);
}

void func_193(int iParam0)
{
	if (iParam0)
	{
		switch (Local_83)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_165(&uLocal_216, joaat("banshee"));
				func_165(&uLocal_216, joaat("feltzer2"));
				func_165(&uLocal_216, joaat("sentinel"));
				break;
			
			case 4:
				func_165(&uLocal_216, joaat("bati"));
				func_165(&uLocal_216, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_165(&uLocal_216, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_194(&uLocal_216);
	}
}

void func_194(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0 /*18*/], 30))
		{
			func_195(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	*uParam0.f_145 = 1;
}

void func_195(auto uParam0)
{
	func_196(*uParam0, uParam0.f_2, *uParam0.f_1);
}

void func_196(int iParam0, char* sParam1, int iParam2)
{
	if (GAMEPLAY::IS_BIT_SET(iParam0, 30))
	{
		switch (func_157(iParam0))
		{
			case 0:
				set_model_as_no_longer_needed(iParam2);
				break;
			
			case 1:
				remove_anim_dict(sParam1);
				break;
			
			case 2:
				remove_clip_set(sParam1);
				break;
			
			case 3:
				set_streamed_texture_dict_as_no_longer_needed(sParam1);
				break;
			
			case 4:
				remove_vehicle_recording(iParam2, sParam1);
				break;
			
			case 5:
				remove_waypoint_recording(sParam1);
				break;
			
			case 6:
				release_script_audio_bank();
				break;
			
			case 7:
				_set_streamed_script_as_no_longer_needed(iParam2);
				break;
			
			case 8:
				clear_additional_text(iParam2, GAMEPLAY::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				remove_ptfx_asset();
				break;
			
			default:
				break;
		}
	}
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_1, false);
			break;
		
		case 1:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_1, true);
			break;
		
		case 2:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_1, 2);
			break;
		
		case 3:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_1, 3);
			break;
		
		case 4:
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_29504.f_1, 4);
			break;
	}
	return false;
}

int func_198(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	iVar0 = GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

void func_199()
{
	if (func_200(func_201(86, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 0;
		Local_83.f_1 = 2;
		Local_83.f_3 = 100;
		Local_83.f_4 = 20;
	}
	else if (func_200(func_201(87, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 1;
		Local_83.f_1 = 2;
		Local_83.f_3 = 500;
		Local_83.f_4 = 18;
	}
	else if (func_200(func_201(88, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 2;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1000;
		Local_83.f_4 = 2;
	}
	else if (func_200(func_201(89, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 3;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1250;
		Local_83.f_4 = 4;
	}
	else if (func_200(func_201(90, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 4;
		Local_83.f_1 = 1;
		Local_83.f_3 = 1500;
		Local_83.f_4 = 5;
	}
	else if (func_200(func_201(82, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 5;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 16;
	}
	else if (func_200(func_201(83, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 6;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 13;
	}
	else if (func_200(func_201(84, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 7;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 15;
		Local_83.f_5 = 1;
	}
	else if (func_200(func_201(85, 0), vLocal_89, 1f, 0))
	{
		Local_83 = 8;
		Local_83.f_1 = 3;
		Local_83.f_4 = 24;
		Local_83.f_3 = 0;
		Local_83.f_5 = 1;
	}
	else
	{
		func_202(0);
	}
}

bool func_200(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!iParam7)
	{
		if (absf(vParam0.x - vParam3.x) <= fParam6)
		{
			if (absf(vParam0.y - vParam3.y) <= fParam6)
			{
				if (absf(vParam0.z - vParam3.z) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (absf(vParam0.x - vParam3.x) <= fParam6)
	{
		if (absf(vParam0.y - vParam3.y) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_201(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_25433[iVar0 /*23*/][iParam1 /*3*/];
}

void func_202(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_93)
	{
		stop_gameplay_hint(0);
		iLocal_93 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_14(iLocal_103[iVar0]))
		{
			AI::CLEAR_PED_TASKS(iLocal_103[iVar0]);
			task_wander_standard(iLocal_103[iVar0], 1193033728, 0);
			set_blocking_of_non_temporary_events(iLocal_103[iVar0], false);
			set_ped_as_no_longer_needed(&(iLocal_103[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_14(iLocal_170[iVar0]))
		{
			if (func_14(iLocal_166[iVar0]))
			{
				AI::CLEAR_PED_TASKS(iLocal_170[iVar0]);
				if (is_this_model_a_boat(ENTITY::GET_ENTITY_MODEL(iLocal_166[iVar0])))
				{
					set_boat_anchor(iLocal_166[iVar0], false);
				}
				task_vehicle_drive_wander(iLocal_170[iVar0], iLocal_166[iVar0], 20f, 786599);
				set_ped_keep_task(iLocal_170[iVar0], true);
				set_blocking_of_non_temporary_events(iLocal_170[iVar0], false);
				set_ped_as_no_longer_needed(&(iLocal_170[iVar0]));
				set_vehicle_as_no_longer_needed(&(iLocal_166[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_14(iLocal_112))
	{
		if (func_14(iLocal_111))
		{
			AI::CLEAR_PED_TASKS(iLocal_112);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_112, 1, true);
			task_vehicle_drive_wander(iLocal_112, iLocal_111, 15f, 786599);
			set_ped_keep_task(iLocal_112, true);
			set_blocking_of_non_temporary_events(iLocal_112, false);
			set_ped_as_no_longer_needed(&iLocal_112);
			set_vehicle_as_no_longer_needed(&iLocal_111);
		}
	}
	if (func_14(iLocal_117))
	{
		set_vehicle_as_no_longer_needed(&iLocal_117);
	}
	switch (Local_83)
	{
		case 5:
			func_205(82, 0, 0);
			GAMEPLAY::SET_BIT(&(Global_101154.f_29501.f_2), false);
			break;
		
		case 6:
			func_205(83, 0, 0);
			GAMEPLAY::SET_BIT(&(Global_101154.f_29501.f_2), true);
			break;
		
		case 7:
			func_205(84, 0, 0);
			GAMEPLAY::SET_BIT(&(Global_101154.f_29501.f_2), 2);
			break;
		
		case 8:
			func_205(85, 0, 0);
			GAMEPLAY::SET_BIT(&(Global_101154.f_29501.f_2), 3);
			break;
		
		case 0:
			func_205(86, 0, 0);
			GAMEPLAY::SET_BIT(&(Global_101154.f_29504.f_3), false);
			break;
		
		case 1:
			func_205(87, 0, 0);
			GAMEPLAY::SET_BIT(&(Global_101154.f_29504.f_3), true);
			break;
		
		case 2:
			func_205(88, 0, 0);
			GAMEPLAY::SET_BIT(&(Global_101154.f_29504.f_3), 2);
			break;
		
		case 3:
			func_205(89, 0, 0);
			GAMEPLAY::SET_BIT(&(Global_101154.f_29504.f_3), 3);
			break;
		
		case 4:
			func_205(90, 0, 0);
			GAMEPLAY::SET_BIT(&(Global_101154.f_29504.f_3), 4);
			break;
	}
	if (iLocal_92)
	{
		clear_help(1);
	}
	_0x774BD811F656A122(get_radio_station_name(10), 0);
	if (iLocal_101)
	{
		set_user_radio_control_enabled(1);
	}
	if (iLocal_194 && !iParam0)
	{
		iVar1 = get_player_index();
		if (is_player_playing(iVar1))
		{
			if (!is_player_control_on(iVar1))
			{
				set_player_control(iVar1, true, 0);
			}
		}
	}
	if (!iParam0)
	{
		func_193(0);
	}
	if (iLocal_94)
	{
		set_ped_paths_back_to_original(vLocal_201, vLocal_204, 1);
		set_roads_back_to_original_in_angled_area(vLocal_207, vLocal_210, fLocal_213, 1);
		iLocal_94 = 0;
	}
	set_scenario_type_enabled("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", true);
	set_scenario_type_enabled("WORLD_VEHICLE_PARK_PARALLEL", true);
	if (Local_83 == 1)
	{
		remove_scenario_blocking_area(iLocal_215, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2)
	{
		remove_scenario_blocking_area(iLocal_214, 0);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
	}
	func_203(&uLocal_216, 0);
	terminate_this_thread();
}

void func_203(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (!iParam1)
	{
		func_194(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_204(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	*uParam0.f_145 = 0;
	*uParam0.f_146 = -1;
}

void func_204(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = -1;
	StringCopy(uParam0.f_2, "NULL", 64);
}

void func_205(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!iParam2)
	{
		iVar1 = GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, 15);
		if (iVar1 == iParam1)
		{
			return;
		}
	}
	if (iParam1 != GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, false))
	{
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 18);
		if (Global_25430 == 1)
		{
			Global_25431 = 1;
		}
		Global_25430 = 1;
	}
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), false);
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 15);
		GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25433[iVar0 /*23*/].f_11), false);
		GAMEPLAY::CLEAR_BIT(&(Global_25433[iVar0 /*23*/].f_11), 15);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, false))
	{
		if (does_blip_exist(Global_25433[iVar0 /*23*/].f_19))
		{
			set_this_script_can_remove_blips_created_by_any_script(1);
			remove_blip(&(Global_25433[iVar0 /*23*/].f_19));
			set_this_script_can_remove_blips_created_by_any_script(0);
		}
	}
}

