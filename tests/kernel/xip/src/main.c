/*
 * Copyright (c) 2017 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <ztest.h>
extern void test_xip(void);

/**test case main entry*/
void test_main(void)
{
	ztest_test_suite(test_xip_fn,
		ztest_unit_test(test_xip));
	ztest_run_test_suite(test_xip_fn);
}
