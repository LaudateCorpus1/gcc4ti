.set FreeHandles, 0x23B
.set HLock, 0x99
.set HeapAlloc, 0x90
.set HeapAllocESTACK, 0x91
.set HeapAllocHigh, 0x92
.set HeapAllocHighThrow, 0x94
.set HeapAllocPtr, 0xA2
.set HeapAllocThrow, 0x93
.set HeapAvail, 0x8F
.set HeapCompress, 0x95
.set HeapDeref, 0x96
.set HeapEnd, 0xA1
.set HeapFree, 0x97
.set HeapFreeIndir, 0x98
.set HeapFreePtr, 0xA3
.set HeapGetHandle, 0x239
.set HeapGetLock, 0x9B
.set HeapLock, 0x9A
.set HeapMax, 0x9C
.set HeapMoveHigh, 0xA0
.set HeapPtrToHandle, 0x23A
.set HeapRealloc, 0x9D
.set HeapShuffle, 0x474
.set HeapSize, 0x9E
.set HeapUnlock, 0x9F
.set HeapWalk, 0x12C
.set free, 0xA3
.set malloc, 0xA2
.set EX_getArg, 0xBE
.set EX_getBCD, 0xBF
.set RemainingArgCnt, 0x3C3
.set cmd_andpic, 0x32A
.set cmd_archive, 0x448
.set cmd_blddata, 0x32B
.set cmd_circle, 0x32C
.set cmd_clrdraw, 0x32D
.set cmd_clrerr, 0x32E
.set cmd_clrgraph, 0x32F
.set cmd_clrhome, 0x330
.set cmd_clrio, 0x331
.set cmd_clrtable, 0x332
.set cmd_copyvar, 0x333
.set cmd_cubicreg, 0x334
.set cmd_custmoff, 0x335
.set cmd_custmon, 0x336
.set cmd_custom, 0x337
.set cmd_cycle, 0x338
.set cmd_cyclepic, 0x339
.set cmd_delfold, 0x33A
.set cmd_delvar, 0x33B
.set cmd_dialog, 0x33C
.set cmd_disp, 0x33D
.set cmd_dispg, 0x33E
.set cmd_disphome, 0x33F
.set cmd_disptbl, 0x340
.set cmd_drawfunc, 0x341
.set cmd_drawinv, 0x342
.set cmd_drawparm, 0x343
.set cmd_drawpol, 0x344
.set cmd_else, 0x345
.set cmd_endfor, 0x346
.set cmd_endloop, 0x347
.set cmd_endtry, 0x348
.set cmd_endwhile, 0x349
.set cmd_exit, 0x34A
.set cmd_expreg, 0x34B
.set cmd_fill, 0x34C
.set cmd_fnoff, 0x34D
.set cmd_fnon, 0x34E
.set cmd_for, 0x34F
.set cmd_get, 0x350
.set cmd_getcalc, 0x351
.set cmd_goto, 0x352
.set cmd_graph, 0x353
.set cmd_if, 0x354
.set cmd_ifthen, 0x355
.set cmd_input, 0x356
.set cmd_inputstr, 0x357
.set cmd_line, 0x358
.set cmd_linehorz, 0x359
.set cmd_linetan, 0x35A
.set cmd_linevert, 0x35B
.set cmd_linreg, 0x35C
.set cmd_lnreg, 0x35D
.set cmd_local, 0x35E
.set cmd_lock, 0x35F
.set cmd_logistic, 0x360
.set cmd_medmed, 0x361
.set cmd_movevar, 0x362
.set cmd_newdata, 0x363
.set cmd_newfold, 0x364
.set cmd_newpic, 0x365
.set cmd_newplot, 0x366
.set cmd_newprob, 0x367
.set cmd_onevar, 0x368
.set cmd_output, 0x369
.set cmd_passerr, 0x36A
.set cmd_pause, 0x36B
.set cmd_plotsoff, 0x36C
.set cmd_plotson, 0x36D
.set cmd_popup, 0x36E
.set cmd_powerreg, 0x36F
.set cmd_printobj, 0x370
.set cmd_prompt, 0x371
.set cmd_ptchg, 0x372
.set cmd_ptoff, 0x373
.set cmd_pton, 0x374
.set cmd_pttext, 0x375
.set cmd_pxlchg, 0x376
.set cmd_pxlcircle, 0x377
.set cmd_pxlhorz, 0x378
.set cmd_pxlline, 0x379
.set cmd_pxloff, 0x37A
.set cmd_pxlon, 0x37B
.set cmd_pxltext, 0x37C
.set cmd_pxlvert, 0x37D
.set cmd_quadreg, 0x37E
.set cmd_quartreg, 0x37F
.set cmd_randseed, 0x380
.set cmd_rclgdb, 0x381
.set cmd_rclpic, 0x382
.set cmd_rename, 0x383
.set cmd_request, 0x384
.set cmd_return, 0x385
.set cmd_rplcpic, 0x386
.set cmd_send, 0x387
.set cmd_sendcalc, 0x388
.set cmd_sendchat, 0x389
.set cmd_shade, 0x38A
.set cmd_showstat, 0x38B
.set cmd_sinreg, 0x38C
.set cmd_slpline, 0x38D
.set cmd_sorta, 0x38E
.set cmd_sortd, 0x38F
.set cmd_stogdb, 0x390
.set cmd_stopic, 0x391
.set cmd_style, 0x392
.set cmd_table, 0x393
.set cmd_text, 0x394
.set cmd_toolbar, 0x395
.set cmd_trace, 0x396
.set cmd_try, 0x397
.set cmd_twovar, 0x398
.set cmd_unarchiv, 0x449
.set cmd_unlock, 0x399
.set cmd_while, 0x39A
.set cmd_xorpic, 0x39B
.set cmd_zoombox, 0x39C
.set cmd_zoomdata, 0x39D
.set cmd_zoomdec, 0x39E
.set cmd_zoomfit, 0x39F
.set cmd_zoomin, 0x3A0
.set cmd_zoomint, 0x3A1
.set cmd_zoomout, 0x3A2
.set cmd_zoomprev, 0x3A3
.set cmd_zoomrcl, 0x3A4
.set cmd_zoomsqr, 0x3A5
.set cmd_zoomstd, 0x3A6
.set cmd_zoomsto, 0x3A7
.set cmd_zoomtrig, 0x3A8
.set did_push_anti_deriv, 0x5B1
.set did_push_series, 0x588
.set push_1st_derivative, 0x5AE
.set push_abs, 0x543
.set push_acos, 0x537
.set push_acosh, 0x53E
.set push_approx, 0x4F7
.set push_asin, 0x536
.set push_asinh, 0x53D
.set push_atan, 0x538
.set push_atanh, 0x53F
.set push_augment, 0x496
.set push_ceiling, 0x54B
.set push_char, 0x497
.set push_coldim, 0x498
.set push_colnorm, 0x499
.set push_comb, 0x542
.set push_comdenom, 0x59B
.set push_conj, 0x547
.set push_cos, 0x533
.set push_cosh, 0x53B
.set push_cross_product, 0x4CE
.set push_csolve, 0x585
.set push_cumsum, 0x49A
.set push_czeros, 0x587
.set push_def_int, 0x5B2
.set push_denominator, 0x55B
.set push_dense_poly_eval, 0x49C
.set push_desolve, 0x58B
.set push_determinant, 0x49D
.set push_diag, 0x49E
.set push_dimension, 0x49F
.set push_div_dif_1c, 0x58D
.set push_div_dif_1f, 0x58C
.set push_dotproduct, 0x4A3
.set push_eigvc, 0x4CF
.set push_eigvl, 0x4D0
.set push_exp, 0x52E
.set push_expand, 0x59A
.set push_extended_prod, 0x5B5
.set push_factor, 0x59C
.set push_floor, 0x54A
.set push_fractional_part, 0x54E
.set push_gcd_numbers, 0x514
.set push_getfold, 0x317
.set push_getkey, 0x316
.set push_getmode, 0x318
.set push_gettype, 0x319
.set push_identity_mat, 0x4A4
.set push_im, 0x546
.set push_instring, 0x31A
.set push_integer_gcd, 0x551
.set push_integer_lcm, 0x552
.set push_integer_part, 0x54D
.set push_integer_quotient, 0x54F
.set push_integer_remainder, 0x550
.set push_is_prime, 0x515
.set push_left, 0x4A5
.set push_lim, 0x5AD
.set push_list_to_mat, 0x4A6
.set push_ln, 0x52F
.set push_log10, 0x530
.set push_mat_to_list, 0x4A8
.set push_matnorm, 0x4A7
.set push_max, 0x58A
.set push_max1, 0x554
.set push_max2, 0x599
.set push_mean, 0x4A9
.set push_median, 0x4AA
.set push_mid, 0x4AB
.set push_min, 0x589
.set push_min1, 0x553
.set push_min2, 0x598
.set push_mod, 0x54C
.set push_mrow, 0x4AC
.set push_mrowadd, 0x4AD
.set push_newlist, 0x4AE
.set push_newmat, 0x4AF
.set push_nint, 0x5B3
.set push_nsolve, 0x583
.set push_nth_derivative, 0x5AF
.set push_numerator, 0x55A
.set push_ord, 0x4B0
.set push_part, 0x31C
.set push_perm, 0x541
.set push_phase, 0x548
.set push_prodlist, 0x4B2
.set push_pttest, 0x31D
.set push_pxltest, 0x31E
.set push_r_cis, 0x549
.set push_rand, 0x31F
.set push_randmat, 0x4B4
.set push_randnorm, 0x4B5
.set push_randpoly, 0x320
.set push_re, 0x545
.set push_rec_to_angle, 0x539
.set push_red_row_ech, 0x4B6
.set push_right, 0x4B7
.set push_rotate, 0x4B8
.set push_round, 0x4B9
.set push_row_echelon, 0x4BE
.set push_rowadd, 0x4BA
.set push_rowdim, 0x4BB
.set push_rownorm, 0x4BC
.set push_rowswap, 0x4BD
.set push_sequence, 0x4BF
.set push_setfold, 0x321
.set push_setgraph, 0x322
.set push_setmode, 0x323
.set push_settable, 0x324
.set push_shift, 0x4C0
.set push_sign, 0x544
.set push_simult, 0x4C1
.set push_sin, 0x532
.set push_sin2, 0x531
.set push_sinh, 0x53A
.set push_solve, 0x584
.set push_sqrt, 0x52B
.set push_stddev, 0x4C3
.set push_str_to_expr, 0x325
.set push_string, 0x326
.set push_submat, 0x4C4
.set push_sumlist, 0x4C5
.set push_summation, 0x5B4
.set push_switch, 0x327
.set push_tan, 0x534
.set push_tanh, 0x53C
.set push_unitv, 0x4C8
.set push_variance, 0x4C9
.set push_when, 0x57D
.set push_zeros, 0x586
.set did_push_to_polar, 0x313
.set push_and, 0x5AB
.set push_arg_minus_1, 0x520
.set push_arg_plus_1, 0x51F
.set push_assignment, 0x4DD
.set push_degrees, 0x314
.set push_difference, 0x51A
.set push_dot_add, 0x4A0
.set push_dot_div, 0x4CD
.set push_dot_exponentiate, 0x596
.set push_dot_mult, 0x4A1
.set push_dot_sub, 0x4A2
.set push_equals, 0x5A3
.set push_exponentiate, 0x595
.set push_factorial, 0x540
.set push_greater_than, 0x5A5
.set push_greater_than_or_equals, 0x5A7
.set push_indir_name, 0x2B2
.set push_less_than, 0x5A6
.set push_less_than_or_equals, 0x5A8
.set push_list_plus, 0x3BD
.set push_list_times, 0x3BE
.set push_matrix_product, 0x3C5
.set push_negate, 0x524
.set push_not, 0x5AA
.set push_not_equals, 0x5A4
.set push_or, 0x5AC
.set push_percent, 0x555
.set push_pow, 0x30F
.set push_product, 0x521
.set push_radians, 0x4B3
.set push_ratio, 0x526
.set push_square, 0x52C
.set push_substitute_no_simplify, 0x489
.set push_substitute_simplify, 0x5B9
.set push_substitute_using_such_that, 0x5BE
.set push_sum, 0x594
.set push_to_cylin, 0x328
.set push_to_sphere, 0x329
.set CertificateMemory, 0x43E
.set ceof, 0x128
.set cfindfield, 0x12A
.set cgetc, 0x12B
.set cgetcertrevno, 0x2A0
.set cgetflen, 0x12D
.set cgetfnl, 0x12E
.set cgetnl, 0x12F
.set cgetns, 0x130
.set cgetsn, 0x2A1
.set copen, 0x132
.set copensub, 0x133
.set cputhdr, 0x134
.set cputnl, 0x135
.set cputns, 0x136
.set cread, 0x137
.set ctell, 0x138
.set cwrite, 0x139
.set Dialog, 0x30
.set DialogAdd, 0x33
.set DialogDo, 0x32
.set DialogNew, 0x34
.set DlgMessage, 0x1B4
.set VarNew, 0x28E
.set VarOpen, 0x28C
.set VarSaveAs, 0x28D
.set ERD_dialog, 0x151
.set ERD_process, 0x152
.set ER_catch, 0x154
.set ER_success, 0x155
.set ER_throwVar, 0x153
.set find_error_message, 0x2C1
.set ARb_int_count, 0x5C3
.set ARb_real_count, 0x5C2
.set GetValue, 0x2CB
.set HToESI, 0x247
.set NG_RPNToText, 0x25B
.set NG_approxESI, 0x25C
.set NG_execute, 0x25D
.set NG_graphESI, 0x25E
.set NG_rationalESI, 0x25F
.set NG_tokenize, 0x260
.set Parms2D, 0x4D
.set Parse1DExpr, 0x4F
.set Parse2DExpr, 0x4A
.set Parse2DMultiExpr, 0x4B
.set Print2DExpr, 0x4C
.set TokenizeSymName, 0x80
.set add1_to_top, 0x51D
.set add_to_top, 0x518
.set all_tail, 0x3B5
.set and_onto_top, 0x579
.set any_tail, 0x3B6
.set are_expressions_identical, 0x2BF
.set bottom_estack, 0x432
.set can_be_approxed, 0x2F5
.set check_estack_size, 0x2C2
.set compare_Floats, 0x2F7
.set compare_complex_magnitudes, 0x2F6
.set compare_expressions, 0x2C0
.set delete_between, 0x2C3
.set delete_expression, 0x2C5
.set deleted_between, 0x2C4
.set deleted_expression, 0x2C6
.set did_push_cnvrt_Float_to_integer, 0x2F8
.set display_statements, 0x4E
.set estack_number_to_Float, 0x2F9
.set estack_to_short, 0x2C7
.set estack_to_ushort, 0x2C8
.set factor_base_index, 0x2C9
.set factor_exponent_index, 0x2CA
.set gcd_exact_whole_Floats, 0x2FC
.set get_key_ptr, 0x2B7
.set im_index, 0x2CC
.set index_below_display_expression_aux, 0x2B6
.set index_main_var, 0x2CF
.set index_numeric_term, 0x2CD
.set index_of_lead_base_of_lead_term, 0x2CE
.set integer_non_unknown, 0x50C
.set is0, 0x269
.set is1, 0x2FD
.set is_Float_exact_whole_number, 0x2FE
.set is_advanced_tag, 0x2D0
.set is_antisymmetric, 0x2D1
.set is_complex0, 0x2D3
.set is_complex_number, 0x2D2
.set is_constant, 0x593
.set is_free_of_tag, 0x2D4
.set is_independent_of, 0x2D5
.set is_independent_of_de_seq_vars, 0x2D6
.set is_independent_of_elements, 0x2D8
.set is_independent_of_tail, 0x2D7
.set is_matrix, 0x3B7
.set is_minus1, 0x508
.set is_monomial, 0x2D9
.set is_monomial_in_kernel, 0x2DA
.set is_narrowly_independent_of, 0x2DB
.set is_negative, 0x575
.set is_never0, 0x577
.set is_nonnegative, 0x574
.set is_nonpositive, 0x576
.set is_polynomial_in_var_or_kern, 0x56B
.set is_positive, 0x573
.set is_square_matrix, 0x3B8
.set is_symmetric, 0x2DC
.set is_tail_independent_of, 0x2DD
.set is_totally_polynomial, 0x56C
.set is_valid_smap_aggregate, 0x3B9
.set is_variable, 0x488
.set is_whole_number, 0x50B
.set last_element_index, 0x3BA
.set lead_base_index, 0x2DE
.set lead_exponent_index, 0x2DF
.set lead_factor_index, 0x2E0
.set lead_term_index, 0x2E1
.set likely_approx_to_complex_number, 0x307
.set likely_approx_to_number, 0x308
.set main_gen_var_index, 0x2E2
.set map_tail, 0x3BB
.set map_tail_Int, 0x3BC
.set map_unary_over_comparison, 0x2E3
.set min_quantum, 0x2E4
.set move_between_to_top, 0x2E5
.set moved_between_to_top, 0x2E6
.set negate_top, 0x525
.set next_expression_index, 0x10A
.set norm1_complex_Float, 0x309
.set numeric_factor_index, 0x2E7
.set push_ANSI_string, 0x48A
.set push_END_TAG, 0x263
.set push_Float, 0x30A
.set push_Float_to_nonneg_int, 0x30B
.set push_Float_to_rat, 0x30C
.set push_LIST_TAG, 0x264
.set push_between, 0x2E8
.set push_cnvrt_integer_if_whole_nmb, 0x30D
.set push_expr2_quantum, 0x2EA
.set push_expr_quantum, 0x2E9
.set push_expression, 0x44D
.set push_internal_simplify, 0x4F8
.set push_long_to_integer, 0x4E3
.set push_next_arb_int, 0x2EB
.set push_next_arb_real, 0x2EC
.set push_next_internal_var, 0x2ED
.set push_offset_array, 0x3C4
.set push_overflow_to_infinity, 0x30E
.set push_parse_text, 0x3CA
.set push_quantum, 0x2EE
.set push_quantum_pair, 0x2EF
.set push_reversed_tail, 0x3BF
.set push_round_Float, 0x310
.set push_simplify, 0x44E
.set push_transpose_aux, 0x3C1
.set push_ulong_to_integer, 0x4E4
.set push_ushort_to_integer, 0x4E5
.set push_zstr, 0x48A
.set re_index, 0x2F2
.set reductum_index, 0x2F0
.set remaining_element_count, 0x3C3
.set remaining_factors_index, 0x2F1
.set reset_control_flags, 0x2F4
.set reset_estack_size, 0x2F3
.set should_and_did_push_approx_arg2, 0x311
.set signum_Float, 0x312
.set subtract1_from_top, 0x51E
.set subtract_from_top, 0x51B
.set top_estack, 0x109
.set ABT_dialog, 0x10D
.set CAT_dialog, 0x125
.set EV_captureEvents, 0xC6
.set EV_centralDispatcher, 0x156
.set EV_clearPasteString, 0xC7
.set EV_defaultHandler, 0x157
.set EV_eventLoop, 0x158
.set EV_getSplitRect, 0xC9
.set EV_getc, 0xC8
.set EV_hook, 0x2A3
.set EV_notifySwitchGraph, 0xCA
.set EV_paintOneWindow, 0xCB
.set EV_paintWindows, 0xCC
.set EV_registerMenu, 0x159
.set EV_restorePainting, 0xCD
.set EV_sendEvent, 0xCE
.set EV_sendEventSide, 0xCF
.set EV_sendString, 0xD0
.set EV_setCmdCheck, 0xD1
.set EV_setCmdState, 0xD2
.set EV_setFKeyState, 0xD3
.set EV_startApp, 0xD4
.set EV_startSide, 0xD5
.set EV_startTask, 0xD6
.set EV_suspendPainting, 0xD7
.set EV_switch, 0xD8
.set MO_currentOptions, 0xD9
.set MO_defaults, 0xDA
.set MO_digestOptions, 0xDB
.set MO_isMultigraphTask, 0xDC
.set MO_modeDialog, 0xDD
.set MO_notifyModeChange, 0xDE
.set MO_option, 0x447
.set MO_sendQuit, 0xDF
.set ModeSettings, 0x447
.set handleRclKey, 0x14F
.set handleVarLinkKey, 0x129
.set FAccess, 0x3D4
.set FClose, 0x3D5
.set FCreate, 0x3D6
.set FDelete, 0x3D7
.set FEof, 0x3D8
.set FFindFirst, 0x3D9
.set FFindNext, 0x3DA
.set FGetC, 0x3DB
.set FGetPos, 0x3DC
.set FGetSize, 0x3DD
.set FOpen, 0x3DE
.set FPutC, 0x3DF
.set FRead, 0x3E0
.set FSetBufSize, 0x3E2
.set FSetPos, 0x3E1
.set FSetSize, 0x3E3
.set FSetVer, 0x3E4
.set FStatus, 0x3E5
.set FType, 0x3E6
.set FWrite, 0x3E7
.set BatTooLowFlash, 0x434
.set EM_GC, 0x160
.set EM_abandon, 0x15B
.set EM_blockVerifyErase, 0x15D
.set EM_findEmptySlot, 0x15F
.set EM_survey, 0x165
.set EM_write, 0x167
.set FL_addCert, 0x169
.set FL_download, 0x16A
.set FL_getCert, 0x16C
.set FL_getHardwareParmBlock, 0x16B
.set FL_getVerNum, 0x16D
.set FL_write, 0x171
.set FlashMemoryEnd, 0x43D
.set GD_Circle, 0x176
.set GD_Contour, 0x17D
.set GD_Eraser, 0x17A
.set GD_HVLine, 0x178
.set GD_Line, 0x177
.set GD_Pen, 0x179
.set GD_Select, 0x17C
.set GD_Text, 0x17B
.set GR3_paint3d, 0x1FF
.set GR3_xyToWindow, 0x200
.set GZ_Box, 0x22B
.set GZ_Center, 0x22C
.set BitmapGet, 0x185
.set BitmapInit, 0x186
.set BitmapPut, 0x187
.set BitmapSize, 0x188
.set CalcBitmapSize, 0x3EF
.set ClientToScr, 0x42C
.set ClrScr, 0x19E
.set DrawChar, 0x1A4
.set DrawClipChar, 0x191
.set DrawClipEllipse, 0x192
.set DrawClipLine, 0x193
.set DrawClipPix, 0x194
.set DrawClipRect, 0x195
.set DrawFkey, 0x1A5
.set DrawIcon, 0x1A6
.set DrawLine, 0x1A7
.set DrawMultiLines, 0x196
.set DrawPix, 0x1A8
.set DrawStr, 0x1A9
.set DrawStrWidth, 0x197
.set DrawStrWidthP, 0x3EE
.set FillLines2, 0x199
.set FillTriangle, 0x198
.set FontCharWidth, 0x190
.set FontGetSys, 0x18E
.set FontSetSys, 0x18F
.set GetPix, 0x19F
.set LineTo, 0x19C
.set MakeScrRect, 0x42D
.set MoveTo, 0x19D
.set PortRestore, 0x1A3
.set PortSet, 0x1A2
.set QScrRectOverlap, 0x18D
.set RestoreScrState, 0x1A1
.set SaveScrState, 0x1A0
.set ScrRect, 0x2F
.set ScrRectFill, 0x189
.set ScrRectOverlap, 0x18A
.set ScrRectScroll, 0x18B
.set ScrRectShift, 0x18C
.set ScrToHome, 0x2E
.set ScrToWin, 0x2D
.set SetCurAttr, 0x19A
.set SetCurClip, 0x19B
.set CkValidDelta, 0x1C3
.set CptDeltax, 0x1C1
.set CptDeltay, 0x1C2
.set StepCk, 0x1DD
.set gdb_len, 0x1E0
.set gdb_recall, 0x1E2
.set gdb_store, 0x1E1
.set gr_active, 0x10B
.set gr_flags, 0x463
.set gr_other, 0x10C
.set rngLen, 0x1DF
.set HS_chopFIFO, 0x23C
.set HS_countFIFO, 0x23D
.set HS_deleteFIFONode, 0x23E
.set HS_freeAll, 0x23F
.set HS_freeFIFONode, 0x240
.set HS_getAns, 0x241
.set HS_getEntry, 0x242
.set HS_getFIFONode, 0x243
.set HS_newFIFONode, 0x245
.set HS_popEStack, 0x244
.set HS_pushFIFONode, 0x246
.set HomeAlone, 0x506
.set HomeExecute, 0x10E
.set HomePushEStack, 0x10F
.set GKeyDown, 0x17F
.set GKeyFlush, 0x180
.set GKeyIn, 0x17E
.set GetAlphaStatus, 0x164
.set KB_AUTOREPEAT, 0x15C
.set KeyYesOrNo, 0x3EB
.set OSFastArrows, 0x15C
.set OSGetStatKeys, 0x299
.set OSInitBetweenKeyDelay, 0x249
.set OSInitKeyInitDelay, 0x248
.set SetAlphaStatus, 0x163
.set alphaLockOff, 0x482
.set alphaLockOn, 0x481
.set kbhit, 0x52
.set ngetchx, 0x51
.set pushkey, 0x50
.set restoreAlphaLock, 0x483
.set LIO_Get, 0x57
.set LIO_GetMultiple, 0x59
.set LIO_Receive, 0x58
.set LIO_RecvData, 0x5B
.set LIO_Send, 0x56
.set LIO_SendData, 0x5A
.set LIO_SendProduct, 0x253
.set OSCheckSilentLink, 0x24A
.set OSLinkClose, 0x24E
.set OSLinkCmd, 0x24B
.set OSLinkOpen, 0x24D
.set OSLinkReset, 0x24C
.set OSLinkTxQueueActive, 0x252
.set OSLinkTxQueueInquire, 0x251
.set OSReadLinkBlock, 0x24F
.set OSWriteLinkBlock, 0x250
.set getcalc, 0x54
.set sendcalc, 0x55
.set _memset, 0x27B
.set memchr, 0x273
.set memcmp, 0x270
.set memcpy, 0x26A
.set memmove, 0x26B
.set memset, 0x27C
.set memucmp, 0x3CC
.set DynMenuAdd, 0x3F1
.set DynMenuChange, 0x3F0
.set FKeyI_H, 0x592
.set MenuAddIcon, 0x42
.set MenuAddText, 0x41
.set MenuBegin, 0x36
.set MenuCheck, 0x37
.set MenuEnd, 0x38
.set MenuFlags, 0x3F4
.set MenuGetTopRedef, 0x40
.set MenuItemDef, 0x3F3
.set MenuKey, 0x39
.set MenuLoad, 0x3F2
.set MenuNew, 0x43
.set MenuOff, 0x419
.set MenuOn, 0x3A
.set MenuPopup, 0x3B
.set MenuSubStat, 0x3C
.set MenuTopRedef, 0x3F
.set MenuTopSelect, 0x3E
.set MenuTopStat, 0x3D
.set MenuUpdate, 0x49
.set PopupAddText, 0x44
.set PopupBegin, 0x3F5
.set PopupBeginDo, 0x3F6
.set PopupClear, 0x46
.set PopupDo, 0x47
.set PopupNew, 0x45
.set PopupText, 0x48
.set QMenuTopSelect, 0x41A
.set VarCreateFolderPopup, 0x28F
.set MD5Done, 0x257
.set BN_power17Mod, 0x122
.set BN_powerMod, 0x123
.set BN_prodMod, 0x124
.set MD5Final, 0x256
.set MD5Init, 0x254
.set MD5Update, 0x255
.set cdecrypt, 0x127
.set longjmp, 0x267
.set setjmp, 0x266
.set ST_angle, 0xE0
.set ST_batt, 0xE1
.set ST_busy, 0xE2
.set ST_eraseHelp, 0xE3
.set ST_folder, 0xE4
.set ST_graph, 0xE5
.set ST_helpMsg, 0xE6
.set ST_modKey, 0xE7
.set ST_precision, 0xE8
.set ST_progressBar, 0x4D8
.set ST_progressDismiss, 0x4DB
.set ST_progressIncrement, 0x4DA
.set ST_progressUpdate, 0x4D9
.set ST_readOnly, 0xE9
.set ST_refDsp, 0xEB
.set ST_stack, 0xEA
.set sprintf, 0x53
.set cmpstri, 0x16F
.set strcat, 0x26E
.set strchr, 0x274
.set strcmp, 0x271
.set strcpy, 0x26C
.set strcspn, 0x275
.set strerror, 0x27D
.set stricmp, 0x407
.set strlen, 0x27E
.set strncat, 0x26F
.set strncmp, 0x272
.set strncpy, 0x26D
.set strpbrk, 0x276
.set strrchr, 0x277
.set strspn, 0x278
.set strstr, 0x279
.set strtok, 0x27A
.set AB_getGateArrayVersion, 0x15E
.set AB_prodid, 0x29D
.set AB_prodname, 0x29E
.set AB_serno, 0x29F
.set CB_fetchTEXT, 0xC2
.set CB_replaceTEXT, 0xC1
.set CU_cursorState, 0x503
.set CU_restore, 0xC3
.set CU_start, 0xC4
.set CU_stop, 0xC5
.set EX_getBasecodeParmBlock, 0x5DA
.set EX_patch, 0x15A
.set FiftyMsecTick, 0x4FC
.set HelpKeys, 0x181
.set NeedStack, 0xA4
.set OSCheckBreak, 0xEC
.set OSClearBreak, 0xED
.set OSContrastDn, 0x297
.set OSContrastUp, 0x296
.set OSDisableBreak, 0xEF
.set OSEnableBreak, 0xEE
.set OSFreeTimer, 0xF1
.set OSRegisterTimer, 0xF0
.set OSReset, 0x294
.set OSSetSR, 0x29C
.set OSTimerCurVal, 0xF2
.set OSTimerExpired, 0xF3
.set OSTimerRestart, 0xF4
.set OSdequeue, 0x3AA
.set OSenqueue, 0x3A9
.set OSqclear, 0x3AD
.set OSqhead, 0x3AC
.set OSqinquire, 0x3AB
.set QModeKey, 0x182
.set QSysKey, 0x183
.set ReleaseDate, 0x43F
.set ReleaseVersion, 0x440
.set SumStoChkMem, 0x295
.set WordInList, 0x184
.set XR_stringPtr, 0x293
.set idle, 0x29B
.set off, 0x29A
.set LOC_formatDate, 0x590
.set LOC_getLocalDateFormat, 0x58F
.set LOC_localVersionDate, 0x591
.set OSOnBreak, 0x46E
.set TE_checkSlack, 0xA6
.set TE_close, 0xA5
.set TE_empty, 0xA7
.set TE_focus, 0xA8
.set TE_handleEvent, 0xA9
.set TE_indicateReadOnly, 0xAA
.set TE_isBlank, 0xAB
.set TE_open, 0xAC
.set TE_openFixed, 0xAD
.set TE_pasteText, 0xAE
.set TE_reopen, 0xAF
.set TE_reopenPlain, 0xB0
.set TE_select, 0xB1
.set TE_shrinkWrap, 0xB2
.set TE_unfocus, 0xB3
.set TE_updateCommand, 0xB4
.set acos, 0xF5
.set acosh, 0x288
.set asin, 0xF6
.set asinh, 0x287
.set atan, 0xF7
.set atan2, 0xF8
.set atanh, 0x289
.set cacos, 0x13A
.set cacosh, 0x13D
.set casin, 0x13B
.set casinh, 0x13E
.set catan, 0x13C
.set catanh, 0x13F
.set ccos, 0x140
.set ccosh, 0x143
.set ceil, 0x105
.set cexp, 0x149
.set cln, 0x147
.set clog10, 0x148
.set cos, 0xF9
.set cosh, 0xFC
.set csin, 0x141
.set csinh, 0x144
.set csqrt, 0x146
.set ctan, 0x142
.set ctanh, 0x145
.set exp, 0xFF
.set fabs, 0x106
.set fadd, 0xB6
.set fcmp, 0xBB
.set fdiv, 0xB9
.set float_class, 0x2FA
.set floor, 0x107
.set flt, 0xBD
.set fmod, 0x108
.set fmul, 0xB8
.set fneg, 0xBA
.set fpisanint, 0x172
.set fpisodd, 0x173
.set frexp10, 0x2FB
.set fsub, 0xB7
.set is_float_infinity, 0x2FF
.set is_float_negative_zero, 0x300
.set is_float_positive_zero, 0x301
.set is_float_signed_infinity, 0x302
.set is_float_transfinite, 0x303
.set is_float_unsigned_inf_or_nan, 0x304
.set is_float_unsigned_zero, 0x305
.set is_inf, 0x2FF
.set is_nan, 0x306
.set is_nzero, 0x300
.set is_pzero, 0x301
.set is_sinf, 0x302
.set is_transfinite, 0x303
.set is_uinf_or_nan, 0x304
.set is_uzero, 0x305
.set itrig, 0x28A
.set log, 0x100
.set log10, 0x101
.set modf, 0x102
.set pow, 0x103
.set round12, 0x174
.set round12_err, 0x227
.set round14, 0x175
.set sin, 0xFA
.set sincos, 0x286
.set sinh, 0xFD
.set sqrt, 0x104
.set tan, 0xFB
.set tanh, 0xFE
.set trig, 0x28B
.set trunc, 0xBC
.set CharNumber, 0x113
.set CheckGraphRef, 0x7D
.set CountGrFunc, 0x1D5
.set CptFuncX, 0x1B9
.set CptIndep, 0x1C9
.set CptLastIndepDE, 0x1EF
.set CreateEmptyList, 0x1E6
.set CustomBegin, 0x14A
.set CustomEnd, 0x14C
.set CustomFree, 0x150
.set CustomMenuItem, 0x14B
.set DataTypeNames, 0x43B
.set EQU_deStatus, 0x16E
.set EQU_getNameInfo, 0x120
.set EQU_select, 0x11E
.set EQU_setStyle, 0x11F
.set ERD_dismissNotice, 0x476
.set ERD_notice, 0x475
.set ER_throwFrame, 0x507
.set EV_appA, 0x452
.set EV_appB, 0x453
.set EV_appSide, 0x458
.set EV_currentApp, 0x45C
.set EV_errorCode, 0x46D
.set EV_flags, 0x5DF
.set EV_quit, 0x48E
.set EV_runningApp, 0x45D
.set FLOATTAB, 0x464
.set FindFunc, 0x1C5
.set FindGrFunc, 0x1C6
.set FirstNonblank, 0x4DE
.set FirstSeqPlot, 0x1D6
.set Float0Index, 0x5D0
.set Float1Index, 0x5D1
.set FloatExp1Index, 0x5D4
.set FloatHalfIndex, 0x5E0
.set FloatMinus1Index, 0x5D2
.set FloatPiIndex, 0x5D3
.set ForceFloat, 0x47D
.set FuncLineFlt, 0x1BF
.set GM_Derivative, 0x1B0
.set GM_DistArc, 0x1B1
.set GM_Inflection, 0x1AD
.set GM_Integrate, 0x1AC
.set GM_Intersect, 0x1AB
.set GM_Math1, 0x1AF
.set GM_Shade, 0x1B2
.set GM_TanLine, 0x1AE
.set GM_Value, 0x1AA
.set GR3_addContours, 0x1FB
.set GR3_freeDB, 0x1FD
.set GR3_handleEvent, 0x1FE
.set GR_Pan, 0x1C4
.set GS_PlotAll, 0x202
.set GS_PlotTrace, 0x201
.set GT_BackupToScr, 0x20C
.set GT_CalcDepVals, 0x20D
.set GT_CenterGraphCursor, 0x20E
.set GT_CursorKey, 0x20F
.set GT_DE_Init_Conds, 0x22A
.set GT_DspFreeTraceCoords, 0x210
.set GT_DspMsg, 0x212
.set GT_DspTraceCoords, 0x211
.set GT_Error, 0x213
.set GT_Format, 0x214
.set GT_FreeTrace, 0x215
.set GT_IncXY, 0x216
.set GT_KeyIn, 0x217
.set GT_Open, 0x21B
.set GT_PrintCursor, 0x229
.set GT_QFloatCursorsInRange, 0x218
.set GT_Regraph, 0x219
.set GT_Regraph_if_neccy, 0x21A
.set GT_SaveAs, 0x21C
.set GT_SelFunc, 0x21D
.set GT_SetCursorXY, 0x21F
.set GT_SetGraphRange, 0x21E
.set GT_Set_Graph_Format, 0x228
.set GT_ShowMarkers, 0x220
.set GT_Trace, 0x221
.set GT_ValidGraphRanges, 0x222
.set GT_WinBound, 0x223
.set GT_WinCursor, 0x224
.set GXcoord, 0x226
.set GYcoord, 0x225
.set GZ_Decimal, 0x22D
.set GZ_Fit, 0x22E
.set GZ_InOut, 0x22F
.set GZ_Integer, 0x230
.set GZ_Previous, 0x231
.set GZ_Recall, 0x232
.set GZ_SetFactors, 0x233
.set GZ_Square, 0x234
.set GZ_Standard, 0x235
.set GZ_Stat, 0x236
.set GZ_Store, 0x237
.set GZ_Trig, 0x238
.set GetStatValue, 0x11B
.set GetSysGraphRef, 0x8A
.set GetTagStr, 0x46C
.set GrAxes, 0x1B7
.set GrClipLine, 0x1C0
.set GrLineFlt, 0x1BE
.set GraphActivate, 0x1FC
.set GraphOrTableCmd, 0x1E4
.set IM_re_tol, 0x5C1
.set InitDEAxesRng, 0x1E9
.set InitDEMem, 0x1EA
.set InitTimeSeq, 0x1D9
.set Integer0Index, 0x5CD
.set Integer1Index, 0x5CE
.set Integer2Index, 0x5E1
.set IntegerMinus1Index, 0x5CF
.set LIO_SendIdList, 0x3D0
.set LoadSymFromFindHandle, 0x281
.set NG_cleanup_graph_fun, 0x262
.set NG_control, 0x466
.set NG_setup_graph_fun, 0x261
.set NG_such_that_index, 0x5D7
.set OO_AppNameToACB, 0x406
.set OO_CondGetAttr, 0x3FA
.set OO_Deref, 0x3FB
.set OO_Destroy, 0x423
.set OO_DestroyAll, 0x4F5
.set OO_GetAppAttr, 0x3FC
.set OO_GetAttr, 0x3FD
.set OO_HasAttr, 0x3FE
.set OO_InstallAppHook, 0x490
.set OO_InstallAppHookByName, 0x492
.set OO_InstallSystemHook, 0x404
.set OO_New, 0x3FF
.set OO_NextACB, 0x402
.set OO_PrevACB, 0x403
.set OO_SetAppAttr, 0x400
.set OO_SetAttr, 0x401
.set OO_SuperFrame, 0x48F
.set OO_UninstallAppHook, 0x491
.set OO_UninstallAppHookByName, 0x493
.set OO_UninstallSystemHook, 0x405
.set OO_appGetPublicStorage, 0x425
.set OO_appIsMarkedDelete, 0x426
.set OO_appMarkDelete, 0x427
.set OO_appSetPublicStorage, 0x429
.set OO_firstACB, 0x451
.set OSCheckLinkOpen, 0x5E3
.set OSKeyScan, 0x298
.set OSModKeyStatus, 0x431
.set ParseSymName, 0x78
.set PlotDel, 0x203
.set PlotDup, 0x207
.set PlotGet, 0x205
.set PlotInit, 0x206
.set PlotLookup, 0x209
.set PlotPut, 0x204
.set PlotSize, 0x208
.set QActivePlots, 0x20A
.set QPlotActive, 0x20B
.set QSkipGraphErr, 0x1E7
.set QstatRcl, 0x40B
.set RAtionalize_tol, 0x5C0
.set RM_Type, 0x5DC
.set ReallocExprStruct, 0x14D
.set Regraph, 0x1B6
.set SP_Define, 0x110
.set ST_flags, 0x443
.set ScrRectDivide, 0x28
.set SearchExprStruct, 0x14E
.set SetGraphMode, 0x1B5
.set TIOS_EV_getAppID, 0x454
.set TIOS_abs, 0x5BA
.set TIOS_div, 0x5BB
.set TIOS_labs, 0x5BC
.set TIOS_ldiv, 0x5BD
.set TIOS_strtol, 0x4FF
.set TokenizeName, 0x3E9
.set UpdateWindows, 0x2B
.set ValidateStore, 0x8D
.set VarGraphRefBitsClear, 0x268
.set VarOptList, 0x444
.set VarSaveTitle, 0x290
.set VarStoreLink, 0x87
.set XCvtFtoP, 0x1BD
.set XCvtPtoF, 0x1BA
.set YCvtFtoP, 0x1BC
.set YCvtFtoWin, 0x1B3
.set YCvtPtoF, 0x1BB
.set _bcd_math, 0xB5
.set _ds16u16, 0x2A4
.set _ds32s32, 0x2A8
.set _du16u16, 0x2A6
.set _du32u32, 0x2AA
.set _ms16u16, 0x2A5
.set _ms32s32, 0x2A9
.set _mu16u16, 0x2A7
.set _mu32u32, 0x2AB
.set are_units_consistent, 0x40F
.set assign_between, 0x2AC
.set ck_valid_float, 0x1E5
.set cleanup_de_mem, 0x1EC
.set cleanup_seq_mem, 0x1D7
.set clear_error_context, 0x44C
.set compare_numbers, 0x50D
.set convert_to_TI_92, 0x258
.set cpt_gr_fun, 0x1D1
.set cpt_gr_param, 0x1D2
.set cpt_gr_polar, 0x1D3
.set deStepCk, 0x1F9
.set de_initRes, 0x1F0
.set de_loop, 0x1EB
.set de_rng_no_graph, 0x2A2
.set delete_list_element, 0x2AF
.set did_map_aggregate_arg, 0x5B8
.set did_push_approx_inflection_point, 0x5B0
.set did_push_divide_units, 0x3AE
.set did_push_lincf, 0x572
.set did_push_var_val, 0x2AD
.set divide_top, 0x527
.set does_push_fetch, 0x2AE
.set dv_create_graph_titles, 0x117
.set dv_findColumn, 0x119
.set errno, 0x5D9
.set estack_max_index, 0x5BF
.set estack_to_float, 0x469
.set execute_graph_func, 0x1D0
.set fix_loop_displacements, 0x170
.set freeIdList, 0x4D6
.set gen_version, 0x259
.set get_lb, 0x516
.set get_list_indices, 0x2B8
.set get_matrix_indices, 0x2B9
.set get_ub, 0x517
.set grFuncName, 0x1C7
.set gr_CptIndepInc, 0x1CA
.set gr_DelFolder, 0x1CC
.set gr_DispLabels, 0x1E3
.set gr_add_fldpic, 0x1F6
.set gr_ck_solvergraph, 0x1FA
.set gr_de_axes_lbl, 0x1F2
.set gr_de_value, 0x1ED
.set gr_del_locals, 0x1CB
.set gr_del_vars_in_folder, 0x1F1
.set gr_delete_fldpic, 0x1F4
.set gr_execute_de, 0x1F3
.set gr_execute_seq, 0x1D4
.set gr_find_de_result, 0x1E8
.set gr_find_el, 0x1F8
.set gr_find_func_index, 0x1EE
.set gr_initCondName, 0x1C8
.set gr_openFolder, 0x1CD
.set gr_remove_fldpic, 0x1F5
.set gr_seq_value, 0x1DC
.set gr_stopic, 0x1F7
.set gr_xres_pixel, 0x1B8
.set hStrAppend, 0x45F
.set has_different_variable, 0x5A0
.set has_unit_base, 0x3AF
.set index_after_match_endtag, 0x2B1
.set index_false, 0x5D6
.set index_if_pushed_binomial_info, 0x5A1
.set index_if_pushed_qquad_info, 0x5A2
.set index_reductum_with_tag_base, 0x59F
.set index_rmng_factor, 0x565
.set index_rmng_fctrs_start_base, 0x564
.set index_rmng_fctrs_start_base_tag, 0x563
.set index_rmng_fctrs_start_fctr_tag, 0x562
.set index_true, 0x5D5
.set init_list_indices, 0x2BA
.set init_matrix_indices, 0x2BB
.set init_unit_system, 0x3B0
.set is_cFloat_agg, 0x465
.set is_complex_Float, 0x48B
.set is_equivalent_to, 0x578
.set is_executable, 0x25A
.set is_neg_lead_numr_coef_re_part, 0x56D
.set is_pathname, 0x3C6
.set is_pos_int_and_eq_quantum, 0x509
.set is_real, 0x5A9
.set is_reciprocal_of_quantum, 0x50A
.set is_term_improper, 0x556
.set is_undefined, 0x5B7
.set is_units_term, 0x3B1
.set lead_conjunct_factor_index, 0x580
.set lead_disjunct_term_index, 0x57E
.set linear_degree, 0x571
.set next_token, 0x3C7
.set next_var_or_kernel_index, 0x56E
.set nonblank, 0x3C8
.set or_onto_top, 0x57B
.set pSymPG, 0x430
.set paint_all_except, 0x11D
.set primary_tag_list, 0x467
.set push0, 0x4E7
.set push1, 0x4E8
.set push_ans_entry, 0x2B0
.set push_auto_units_conversion, 0x3B2
.set push_but_conjunct_factor, 0x582
.set push_but_factor, 0x561
.set push_but_term, 0x56A
.set push_constant_factors, 0x55D
.set push_constant_terms, 0x566
.set push_dependent_factors, 0x55F
.set push_dependent_terms, 0x568
.set push_float_qr_fact, 0x2BC
.set push_format, 0x315
.set push_gcd_then_cofactors, 0x59E
.set push_independent_factors, 0x560
.set push_independent_terms, 0x569
.set push_lu_fact, 0x2BD
.set push_make_proper, 0x557
.set push_minus_recip_of_quantum, 0x510
.set push_mrow_aux, 0x31B
.set push_negate_quantum_as_negint, 0x4F1
.set push_nonconstant_factors, 0x55E
.set push_nonconstant_terms, 0x567
.set push_nonnumeric_factors, 0x55C
.set push_parse_prgm_or_func_text, 0x3C9
.set push_pi, 0x512
.set push_pi_on_quantum, 0x513
.set push_poly_deg_in_var_or_kernel, 0x570
.set push_poly_qr, 0x59D
.set push_quantum_as_nonnegative_int, 0x50E
.set push_quantum_pair_as_pos_frac, 0x511
.set push_reciprocal, 0x597
.set push_reciprocal_of_quantum, 0x50F
.set push_simplify_statements, 0x44F
.set push_sq_matrix_to_whole_number, 0x3C0
.set push_standardize, 0x558
.set push_symbolic_qr_fact, 0x2BE
.set push_trig, 0x535
.set push_unit_system_list, 0x3B3
.set push_user_func, 0x2B3
.set push_var, 0x3CB
.set push_var_kern_tail, 0x56F
.set push_zero_partial_column, 0x3C2
.set raise_to_top, 0x529
.set recall_data_var, 0x112
.set remaining_conjuncts_index, 0x581
.set remaining_disjuncts_index, 0x57F
.set replace_top2_with_and, 0x57A
.set replace_top2_with_difference, 0x51C
.set replace_top2_with_imre, 0x559
.set replace_top2_with_or, 0x57C
.set replace_top2_with_pow, 0x52A
.set replace_top2_with_prod, 0x523
.set replace_top2_with_ratio, 0x528
.set replace_top2_with_sum, 0x519
.set replace_top_with_post_simplified, 0x5B6
.set replace_top_with_reciprocal, 0x52D
.set run_one_seq, 0x1DB
.set seqStepCk, 0x1DE
.set seqWebInit, 0x1DA
.set setup_more_graph_fun, 0x1CE
.set setup_unit_system, 0x3B4
.set sf_width, 0x4D3
.set spike_chk_gr_dirty, 0x11A
.set spike_geo_titles, 0x115
.set spike_in_editor, 0x116
.set spike_optionD, 0x114
.set spike_titles_in_editor, 0x118
.set statEnd, 0x409
.set statFree, 0x40A
.set statStart, 0x408
.set store_data_var, 0x111
.set store_func_def, 0x2B4
.set store_to_subscripted_element, 0x2B5
.set time_loop, 0x1D8
.set times_top, 0x522
.set tokenize_if_TI_92_or_text, 0x265
.set unlock_more_graph_fun, 0x1CF
.set AddSymToFolder, 0x70
.set CheckLinkLockFlag, 0x7F
.set CheckReservedName, 0x8B
.set CheckSysFunc, 0x89
.set ClearUserDef, 0x7E
.set DerefSym, 0x79
.set EM_moveSymFromExtMem, 0x161
.set EM_moveSymToExtMem, 0x162
.set EM_twinSymFromExtMem, 0x166
.set EX_stoBCD, 0xC0
.set FindSymInFolder, 0x71
.set FolderAdd, 0x64
.set FolderAddTemp, 0x73
.set FolderClear, 0x66
.set FolderCount, 0x6B
.set FolderCur, 0x65
.set FolderCurTemp, 0x72
.set FolderDel, 0x66
.set FolderDelAllTemp, 0x75
.set FolderDelTemp, 0x74
.set FolderFind, 0x67
.set FolderGetCur, 0x68
.set FolderOp, 0x69
.set FolderRename, 0x6A
.set GetDataType, 0x435
.set GetFuncPrgmBodyPtr, 0x43A
.set HSYMtoName, 0x7A
.set HSymDel, 0x5F
.set IsMainFolderStr, 0x77
.set MakeHSym, 0x282
.set QSysProtected, 0x88
.set ResetSymFlags, 0x8E
.set SetOK, 0x456
.set SmapTypeStrings, 0x436
.set StrToTokN, 0x7B
.set SymAdd, 0x5C
.set SymAddMain, 0x5D
.set SymAddTwin, 0x27F
.set SymCmp, 0x81
.set SymCpy, 0x82
.set SymCpy0, 0x83
.set SymDel, 0x5E
.set SymDelTwin, 0x280
.set SymFind, 0x60
.set SymFindFirst, 0x6C
.set SymFindFolderName, 0x6F
.set SymFindHome, 0x62
.set SymFindMain, 0x61
.set SymFindNext, 0x6D
.set SymFindPrev, 0x6E
.set SymFindPtr, 0x283
.set SymMove, 0x63
.set SymSysVar, 0x8C
.set TempFolderName, 0x76
.set TokToStrN, 0x7C
.set ValidateSymName, 0x84
.set VarRecall, 0x85
.set VarStore, 0x86
.set checkCurrent, 0x121
.set partial_len, 0x11C
.set DrawStaticButton, 0x35
.set DrawWinBorder, 0x27
.set FirstWindow, 0x0
.set MakeWinRect, 0x2C
.set RectWinToScr, 0x2A
.set RectWinToWin, 0x29
.set SetWinClip, 0x42E
.set WinActivate, 0x1
.set WinAttr, 0x2
.set WinBackground, 0x4
.set WinBackupToScr, 0x3
.set WinBegin, 0x5
.set WinBitmapGet, 0x6
.set WinBitmapPut, 0x7
.set WinBitmapSize, 0x8
.set WinChar, 0xA
.set WinCharXY, 0x9
.set WinClose, 0xB
.set WinClr, 0xC
.set WinDeactivate, 0xD
.set WinDupStat, 0xE
.set WinEllipse, 0xF
.set WinFill, 0x10
.set WinFillLines2, 0x11
.set WinFillTriangle, 0x12
.set WinFont, 0x13
.set WinGetCursor, 0x14
.set WinHeight, 0x292
.set WinHide, 0x15
.set WinHome, 0x16
.set WinLine, 0x17
.set WinLineNC, 0x18
.set WinLineRel, 0x1A
.set WinLineTo, 0x19
.set WinMoveCursor, 0x1B
.set WinMoveRel, 0x1D
.set WinMoveTo, 0x1C
.set WinOpen, 0x1E
.set WinPixGet, 0x1F
.set WinPixSet, 0x20
.set WinReOpen, 0x22
.set WinRect, 0x21
.set WinScrollH, 0x23
.set WinScrollV, 0x24
.set WinStr, 0x25
.set WinStrXY, 0x26
.set WinWidth, 0x291
.set BitmapSizeExt, 0x3ED
.set RectWinToScrExt, 0x415
.set WinBeginPaint, 0x500
.set WinBitmapSizeExt, 0x411
.set WinEndPaint, 0x501
.set WinLineExt, 0x47C
.set WinRemove, 0x414
.set WinStrXYWrap, 0x5DB
.set WinToScr, 0x42F
.set NoCallBack, 0x31
.set caddcert, 0x126
.set cgetvernum, 0x131
.set EM_writeToExtMem, 0x168
.set OSVRegisterTimer, 0x284
.set OSVFreeTimer, 0x285

.set ScreenClear, 0x19e
.set bcdadd, 0xb6
.set bcdcmp, 0xbb
.set bcddiv, 0xb9
.set bcdbcd, 0xbd
.set bcdmul, 0xb8
.set bcdneg, 0xba
.set bcdsub, 0xb7
.set bcdlong, 0xbc

.set ST_showHelp, 0xE6
.set DrawTo, 0x19C
.set flush_link, 0x24D
.set receive, 0x24F
.set reset_link, 0x24C
.set transmit, 0x250
.set tx_free, 0x252

.set SymFindFoldername, 0x6F
.set MakeHsym, 0x282

.set LCD_MEM, 0x4c00
.set ACTIVITY_IDLE, 0
.set ACTIVITY_BUSY, 1
.set ACTIVITY_PAUSED, 2
.set ER_STOP, 2
.set ER_DIMENSION, 230
.set ER_MEMORY, 670
.set ER_MEMORY_DML, 810
.set UNDEFINED_TAG, 0x2a
.set LIST_TAG, 0xd9
.set MATRIX_TAG, 0xdb
.set END_TAG, 0xe5
.set CALC_TI89, 0
.set CALC_TI92PLUS, 1
