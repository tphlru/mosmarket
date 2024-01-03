/* Generated code for Python module 'httpx$_api'
 * created by Nuitka version 1.9.5
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_httpx$_api" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_api;
PyDictObject *moduledict_httpx$_api;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[94];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[94];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("httpx._api"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 94; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_httpx$_api(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 94; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_2934964d3c91829671a58654f60796b6;
static PyCodeObject *codeobj_e65ff5f9823135e14ca2ea2baee79368;
static PyCodeObject *codeobj_2f9dc03ade1d8ecdb5abcf34a3f13871;
static PyCodeObject *codeobj_af6ed8a0c012cd6dc9e46afabcb69b37;
static PyCodeObject *codeobj_eaecb586e338f36a7ab6008f892e8ff4;
static PyCodeObject *codeobj_b9148fca82506b7fc20ce3829c4e7367;
static PyCodeObject *codeobj_0c5f8854bba98c75213581c480d3ffe3;
static PyCodeObject *codeobj_74db8d6734a599297a740674512ee715;
static PyCodeObject *codeobj_37fa669f58cbde1d28f5c7ea0d233ac2;
static PyCodeObject *codeobj_5c712579dc280b320117766ac7092736;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[87]); CHECK_OBJECT(module_filename_obj);
    codeobj_2934964d3c91829671a58654f60796b6 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[88], mod_consts[88], NULL, NULL, 0, 0, 0);
    codeobj_e65ff5f9823135e14ca2ea2baee79368 = MAKE_CODE_OBJECT(module_filename_obj, 410, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[89], NULL, 1, 10, 0);
    codeobj_2f9dc03ade1d8ecdb5abcf34a3f13871 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[89], NULL, 1, 10, 0);
    codeobj_af6ed8a0c012cd6dc9e46afabcb69b37 = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[89], NULL, 1, 10, 0);
    codeobj_eaecb586e338f36a7ab6008f892e8ff4 = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[89], NULL, 1, 10, 0);
    codeobj_b9148fca82506b7fc20ce3829c4e7367 = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[90], NULL, 1, 14, 0);
    codeobj_0c5f8854bba98c75213581c480d3ffe3 = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[90], NULL, 1, 14, 0);
    codeobj_74db8d6734a599297a740674512ee715 = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[84], mod_consts[90], NULL, 1, 14, 0);
    codeobj_37fa669f58cbde1d28f5c7ea0d233ac2 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[91], NULL, 2, 14, 0);
    codeobj_5c712579dc280b320117766ac7092736 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[92], NULL, 2, 14, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpx$_api$$$function__2_stream$$$genobj__1_stream(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__1_request(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__2_stream(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__3_get(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__4_options(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__5_head(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__6_post(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__7_put(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__8_patch(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__9_delete(PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpx$_api$$$function__1_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_method = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_params = python_pars[2];
    PyObject *par_content = python_pars[3];
    PyObject *par_data = python_pars[4];
    PyObject *par_files = python_pars[5];
    PyObject *par_json = python_pars[6];
    PyObject *par_headers = python_pars[7];
    PyObject *par_cookies = python_pars[8];
    PyObject *par_auth = python_pars[9];
    PyObject *par_proxies = python_pars[10];
    PyObject *par_timeout = python_pars[11];
    PyObject *par_follow_redirects = python_pars[12];
    PyObject *par_verify = python_pars[13];
    PyObject *par_cert = python_pars[14];
    PyObject *par_trust_env = python_pars[15];
    PyObject *var_client = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_37fa669f58cbde1d28f5c7ea0d233ac2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_37fa669f58cbde1d28f5c7ea0d233ac2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_37fa669f58cbde1d28f5c7ea0d233ac2)) {
        Py_XDECREF(cache_frame_37fa669f58cbde1d28f5c7ea0d233ac2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_37fa669f58cbde1d28f5c7ea0d233ac2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_37fa669f58cbde1d28f5c7ea0d233ac2 = MAKE_FUNCTION_FRAME(tstate, codeobj_37fa669f58cbde1d28f5c7ea0d233ac2, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_37fa669f58cbde1d28f5c7ea0d233ac2->m_type_description == NULL);
    frame_37fa669f58cbde1d28f5c7ea0d233ac2 = cache_frame_37fa669f58cbde1d28f5c7ea0d233ac2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_37fa669f58cbde1d28f5c7ea0d233ac2);
    assert(Py_REFCNT(frame_37fa669f58cbde1d28f5c7ea0d233ac2) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_cookies);
        tmp_kw_call_value_0_1 = par_cookies;
        CHECK_OBJECT(par_proxies);
        tmp_kw_call_value_1_1 = par_proxies;
        CHECK_OBJECT(par_cert);
        tmp_kw_call_value_2_1 = par_cert;
        CHECK_OBJECT(par_verify);
        tmp_kw_call_value_3_1 = par_verify;
        CHECK_OBJECT(par_timeout);
        tmp_kw_call_value_4_1 = par_timeout;
        CHECK_OBJECT(par_trust_env);
        tmp_kw_call_value_5_1 = par_trust_env;
        frame_37fa669f58cbde1d28f5c7ea0d233ac2->m_frame.f_lineno = 92;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[1]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_37fa669f58cbde1d28f5c7ea0d233ac2->m_frame.f_lineno = 92;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_5 = tmp_with_1__enter;
        assert(var_client == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_client = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        PyObject *tmp_kw_call_value_5_2;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_kw_call_value_9_1;
        CHECK_OBJECT(var_client);
        tmp_expression_value_3 = var_client;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[4]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_method);
        tmp_kw_call_value_0_2 = par_method;
        CHECK_OBJECT(par_url);
        tmp_kw_call_value_1_2 = par_url;
        CHECK_OBJECT(par_content);
        tmp_kw_call_value_2_2 = par_content;
        CHECK_OBJECT(par_data);
        tmp_kw_call_value_3_2 = par_data;
        CHECK_OBJECT(par_files);
        tmp_kw_call_value_4_2 = par_files;
        CHECK_OBJECT(par_json);
        tmp_kw_call_value_5_2 = par_json;
        CHECK_OBJECT(par_params);
        tmp_kw_call_value_6_1 = par_params;
        CHECK_OBJECT(par_headers);
        tmp_kw_call_value_7_1 = par_headers;
        CHECK_OBJECT(par_auth);
        tmp_kw_call_value_8_1 = par_auth;
        CHECK_OBJECT(par_follow_redirects);
        tmp_kw_call_value_9_1 = par_follow_redirects;
        frame_37fa669f58cbde1d28f5c7ea0d233ac2->m_frame.f_lineno = 100;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[5]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_37fa669f58cbde1d28f5c7ea0d233ac2, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_37fa669f58cbde1d28f5c7ea0d233ac2, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_3 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_37fa669f58cbde1d28f5c7ea0d233ac2->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 92;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_37fa669f58cbde1d28f5c7ea0d233ac2->m_frame) frame_37fa669f58cbde1d28f5c7ea0d233ac2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 92;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_37fa669f58cbde1d28f5c7ea0d233ac2->m_frame) frame_37fa669f58cbde1d28f5c7ea0d233ac2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_37fa669f58cbde1d28f5c7ea0d233ac2->m_frame.f_lineno = 92;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_5, mod_consts[6]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_37fa669f58cbde1d28f5c7ea0d233ac2->m_frame.f_lineno = 92;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_6, mod_consts[6]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_37fa669f58cbde1d28f5c7ea0d233ac2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_37fa669f58cbde1d28f5c7ea0d233ac2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_37fa669f58cbde1d28f5c7ea0d233ac2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_37fa669f58cbde1d28f5c7ea0d233ac2,
        type_description_1,
        par_method,
        par_url,
        par_params,
        par_content,
        par_data,
        par_files,
        par_json,
        par_headers,
        par_cookies,
        par_auth,
        par_proxies,
        par_timeout,
        par_follow_redirects,
        par_verify,
        par_cert,
        par_trust_env,
        var_client
    );


    // Release cached frame if used for exception.
    if (frame_37fa669f58cbde1d28f5c7ea0d233ac2 == cache_frame_37fa669f58cbde1d28f5c7ea0d233ac2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_37fa669f58cbde1d28f5c7ea0d233ac2);
        cache_frame_37fa669f58cbde1d28f5c7ea0d233ac2 = NULL;
    }

    assertFrameObject(frame_37fa669f58cbde1d28f5c7ea0d233ac2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_client);
    Py_DECREF(var_client);
    var_client = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_client);
    var_client = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    CHECK_OBJECT(par_json);
    Py_DECREF(par_json);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    CHECK_OBJECT(par_json);
    Py_DECREF(par_json);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__2_stream(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_method = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_url = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_params = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_content = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_files = Nuitka_Cell_New1(python_pars[5]);
    struct Nuitka_CellObject *par_json = Nuitka_Cell_New1(python_pars[6]);
    struct Nuitka_CellObject *par_headers = Nuitka_Cell_New1(python_pars[7]);
    struct Nuitka_CellObject *par_cookies = Nuitka_Cell_New1(python_pars[8]);
    struct Nuitka_CellObject *par_auth = Nuitka_Cell_New1(python_pars[9]);
    struct Nuitka_CellObject *par_proxies = Nuitka_Cell_New1(python_pars[10]);
    struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[11]);
    struct Nuitka_CellObject *par_follow_redirects = Nuitka_Cell_New1(python_pars[12]);
    struct Nuitka_CellObject *par_verify = Nuitka_Cell_New1(python_pars[13]);
    struct Nuitka_CellObject *par_cert = Nuitka_Cell_New1(python_pars[14]);
    struct Nuitka_CellObject *par_trust_env = Nuitka_Cell_New1(python_pars[15]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[16];

        tmp_closure_1[0] = par_auth;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_cert;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_content;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_cookies;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_data;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_files;
        Py_INCREF(tmp_closure_1[5]);
        tmp_closure_1[6] = par_follow_redirects;
        Py_INCREF(tmp_closure_1[6]);
        tmp_closure_1[7] = par_headers;
        Py_INCREF(tmp_closure_1[7]);
        tmp_closure_1[8] = par_json;
        Py_INCREF(tmp_closure_1[8]);
        tmp_closure_1[9] = par_method;
        Py_INCREF(tmp_closure_1[9]);
        tmp_closure_1[10] = par_params;
        Py_INCREF(tmp_closure_1[10]);
        tmp_closure_1[11] = par_proxies;
        Py_INCREF(tmp_closure_1[11]);
        tmp_closure_1[12] = par_timeout;
        Py_INCREF(tmp_closure_1[12]);
        tmp_closure_1[13] = par_trust_env;
        Py_INCREF(tmp_closure_1[13]);
        tmp_closure_1[14] = par_url;
        Py_INCREF(tmp_closure_1[14]);
        tmp_closure_1[15] = par_verify;
        Py_INCREF(tmp_closure_1[15]);

        tmp_return_value = MAKE_GENERATOR_httpx$_api$$$function__2_stream$$$genobj__1_stream(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    CHECK_OBJECT(par_json);
    Py_DECREF(par_json);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpx$_api$$$function__2_stream$$$genobj__1_stream_locals {
    PyObject *var_client;
    PyObject *var_response;
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
    PyObject *tmp_with_2__enter;
    PyObject *tmp_with_2__exit;
    nuitka_bool tmp_with_2__indicator;
    PyObject *tmp_with_2__source;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
};
#endif

static PyObject *httpx$_api$$$function__2_stream$$$genobj__1_stream_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpx$_api$$$function__2_stream$$$genobj__1_stream_locals *generator_heap = (struct httpx$_api$$$function__2_stream$$$genobj__1_stream_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_client = NULL;
    generator_heap->var_response = NULL;
    generator_heap->tmp_with_1__enter = NULL;
    generator_heap->tmp_with_1__exit = NULL;
    generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    generator_heap->tmp_with_1__source = NULL;
    generator_heap->tmp_with_2__enter = NULL;
    generator_heap->tmp_with_2__exit = NULL;
    generator_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    generator_heap->tmp_with_2__source = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_5c712579dc280b320117766ac7092736, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[9]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 145;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_0_1 = Nuitka_Cell_GET(generator->m_closure[3]);
        if (Nuitka_Cell_GET(generator->m_closure[11]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 146;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_1_1 = Nuitka_Cell_GET(generator->m_closure[11]);
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[11]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 147;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_2_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        if (Nuitka_Cell_GET(generator->m_closure[15]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 148;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_3_1 = Nuitka_Cell_GET(generator->m_closure[15]);
        if (Nuitka_Cell_GET(generator->m_closure[12]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[13]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_4_1 = Nuitka_Cell_GET(generator->m_closure[12]);
        if (Nuitka_Cell_GET(generator->m_closure[13]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[14]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 150;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_5_1 = Nuitka_Cell_GET(generator->m_closure[13]);
        generator->m_frame->m_frame.f_lineno = 144;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[1]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_2__source == NULL);
        generator_heap->tmp_with_2__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(generator_heap->tmp_with_2__source);
        tmp_expression_value_1 = generator_heap->tmp_with_2__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 144;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_2__enter == NULL);
        generator_heap->tmp_with_2__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(generator_heap->tmp_with_2__source);
        tmp_expression_value_2 = generator_heap->tmp_with_2__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_2__exit == NULL);
        generator_heap->tmp_with_2__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        generator_heap->tmp_with_2__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_with_2__enter);
        tmp_assign_source_5 = generator_heap->tmp_with_2__enter;
        assert(generator_heap->var_client == NULL);
        Py_INCREF(tmp_assign_source_5);
        generator_heap->var_client = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        PyObject *tmp_kw_call_value_5_2;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_kw_call_value_9_1;
        CHECK_OBJECT(generator_heap->var_client);
        tmp_expression_value_3 = generator_heap->var_client;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[15]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }
        if (Nuitka_Cell_GET(generator->m_closure[9]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[16]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 153;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }

        tmp_kw_call_value_0_2 = Nuitka_Cell_GET(generator->m_closure[9]);
        if (Nuitka_Cell_GET(generator->m_closure[14]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[17]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }

        tmp_kw_call_value_1_2 = Nuitka_Cell_GET(generator->m_closure[14]);
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[18]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }

        tmp_kw_call_value_2_2 = Nuitka_Cell_GET(generator->m_closure[2]);
        if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }

        tmp_kw_call_value_3_2 = Nuitka_Cell_GET(generator->m_closure[4]);
        if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }

        tmp_kw_call_value_4_2 = Nuitka_Cell_GET(generator->m_closure[5]);
        if (Nuitka_Cell_GET(generator->m_closure[8]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[21]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 158;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }

        tmp_kw_call_value_5_2 = Nuitka_Cell_GET(generator->m_closure[8]);
        if (Nuitka_Cell_GET(generator->m_closure[10]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[22]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }

        tmp_kw_call_value_6_1 = Nuitka_Cell_GET(generator->m_closure[10]);
        if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[23]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 160;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }

        tmp_kw_call_value_7_1 = Nuitka_Cell_GET(generator->m_closure[7]);
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[24]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 161;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }

        tmp_kw_call_value_8_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[25]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }

        tmp_kw_call_value_9_1 = Nuitka_Cell_GET(generator->m_closure[6]);
        generator->m_frame->m_frame.f_lineno = 152;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1};

            tmp_assign_source_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[5]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_with_1__source == NULL);
        generator_heap->tmp_with_1__source = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_4 = generator_heap->tmp_with_1__source;
        tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, mod_consts[2]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }
        generator->m_frame->m_frame.f_lineno = 152;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_with_1__enter == NULL);
        generator_heap->tmp_with_1__enter = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_5 = generator_heap->tmp_with_1__source;
        tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, mod_consts[3]);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_with_1__exit == NULL);
        generator_heap->tmp_with_1__exit = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_TRUE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(generator_heap->tmp_with_1__enter);
        tmp_assign_source_10 = generator_heap->tmp_with_1__enter;
        assert(generator_heap->var_response == NULL);
        Py_INCREF(tmp_assign_source_10);
        generator_heap->var_response = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_expression_value_6;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_response);
        tmp_expression_value_6 = generator_heap->var_response;
        Py_INCREF(tmp_expression_value_6);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_6;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_7;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_FALSE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_5 = generator_heap->tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_3 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        generator->m_frame->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_8;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_8;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 152;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccccccccccccccccoo";
    goto try_except_handler_8;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 152;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccccccccccccccccoo";
    goto try_except_handler_8;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_6;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_6 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 152;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_6, mod_consts[6]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

            Py_DECREF(generator_heap->exception_keeper_type_3);
            Py_XDECREF(generator_heap->exception_keeper_value_3);
            Py_XDECREF(generator_heap->exception_keeper_tb_3);

            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_7 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 152;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_7, mod_consts[6]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(generator_heap->tmp_with_1__source);
    Py_DECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(generator_heap->tmp_with_1__enter);
    Py_DECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_5 == NULL) {
        generator_heap->exception_keeper_tb_5 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_5);
    } else if (generator_heap->exception_keeper_lineno_5 != 0) {
        generator_heap->exception_keeper_tb_5 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_5, generator->m_frame, generator_heap->exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_5, &generator_heap->exception_keeper_value_5, &generator_heap->exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_5 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_assign_source_12;
        tmp_assign_source_12 = NUITKA_BOOL_FALSE;
        generator_heap->tmp_with_2__indicator = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(generator_heap->tmp_with_2__exit);
        tmp_called_value_8 = generator_heap->tmp_with_2__exit;
        tmp_args_element_value_4 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_5 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_6 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        generator->m_frame->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_9;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_9;
        }
        tmp_condition_result_6 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 144;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccccccccccccccccoo";
    goto try_except_handler_9;
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 144;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccccccccccccccccoo";
    goto try_except_handler_9;
    branch_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto try_except_handler_3;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(generator_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = generator_heap->tmp_with_2__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(generator_heap->tmp_with_2__exit);
        tmp_called_value_9 = generator_heap->tmp_with_2__exit;
        generator->m_frame->m_frame.f_lineno = 144;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_9, mod_consts[6]);

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

            Py_DECREF(generator_heap->exception_keeper_type_7);
            Py_XDECREF(generator_heap->exception_keeper_value_7);
            Py_XDECREF(generator_heap->exception_keeper_tb_7);

            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_7:;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto try_except_handler_2;
    // End of try:
    try_end_7:;
    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(generator_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = generator_heap->tmp_with_2__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(generator_heap->tmp_with_2__exit);
        tmp_called_value_10 = generator_heap->tmp_with_2__exit;
        generator->m_frame->m_frame.f_lineno = 144;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_10, mod_consts[6]);

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "ccccccccccccccccoo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_8:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_with_2__source);
    generator_heap->tmp_with_2__source = NULL;
    Py_XDECREF(generator_heap->tmp_with_2__enter);
    generator_heap->tmp_with_2__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_2__exit);
    generator_heap->tmp_with_2__exit = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_8;
    generator_heap->exception_value = generator_heap->exception_keeper_value_8;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[9],
            generator->m_closure[14],
            generator->m_closure[10],
            generator->m_closure[2],
            generator->m_closure[4],
            generator->m_closure[5],
            generator->m_closure[8],
            generator->m_closure[7],
            generator->m_closure[3],
            generator->m_closure[0],
            generator->m_closure[11],
            generator->m_closure[12],
            generator->m_closure[6],
            generator->m_closure[15],
            generator->m_closure[1],
            generator->m_closure[13],
            generator_heap->var_client,
            generator_heap->var_response
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_9 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_9 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_9 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_client);
    generator_heap->var_client = NULL;
    Py_XDECREF(generator_heap->var_response);
    generator_heap->var_response = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_9;
    generator_heap->exception_value = generator_heap->exception_keeper_value_9;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_9;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(generator_heap->tmp_with_2__source);
    Py_DECREF(generator_heap->tmp_with_2__source);
    generator_heap->tmp_with_2__source = NULL;
    CHECK_OBJECT(generator_heap->tmp_with_2__enter);
    Py_DECREF(generator_heap->tmp_with_2__enter);
    generator_heap->tmp_with_2__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_2__exit);
    generator_heap->tmp_with_2__exit = NULL;
    CHECK_OBJECT(generator_heap->var_client);
    Py_DECREF(generator_heap->var_client);
    generator_heap->var_client = NULL;
    Py_XDECREF(generator_heap->var_response);
    generator_heap->var_response = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_api$$$function__2_stream$$$genobj__1_stream(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_api$$$function__2_stream$$$genobj__1_stream_context,
        module_httpx$_api,
        mod_consts[15],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_5c712579dc280b320117766ac7092736,
        closure,
        16,
#if 1
        sizeof(struct httpx$_api$$$function__2_stream$$$genobj__1_stream_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_api$$$function__3_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    PyObject *par_params = python_pars[1];
    PyObject *par_headers = python_pars[2];
    PyObject *par_cookies = python_pars[3];
    PyObject *par_auth = python_pars[4];
    PyObject *par_proxies = python_pars[5];
    PyObject *par_follow_redirects = python_pars[6];
    PyObject *par_cert = python_pars[7];
    PyObject *par_verify = python_pars[8];
    PyObject *par_timeout = python_pars[9];
    PyObject *par_trust_env = python_pars[10];
    struct Nuitka_FrameObject *frame_2f9dc03ade1d8ecdb5abcf34a3f13871;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2f9dc03ade1d8ecdb5abcf34a3f13871 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2f9dc03ade1d8ecdb5abcf34a3f13871)) {
        Py_XDECREF(cache_frame_2f9dc03ade1d8ecdb5abcf34a3f13871);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f9dc03ade1d8ecdb5abcf34a3f13871 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f9dc03ade1d8ecdb5abcf34a3f13871 = MAKE_FUNCTION_FRAME(tstate, codeobj_2f9dc03ade1d8ecdb5abcf34a3f13871, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f9dc03ade1d8ecdb5abcf34a3f13871->m_type_description == NULL);
    frame_2f9dc03ade1d8ecdb5abcf34a3f13871 = cache_frame_2f9dc03ade1d8ecdb5abcf34a3f13871;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2f9dc03ade1d8ecdb5abcf34a3f13871);
    assert(Py_REFCNT(frame_2f9dc03ade1d8ecdb5abcf34a3f13871) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[26];
        CHECK_OBJECT(par_url);
        tmp_kw_call_arg_value_1_1 = par_url;
        CHECK_OBJECT(par_params);
        tmp_kw_call_dict_value_0_1 = par_params;
        CHECK_OBJECT(par_headers);
        tmp_kw_call_dict_value_1_1 = par_headers;
        CHECK_OBJECT(par_cookies);
        tmp_kw_call_dict_value_2_1 = par_cookies;
        CHECK_OBJECT(par_auth);
        tmp_kw_call_dict_value_3_1 = par_auth;
        CHECK_OBJECT(par_proxies);
        tmp_kw_call_dict_value_4_1 = par_proxies;
        CHECK_OBJECT(par_follow_redirects);
        tmp_kw_call_dict_value_5_1 = par_follow_redirects;
        CHECK_OBJECT(par_cert);
        tmp_kw_call_dict_value_6_1 = par_cert;
        CHECK_OBJECT(par_verify);
        tmp_kw_call_dict_value_7_1 = par_verify;
        CHECK_OBJECT(par_timeout);
        tmp_kw_call_dict_value_8_1 = par_timeout;
        CHECK_OBJECT(par_trust_env);
        tmp_kw_call_dict_value_9_1 = par_trust_env;
        frame_2f9dc03ade1d8ecdb5abcf34a3f13871->m_frame.f_lineno = 189;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[10] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[27]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f9dc03ade1d8ecdb5abcf34a3f13871, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f9dc03ade1d8ecdb5abcf34a3f13871->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f9dc03ade1d8ecdb5abcf34a3f13871, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f9dc03ade1d8ecdb5abcf34a3f13871,
        type_description_1,
        par_url,
        par_params,
        par_headers,
        par_cookies,
        par_auth,
        par_proxies,
        par_follow_redirects,
        par_cert,
        par_verify,
        par_timeout,
        par_trust_env
    );


    // Release cached frame if used for exception.
    if (frame_2f9dc03ade1d8ecdb5abcf34a3f13871 == cache_frame_2f9dc03ade1d8ecdb5abcf34a3f13871) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f9dc03ade1d8ecdb5abcf34a3f13871);
        cache_frame_2f9dc03ade1d8ecdb5abcf34a3f13871 = NULL;
    }

    assertFrameObject(frame_2f9dc03ade1d8ecdb5abcf34a3f13871);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__4_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    PyObject *par_params = python_pars[1];
    PyObject *par_headers = python_pars[2];
    PyObject *par_cookies = python_pars[3];
    PyObject *par_auth = python_pars[4];
    PyObject *par_proxies = python_pars[5];
    PyObject *par_follow_redirects = python_pars[6];
    PyObject *par_cert = python_pars[7];
    PyObject *par_verify = python_pars[8];
    PyObject *par_timeout = python_pars[9];
    PyObject *par_trust_env = python_pars[10];
    struct Nuitka_FrameObject *frame_eaecb586e338f36a7ab6008f892e8ff4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eaecb586e338f36a7ab6008f892e8ff4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eaecb586e338f36a7ab6008f892e8ff4)) {
        Py_XDECREF(cache_frame_eaecb586e338f36a7ab6008f892e8ff4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eaecb586e338f36a7ab6008f892e8ff4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eaecb586e338f36a7ab6008f892e8ff4 = MAKE_FUNCTION_FRAME(tstate, codeobj_eaecb586e338f36a7ab6008f892e8ff4, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eaecb586e338f36a7ab6008f892e8ff4->m_type_description == NULL);
    frame_eaecb586e338f36a7ab6008f892e8ff4 = cache_frame_eaecb586e338f36a7ab6008f892e8ff4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_eaecb586e338f36a7ab6008f892e8ff4);
    assert(Py_REFCNT(frame_eaecb586e338f36a7ab6008f892e8ff4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[29];
        CHECK_OBJECT(par_url);
        tmp_kw_call_arg_value_1_1 = par_url;
        CHECK_OBJECT(par_params);
        tmp_kw_call_dict_value_0_1 = par_params;
        CHECK_OBJECT(par_headers);
        tmp_kw_call_dict_value_1_1 = par_headers;
        CHECK_OBJECT(par_cookies);
        tmp_kw_call_dict_value_2_1 = par_cookies;
        CHECK_OBJECT(par_auth);
        tmp_kw_call_dict_value_3_1 = par_auth;
        CHECK_OBJECT(par_proxies);
        tmp_kw_call_dict_value_4_1 = par_proxies;
        CHECK_OBJECT(par_follow_redirects);
        tmp_kw_call_dict_value_5_1 = par_follow_redirects;
        CHECK_OBJECT(par_cert);
        tmp_kw_call_dict_value_6_1 = par_cert;
        CHECK_OBJECT(par_verify);
        tmp_kw_call_dict_value_7_1 = par_verify;
        CHECK_OBJECT(par_timeout);
        tmp_kw_call_dict_value_8_1 = par_timeout;
        CHECK_OBJECT(par_trust_env);
        tmp_kw_call_dict_value_9_1 = par_trust_env;
        frame_eaecb586e338f36a7ab6008f892e8ff4->m_frame.f_lineno = 227;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[10] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[27]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eaecb586e338f36a7ab6008f892e8ff4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eaecb586e338f36a7ab6008f892e8ff4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eaecb586e338f36a7ab6008f892e8ff4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eaecb586e338f36a7ab6008f892e8ff4,
        type_description_1,
        par_url,
        par_params,
        par_headers,
        par_cookies,
        par_auth,
        par_proxies,
        par_follow_redirects,
        par_cert,
        par_verify,
        par_timeout,
        par_trust_env
    );


    // Release cached frame if used for exception.
    if (frame_eaecb586e338f36a7ab6008f892e8ff4 == cache_frame_eaecb586e338f36a7ab6008f892e8ff4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eaecb586e338f36a7ab6008f892e8ff4);
        cache_frame_eaecb586e338f36a7ab6008f892e8ff4 = NULL;
    }

    assertFrameObject(frame_eaecb586e338f36a7ab6008f892e8ff4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__5_head(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    PyObject *par_params = python_pars[1];
    PyObject *par_headers = python_pars[2];
    PyObject *par_cookies = python_pars[3];
    PyObject *par_auth = python_pars[4];
    PyObject *par_proxies = python_pars[5];
    PyObject *par_follow_redirects = python_pars[6];
    PyObject *par_cert = python_pars[7];
    PyObject *par_verify = python_pars[8];
    PyObject *par_timeout = python_pars[9];
    PyObject *par_trust_env = python_pars[10];
    struct Nuitka_FrameObject *frame_af6ed8a0c012cd6dc9e46afabcb69b37;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_af6ed8a0c012cd6dc9e46afabcb69b37 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_af6ed8a0c012cd6dc9e46afabcb69b37)) {
        Py_XDECREF(cache_frame_af6ed8a0c012cd6dc9e46afabcb69b37);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af6ed8a0c012cd6dc9e46afabcb69b37 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af6ed8a0c012cd6dc9e46afabcb69b37 = MAKE_FUNCTION_FRAME(tstate, codeobj_af6ed8a0c012cd6dc9e46afabcb69b37, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_af6ed8a0c012cd6dc9e46afabcb69b37->m_type_description == NULL);
    frame_af6ed8a0c012cd6dc9e46afabcb69b37 = cache_frame_af6ed8a0c012cd6dc9e46afabcb69b37;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_af6ed8a0c012cd6dc9e46afabcb69b37);
    assert(Py_REFCNT(frame_af6ed8a0c012cd6dc9e46afabcb69b37) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[31];
        CHECK_OBJECT(par_url);
        tmp_kw_call_arg_value_1_1 = par_url;
        CHECK_OBJECT(par_params);
        tmp_kw_call_dict_value_0_1 = par_params;
        CHECK_OBJECT(par_headers);
        tmp_kw_call_dict_value_1_1 = par_headers;
        CHECK_OBJECT(par_cookies);
        tmp_kw_call_dict_value_2_1 = par_cookies;
        CHECK_OBJECT(par_auth);
        tmp_kw_call_dict_value_3_1 = par_auth;
        CHECK_OBJECT(par_proxies);
        tmp_kw_call_dict_value_4_1 = par_proxies;
        CHECK_OBJECT(par_follow_redirects);
        tmp_kw_call_dict_value_5_1 = par_follow_redirects;
        CHECK_OBJECT(par_cert);
        tmp_kw_call_dict_value_6_1 = par_cert;
        CHECK_OBJECT(par_verify);
        tmp_kw_call_dict_value_7_1 = par_verify;
        CHECK_OBJECT(par_timeout);
        tmp_kw_call_dict_value_8_1 = par_timeout;
        CHECK_OBJECT(par_trust_env);
        tmp_kw_call_dict_value_9_1 = par_trust_env;
        frame_af6ed8a0c012cd6dc9e46afabcb69b37->m_frame.f_lineno = 265;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[10] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[27]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_af6ed8a0c012cd6dc9e46afabcb69b37, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af6ed8a0c012cd6dc9e46afabcb69b37->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af6ed8a0c012cd6dc9e46afabcb69b37, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af6ed8a0c012cd6dc9e46afabcb69b37,
        type_description_1,
        par_url,
        par_params,
        par_headers,
        par_cookies,
        par_auth,
        par_proxies,
        par_follow_redirects,
        par_cert,
        par_verify,
        par_timeout,
        par_trust_env
    );


    // Release cached frame if used for exception.
    if (frame_af6ed8a0c012cd6dc9e46afabcb69b37 == cache_frame_af6ed8a0c012cd6dc9e46afabcb69b37) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_af6ed8a0c012cd6dc9e46afabcb69b37);
        cache_frame_af6ed8a0c012cd6dc9e46afabcb69b37 = NULL;
    }

    assertFrameObject(frame_af6ed8a0c012cd6dc9e46afabcb69b37);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__6_post(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    PyObject *par_content = python_pars[1];
    PyObject *par_data = python_pars[2];
    PyObject *par_files = python_pars[3];
    PyObject *par_json = python_pars[4];
    PyObject *par_params = python_pars[5];
    PyObject *par_headers = python_pars[6];
    PyObject *par_cookies = python_pars[7];
    PyObject *par_auth = python_pars[8];
    PyObject *par_proxies = python_pars[9];
    PyObject *par_follow_redirects = python_pars[10];
    PyObject *par_cert = python_pars[11];
    PyObject *par_verify = python_pars[12];
    PyObject *par_timeout = python_pars[13];
    PyObject *par_trust_env = python_pars[14];
    struct Nuitka_FrameObject *frame_0c5f8854bba98c75213581c480d3ffe3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0c5f8854bba98c75213581c480d3ffe3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c5f8854bba98c75213581c480d3ffe3)) {
        Py_XDECREF(cache_frame_0c5f8854bba98c75213581c480d3ffe3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c5f8854bba98c75213581c480d3ffe3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c5f8854bba98c75213581c480d3ffe3 = MAKE_FUNCTION_FRAME(tstate, codeobj_0c5f8854bba98c75213581c480d3ffe3, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c5f8854bba98c75213581c480d3ffe3->m_type_description == NULL);
    frame_0c5f8854bba98c75213581c480d3ffe3 = cache_frame_0c5f8854bba98c75213581c480d3ffe3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0c5f8854bba98c75213581c480d3ffe3);
    assert(Py_REFCNT(frame_0c5f8854bba98c75213581c480d3ffe3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        PyObject *tmp_kw_call_dict_value_10_1;
        PyObject *tmp_kw_call_dict_value_11_1;
        PyObject *tmp_kw_call_dict_value_12_1;
        PyObject *tmp_kw_call_dict_value_13_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[33];
        CHECK_OBJECT(par_url);
        tmp_kw_call_arg_value_1_1 = par_url;
        CHECK_OBJECT(par_content);
        tmp_kw_call_dict_value_0_1 = par_content;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_1_1 = par_data;
        CHECK_OBJECT(par_files);
        tmp_kw_call_dict_value_2_1 = par_files;
        CHECK_OBJECT(par_json);
        tmp_kw_call_dict_value_3_1 = par_json;
        CHECK_OBJECT(par_params);
        tmp_kw_call_dict_value_4_1 = par_params;
        CHECK_OBJECT(par_headers);
        tmp_kw_call_dict_value_5_1 = par_headers;
        CHECK_OBJECT(par_cookies);
        tmp_kw_call_dict_value_6_1 = par_cookies;
        CHECK_OBJECT(par_auth);
        tmp_kw_call_dict_value_7_1 = par_auth;
        CHECK_OBJECT(par_proxies);
        tmp_kw_call_dict_value_8_1 = par_proxies;
        CHECK_OBJECT(par_follow_redirects);
        tmp_kw_call_dict_value_9_1 = par_follow_redirects;
        CHECK_OBJECT(par_cert);
        tmp_kw_call_dict_value_10_1 = par_cert;
        CHECK_OBJECT(par_verify);
        tmp_kw_call_dict_value_11_1 = par_verify;
        CHECK_OBJECT(par_timeout);
        tmp_kw_call_dict_value_12_1 = par_timeout;
        CHECK_OBJECT(par_trust_env);
        tmp_kw_call_dict_value_13_1 = par_trust_env;
        frame_0c5f8854bba98c75213581c480d3ffe3->m_frame.f_lineno = 304;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[14] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[34]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0c5f8854bba98c75213581c480d3ffe3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c5f8854bba98c75213581c480d3ffe3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c5f8854bba98c75213581c480d3ffe3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c5f8854bba98c75213581c480d3ffe3,
        type_description_1,
        par_url,
        par_content,
        par_data,
        par_files,
        par_json,
        par_params,
        par_headers,
        par_cookies,
        par_auth,
        par_proxies,
        par_follow_redirects,
        par_cert,
        par_verify,
        par_timeout,
        par_trust_env
    );


    // Release cached frame if used for exception.
    if (frame_0c5f8854bba98c75213581c480d3ffe3 == cache_frame_0c5f8854bba98c75213581c480d3ffe3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c5f8854bba98c75213581c480d3ffe3);
        cache_frame_0c5f8854bba98c75213581c480d3ffe3 = NULL;
    }

    assertFrameObject(frame_0c5f8854bba98c75213581c480d3ffe3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    CHECK_OBJECT(par_json);
    Py_DECREF(par_json);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    CHECK_OBJECT(par_json);
    Py_DECREF(par_json);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__7_put(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    PyObject *par_content = python_pars[1];
    PyObject *par_data = python_pars[2];
    PyObject *par_files = python_pars[3];
    PyObject *par_json = python_pars[4];
    PyObject *par_params = python_pars[5];
    PyObject *par_headers = python_pars[6];
    PyObject *par_cookies = python_pars[7];
    PyObject *par_auth = python_pars[8];
    PyObject *par_proxies = python_pars[9];
    PyObject *par_follow_redirects = python_pars[10];
    PyObject *par_cert = python_pars[11];
    PyObject *par_verify = python_pars[12];
    PyObject *par_timeout = python_pars[13];
    PyObject *par_trust_env = python_pars[14];
    struct Nuitka_FrameObject *frame_74db8d6734a599297a740674512ee715;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_74db8d6734a599297a740674512ee715 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_74db8d6734a599297a740674512ee715)) {
        Py_XDECREF(cache_frame_74db8d6734a599297a740674512ee715);

#if _DEBUG_REFCOUNTS
        if (cache_frame_74db8d6734a599297a740674512ee715 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_74db8d6734a599297a740674512ee715 = MAKE_FUNCTION_FRAME(tstate, codeobj_74db8d6734a599297a740674512ee715, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_74db8d6734a599297a740674512ee715->m_type_description == NULL);
    frame_74db8d6734a599297a740674512ee715 = cache_frame_74db8d6734a599297a740674512ee715;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_74db8d6734a599297a740674512ee715);
    assert(Py_REFCNT(frame_74db8d6734a599297a740674512ee715) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        PyObject *tmp_kw_call_dict_value_10_1;
        PyObject *tmp_kw_call_dict_value_11_1;
        PyObject *tmp_kw_call_dict_value_12_1;
        PyObject *tmp_kw_call_dict_value_13_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[36];
        CHECK_OBJECT(par_url);
        tmp_kw_call_arg_value_1_1 = par_url;
        CHECK_OBJECT(par_content);
        tmp_kw_call_dict_value_0_1 = par_content;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_1_1 = par_data;
        CHECK_OBJECT(par_files);
        tmp_kw_call_dict_value_2_1 = par_files;
        CHECK_OBJECT(par_json);
        tmp_kw_call_dict_value_3_1 = par_json;
        CHECK_OBJECT(par_params);
        tmp_kw_call_dict_value_4_1 = par_params;
        CHECK_OBJECT(par_headers);
        tmp_kw_call_dict_value_5_1 = par_headers;
        CHECK_OBJECT(par_cookies);
        tmp_kw_call_dict_value_6_1 = par_cookies;
        CHECK_OBJECT(par_auth);
        tmp_kw_call_dict_value_7_1 = par_auth;
        CHECK_OBJECT(par_proxies);
        tmp_kw_call_dict_value_8_1 = par_proxies;
        CHECK_OBJECT(par_follow_redirects);
        tmp_kw_call_dict_value_9_1 = par_follow_redirects;
        CHECK_OBJECT(par_cert);
        tmp_kw_call_dict_value_10_1 = par_cert;
        CHECK_OBJECT(par_verify);
        tmp_kw_call_dict_value_11_1 = par_verify;
        CHECK_OBJECT(par_timeout);
        tmp_kw_call_dict_value_12_1 = par_timeout;
        CHECK_OBJECT(par_trust_env);
        tmp_kw_call_dict_value_13_1 = par_trust_env;
        frame_74db8d6734a599297a740674512ee715->m_frame.f_lineno = 347;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[14] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[34]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_74db8d6734a599297a740674512ee715, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_74db8d6734a599297a740674512ee715->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74db8d6734a599297a740674512ee715, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_74db8d6734a599297a740674512ee715,
        type_description_1,
        par_url,
        par_content,
        par_data,
        par_files,
        par_json,
        par_params,
        par_headers,
        par_cookies,
        par_auth,
        par_proxies,
        par_follow_redirects,
        par_cert,
        par_verify,
        par_timeout,
        par_trust_env
    );


    // Release cached frame if used for exception.
    if (frame_74db8d6734a599297a740674512ee715 == cache_frame_74db8d6734a599297a740674512ee715) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_74db8d6734a599297a740674512ee715);
        cache_frame_74db8d6734a599297a740674512ee715 = NULL;
    }

    assertFrameObject(frame_74db8d6734a599297a740674512ee715);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    CHECK_OBJECT(par_json);
    Py_DECREF(par_json);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    CHECK_OBJECT(par_json);
    Py_DECREF(par_json);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__8_patch(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    PyObject *par_content = python_pars[1];
    PyObject *par_data = python_pars[2];
    PyObject *par_files = python_pars[3];
    PyObject *par_json = python_pars[4];
    PyObject *par_params = python_pars[5];
    PyObject *par_headers = python_pars[6];
    PyObject *par_cookies = python_pars[7];
    PyObject *par_auth = python_pars[8];
    PyObject *par_proxies = python_pars[9];
    PyObject *par_follow_redirects = python_pars[10];
    PyObject *par_cert = python_pars[11];
    PyObject *par_verify = python_pars[12];
    PyObject *par_timeout = python_pars[13];
    PyObject *par_trust_env = python_pars[14];
    struct Nuitka_FrameObject *frame_b9148fca82506b7fc20ce3829c4e7367;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b9148fca82506b7fc20ce3829c4e7367 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b9148fca82506b7fc20ce3829c4e7367)) {
        Py_XDECREF(cache_frame_b9148fca82506b7fc20ce3829c4e7367);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9148fca82506b7fc20ce3829c4e7367 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9148fca82506b7fc20ce3829c4e7367 = MAKE_FUNCTION_FRAME(tstate, codeobj_b9148fca82506b7fc20ce3829c4e7367, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b9148fca82506b7fc20ce3829c4e7367->m_type_description == NULL);
    frame_b9148fca82506b7fc20ce3829c4e7367 = cache_frame_b9148fca82506b7fc20ce3829c4e7367;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b9148fca82506b7fc20ce3829c4e7367);
    assert(Py_REFCNT(frame_b9148fca82506b7fc20ce3829c4e7367) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        PyObject *tmp_kw_call_dict_value_10_1;
        PyObject *tmp_kw_call_dict_value_11_1;
        PyObject *tmp_kw_call_dict_value_12_1;
        PyObject *tmp_kw_call_dict_value_13_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[38];
        CHECK_OBJECT(par_url);
        tmp_kw_call_arg_value_1_1 = par_url;
        CHECK_OBJECT(par_content);
        tmp_kw_call_dict_value_0_1 = par_content;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_1_1 = par_data;
        CHECK_OBJECT(par_files);
        tmp_kw_call_dict_value_2_1 = par_files;
        CHECK_OBJECT(par_json);
        tmp_kw_call_dict_value_3_1 = par_json;
        CHECK_OBJECT(par_params);
        tmp_kw_call_dict_value_4_1 = par_params;
        CHECK_OBJECT(par_headers);
        tmp_kw_call_dict_value_5_1 = par_headers;
        CHECK_OBJECT(par_cookies);
        tmp_kw_call_dict_value_6_1 = par_cookies;
        CHECK_OBJECT(par_auth);
        tmp_kw_call_dict_value_7_1 = par_auth;
        CHECK_OBJECT(par_proxies);
        tmp_kw_call_dict_value_8_1 = par_proxies;
        CHECK_OBJECT(par_follow_redirects);
        tmp_kw_call_dict_value_9_1 = par_follow_redirects;
        CHECK_OBJECT(par_cert);
        tmp_kw_call_dict_value_10_1 = par_cert;
        CHECK_OBJECT(par_verify);
        tmp_kw_call_dict_value_11_1 = par_verify;
        CHECK_OBJECT(par_timeout);
        tmp_kw_call_dict_value_12_1 = par_timeout;
        CHECK_OBJECT(par_trust_env);
        tmp_kw_call_dict_value_13_1 = par_trust_env;
        frame_b9148fca82506b7fc20ce3829c4e7367->m_frame.f_lineno = 390;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[14] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[34]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9148fca82506b7fc20ce3829c4e7367, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9148fca82506b7fc20ce3829c4e7367->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9148fca82506b7fc20ce3829c4e7367, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9148fca82506b7fc20ce3829c4e7367,
        type_description_1,
        par_url,
        par_content,
        par_data,
        par_files,
        par_json,
        par_params,
        par_headers,
        par_cookies,
        par_auth,
        par_proxies,
        par_follow_redirects,
        par_cert,
        par_verify,
        par_timeout,
        par_trust_env
    );


    // Release cached frame if used for exception.
    if (frame_b9148fca82506b7fc20ce3829c4e7367 == cache_frame_b9148fca82506b7fc20ce3829c4e7367) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b9148fca82506b7fc20ce3829c4e7367);
        cache_frame_b9148fca82506b7fc20ce3829c4e7367 = NULL;
    }

    assertFrameObject(frame_b9148fca82506b7fc20ce3829c4e7367);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    CHECK_OBJECT(par_json);
    Py_DECREF(par_json);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    CHECK_OBJECT(par_json);
    Py_DECREF(par_json);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__9_delete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    PyObject *par_params = python_pars[1];
    PyObject *par_headers = python_pars[2];
    PyObject *par_cookies = python_pars[3];
    PyObject *par_auth = python_pars[4];
    PyObject *par_proxies = python_pars[5];
    PyObject *par_follow_redirects = python_pars[6];
    PyObject *par_cert = python_pars[7];
    PyObject *par_verify = python_pars[8];
    PyObject *par_timeout = python_pars[9];
    PyObject *par_trust_env = python_pars[10];
    struct Nuitka_FrameObject *frame_e65ff5f9823135e14ca2ea2baee79368;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e65ff5f9823135e14ca2ea2baee79368 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e65ff5f9823135e14ca2ea2baee79368)) {
        Py_XDECREF(cache_frame_e65ff5f9823135e14ca2ea2baee79368);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e65ff5f9823135e14ca2ea2baee79368 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e65ff5f9823135e14ca2ea2baee79368 = MAKE_FUNCTION_FRAME(tstate, codeobj_e65ff5f9823135e14ca2ea2baee79368, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e65ff5f9823135e14ca2ea2baee79368->m_type_description == NULL);
    frame_e65ff5f9823135e14ca2ea2baee79368 = cache_frame_e65ff5f9823135e14ca2ea2baee79368;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e65ff5f9823135e14ca2ea2baee79368);
    assert(Py_REFCNT(frame_e65ff5f9823135e14ca2ea2baee79368) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[40];
        CHECK_OBJECT(par_url);
        tmp_kw_call_arg_value_1_1 = par_url;
        CHECK_OBJECT(par_params);
        tmp_kw_call_dict_value_0_1 = par_params;
        CHECK_OBJECT(par_headers);
        tmp_kw_call_dict_value_1_1 = par_headers;
        CHECK_OBJECT(par_cookies);
        tmp_kw_call_dict_value_2_1 = par_cookies;
        CHECK_OBJECT(par_auth);
        tmp_kw_call_dict_value_3_1 = par_auth;
        CHECK_OBJECT(par_proxies);
        tmp_kw_call_dict_value_4_1 = par_proxies;
        CHECK_OBJECT(par_follow_redirects);
        tmp_kw_call_dict_value_5_1 = par_follow_redirects;
        CHECK_OBJECT(par_cert);
        tmp_kw_call_dict_value_6_1 = par_cert;
        CHECK_OBJECT(par_verify);
        tmp_kw_call_dict_value_7_1 = par_verify;
        CHECK_OBJECT(par_timeout);
        tmp_kw_call_dict_value_8_1 = par_timeout;
        CHECK_OBJECT(par_trust_env);
        tmp_kw_call_dict_value_9_1 = par_trust_env;
        frame_e65ff5f9823135e14ca2ea2baee79368->m_frame.f_lineno = 432;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[10] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[27]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e65ff5f9823135e14ca2ea2baee79368, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e65ff5f9823135e14ca2ea2baee79368->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e65ff5f9823135e14ca2ea2baee79368, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e65ff5f9823135e14ca2ea2baee79368,
        type_description_1,
        par_url,
        par_params,
        par_headers,
        par_cookies,
        par_auth,
        par_proxies,
        par_follow_redirects,
        par_cert,
        par_verify,
        par_timeout,
        par_trust_env
    );


    // Release cached frame if used for exception.
    if (frame_e65ff5f9823135e14ca2ea2baee79368 == cache_frame_e65ff5f9823135e14ca2ea2baee79368) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e65ff5f9823135e14ca2ea2baee79368);
        cache_frame_e65ff5f9823135e14ca2ea2baee79368 = NULL;
    }

    assertFrameObject(frame_e65ff5f9823135e14ca2ea2baee79368);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);
    CHECK_OBJECT(par_follow_redirects);
    Py_DECREF(par_follow_redirects);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_trust_env);
    Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__1_request(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__1_request,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_37fa669f58cbde1d28f5c7ea0d233ac2,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__2_stream(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__2_stream,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5c712579dc280b320117766ac7092736,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__3_get(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__3_get,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f9dc03ade1d8ecdb5abcf34a3f13871,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__4_options(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__4_options,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eaecb586e338f36a7ab6008f892e8ff4,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__5_head(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__5_head,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_af6ed8a0c012cd6dc9e46afabcb69b37,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__6_post(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__6_post,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0c5f8854bba98c75213581c480d3ffe3,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__7_put(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__7_put,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_74db8d6734a599297a740674512ee715,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__8_patch(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__8_patch,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b9148fca82506b7fc20ce3829c4e7367,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__9_delete(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__9_delete,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e65ff5f9823135e14ca2ea2baee79368,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_httpx$_api[] = {
    impl_httpx$_api$$$function__1_request,
    impl_httpx$_api$$$function__2_stream,
    impl_httpx$_api$$$function__3_get,
    impl_httpx$_api$$$function__4_options,
    impl_httpx$_api$$$function__5_head,
    impl_httpx$_api$$$function__6_post,
    impl_httpx$_api$$$function__7_put,
    impl_httpx$_api$$$function__8_patch,
    impl_httpx$_api$$$function__9_delete,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_httpx$_api);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_httpx$_api,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_httpx$_api,
        sizeof(function_table_httpx$_api) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_httpx$_api(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_api");

    // Store the module for future use.
    module_httpx$_api = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx$_api: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_api: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithttpx$_api\n");

    moduledict_httpx$_api = MODULE_DICT(module_httpx$_api);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_api,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_api,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[93]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_api,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_api);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_api);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_2934964d3c91829671a58654f60796b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_2);
    }
    frame_2934964d3c91829671a58654f60796b6 = MAKE_MODULE_FRAME(codeobj_2934964d3c91829671a58654f60796b6, module_httpx$_api);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2934964d3c91829671a58654f60796b6);
    assert(Py_REFCNT(frame_2934964d3c91829671a58654f60796b6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[45], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[46], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[49];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_api;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[50];
        tmp_level_value_1 = mod_consts[51];
        frame_2934964d3c91829671a58654f60796b6->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[52],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[53];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_api;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[54];
        tmp_level_value_2 = mod_consts[55];
        frame_2934964d3c91829671a58654f60796b6->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[0],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[56];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_httpx$_api;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[57];
        tmp_level_value_3 = mod_consts[55];
        frame_2934964d3c91829671a58654f60796b6->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[58],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[59];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_httpx$_api;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[60];
        tmp_level_value_4 = mod_consts[55];
        frame_2934964d3c91829671a58654f60796b6->m_frame.f_lineno = 6;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[61],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[62];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_httpx$_api;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[63];
        tmp_level_value_5 = mod_consts[55];
        frame_2934964d3c91829671a58654f60796b6->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[64],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[64]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[65],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[65]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[66],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[66]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[67],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[67]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[68],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[68]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[69],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[69]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[70],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[70]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[71],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[71]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[72],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[72]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_14 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[73],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[73]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_15 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[74],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[74]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_16 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_httpx$_api,
                mod_consts[75],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[75]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_21);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_1 = mod_consts[22];
        tmp_dict_value_1 = Py_None;
        tmp_kw_defaults_1 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[18];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[19];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[20];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[21];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[24];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[25];
        tmp_dict_value_1 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        tmp_dict_value_1 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        tmp_dict_value_1 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_kw_defaults_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_dict_key_2 = mod_consts[16];
        tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_1 = _PyDict_NewPresized( 17 );
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_10;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[17];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[22];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_2 == NULL));
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[76]);
            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_subscript_value_1 == NULL)) {
                tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
            }

            if (tmp_subscript_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_1);

                exception_lineno = 27;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[18];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_4 == NULL));
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[76]);
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_subscript_value_2 == NULL)) {
                tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_subscript_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_3);

                exception_lineno = 28;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[19];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_6 == NULL));
            tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[76]);
            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_subscript_value_3 == NULL)) {
                tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
            }

            if (tmp_subscript_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_5);

                exception_lineno = 29;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[20];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_8 == NULL));
            tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[76]);
            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[72]);

            if (unlikely(tmp_subscript_value_4 == NULL)) {
                tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
            }

            if (tmp_subscript_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_7);

                exception_lineno = 30;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[21];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_10 == NULL));
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[76]);
            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_2;
            }
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_11 == NULL));
            tmp_subscript_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[77]);
            if (tmp_subscript_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_9);

                exception_lineno = 31;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_9);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[23];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_13 == NULL));
            tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[76]);
            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_subscript_value_6 == NULL)) {
                tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_subscript_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_12);

                exception_lineno = 32;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[9];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_15 == NULL));
            tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[76]);
            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_subscript_value_7 == NULL)) {
                tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
            }

            if (tmp_subscript_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_14);

                exception_lineno = 33;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[24];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_17 == NULL));
            tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[76]);
            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_subscript_value_8 == NULL)) {
                tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_subscript_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_16);

                exception_lineno = 34;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[10];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_19 == NULL));
            tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[76]);
            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_subscript_value_9 == NULL)) {
                tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
            }

            if (tmp_subscript_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_18);

                exception_lineno = 35;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[13];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[25];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[12];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[11];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_21 == NULL));
            tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[76]);
            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_subscript_value_10 == NULL)) {
                tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_subscript_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_20);

                exception_lineno = 39;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[14];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[78];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_22 = MAKE_FUNCTION_httpx$_api$$$function__1_request(tmp_kw_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = mod_consts[22];
        tmp_dict_value_3 = Py_None;
        tmp_kw_defaults_2 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[18];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[19];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[20];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[21];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[23];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[9];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[24];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[10];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[13];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[25];
        tmp_dict_value_3 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[12];
        tmp_dict_value_3 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[11];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[14];
        tmp_dict_value_3 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_kw_defaults_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        tmp_dict_key_4 = mod_consts[16];
        tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_2 = _PyDict_NewPresized( 17 );
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_21;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[17];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[22];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_23 == NULL));
            tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[76]);
            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_subscript_value_11 == NULL)) {
                tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
            }

            if (tmp_subscript_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_22);

                exception_lineno = 119;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[18];
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_25 == NULL));
            tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[76]);
            if (tmp_expression_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_subscript_value_12 == NULL)) {
                tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_subscript_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_24);

                exception_lineno = 120;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[19];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_27 == NULL));
            tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[76]);
            if (tmp_expression_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_subscript_value_13 == NULL)) {
                tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
            }

            if (tmp_subscript_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_26);

                exception_lineno = 121;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[20];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_29 == NULL));
            tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[76]);
            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[72]);

            if (unlikely(tmp_subscript_value_14 == NULL)) {
                tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
            }

            if (tmp_subscript_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_28);

                exception_lineno = 122;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[21];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_31 == NULL));
            tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[76]);
            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_4;
            }
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_32 == NULL));
            tmp_subscript_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[77]);
            if (tmp_subscript_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_30);

                exception_lineno = 123;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_30);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[23];
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_34 == NULL));
            tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[76]);
            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_subscript_value_16 == NULL)) {
                tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_subscript_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_33);

                exception_lineno = 124;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_16);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[9];
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_36 == NULL));
            tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[76]);
            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_subscript_value_17 == NULL)) {
                tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
            }

            if (tmp_subscript_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_35);

                exception_lineno = 125;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[24];
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_38 == NULL));
            tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[76]);
            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_subscript_value_18 == NULL)) {
                tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_subscript_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_37);

                exception_lineno = 126;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_37);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[10];
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_40 == NULL));
            tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[76]);
            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_subscript_value_19 == NULL)) {
                tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
            }

            if (tmp_subscript_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_39);

                exception_lineno = 127;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_39);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[13];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[25];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[12];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[11];
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_42 == NULL));
            tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[76]);
            if (tmp_expression_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_20 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_subscript_value_20 == NULL)) {
                tmp_subscript_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_subscript_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_41);

                exception_lineno = 131;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_41);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[14];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[78];
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_44 == NULL));
            tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[79]);
            if (tmp_expression_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_21 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_subscript_value_21 == NULL)) {
                tmp_subscript_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_subscript_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_43);

                exception_lineno = 133;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_43);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_kw_defaults_2);
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_args_element_value_1 = MAKE_FUNCTION_httpx$_api$$$function__2_stream(tmp_kw_defaults_2, tmp_annotations_2);

        frame_2934964d3c91829671a58654f60796b6->m_frame.f_lineno = 114;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_kw_defaults_3;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_dict_key_5 = mod_consts[22];
        tmp_dict_value_5 = Py_None;
        tmp_kw_defaults_3 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[23];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[9];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[24];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[10];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[25];
        tmp_dict_value_5 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[11];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[12];
        tmp_dict_value_5 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[13];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[14];
        tmp_dict_value_5 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_kw_defaults_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        tmp_dict_key_6 = mod_consts[17];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_3);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 12 );
        {
            PyObject *tmp_expression_value_45;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_27;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[22];
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_46 == NULL));
            tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[76]);
            if (tmp_expression_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_subscript_value_22 == NULL)) {
                tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
            }

            if (tmp_subscript_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_45);

                exception_lineno = 170;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_45);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[23];
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_48 == NULL));
            tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[76]);
            if (tmp_expression_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_subscript_value_23 == NULL)) {
                tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_subscript_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_47);

                exception_lineno = 171;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_23);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[9];
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_50 == NULL));
            tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[76]);
            if (tmp_expression_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_subscript_value_24 == NULL)) {
                tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
            }

            if (tmp_subscript_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_49);

                exception_lineno = 172;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[24];
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_52 == NULL));
            tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[76]);
            if (tmp_expression_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_subscript_value_25 == NULL)) {
                tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_subscript_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_51);

                exception_lineno = 173;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_25);
            Py_DECREF(tmp_expression_value_51);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[10];
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_54 == NULL));
            tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[76]);
            if (tmp_expression_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_subscript_value_26 == NULL)) {
                tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
            }

            if (tmp_subscript_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_53);

                exception_lineno = 174;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_53);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[25];
            tmp_dict_value_6 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[11];
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_56 == NULL));
            tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[76]);
            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_subscript_value_27 == NULL)) {
                tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_subscript_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_55);

                exception_lineno = 176;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_55);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[12];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[13];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[14];
            tmp_dict_value_6 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[78];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_kw_defaults_3);
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;


        tmp_assign_source_24 = MAKE_FUNCTION_httpx$_api$$$function__3_get(tmp_kw_defaults_3, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_kw_defaults_4;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_dict_key_7 = mod_consts[22];
        tmp_dict_value_7 = Py_None;
        tmp_kw_defaults_4 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[23];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[9];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[24];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[10];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[25];
        tmp_dict_value_7 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[11];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[12];
        tmp_dict_value_7 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[13];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto dict_build_exception_7;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[14];
        tmp_dict_value_7 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_kw_defaults_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        tmp_dict_key_8 = mod_consts[17];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_4);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 12 );
        {
            PyObject *tmp_expression_value_57;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_subscript_value_33;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[22];
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_58 == NULL));
            tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[76]);
            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_subscript_value_28 == NULL)) {
                tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
            }

            if (tmp_subscript_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_57);

                exception_lineno = 208;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_57);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[23];
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_60 == NULL));
            tmp_expression_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[76]);
            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_subscript_value_29 == NULL)) {
                tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_subscript_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_59);

                exception_lineno = 209;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_59);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[9];
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_62 == NULL));
            tmp_expression_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[76]);
            if (tmp_expression_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_30 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_subscript_value_30 == NULL)) {
                tmp_subscript_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
            }

            if (tmp_subscript_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_61);

                exception_lineno = 210;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_30);
            Py_DECREF(tmp_expression_value_61);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[24];
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_64 == NULL));
            tmp_expression_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[76]);
            if (tmp_expression_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_31 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_subscript_value_31 == NULL)) {
                tmp_subscript_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_subscript_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_63);

                exception_lineno = 211;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_63);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[10];
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_66 == NULL));
            tmp_expression_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[76]);
            if (tmp_expression_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_32 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_subscript_value_32 == NULL)) {
                tmp_subscript_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
            }

            if (tmp_subscript_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_65);

                exception_lineno = 212;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_32);
            Py_DECREF(tmp_expression_value_65);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[25];
            tmp_dict_value_8 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[11];
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_68 == NULL));
            tmp_expression_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[76]);
            if (tmp_expression_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_33 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_subscript_value_33 == NULL)) {
                tmp_subscript_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_subscript_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_67);

                exception_lineno = 214;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_67);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[12];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[13];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[14];
            tmp_dict_value_8 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[78];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_kw_defaults_4);
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;


        tmp_assign_source_25 = MAKE_FUNCTION_httpx$_api$$$function__4_options(tmp_kw_defaults_4, tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_kw_defaults_5;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_dict_key_9 = mod_consts[22];
        tmp_dict_value_9 = Py_None;
        tmp_kw_defaults_5 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[23];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[9];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[24];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[10];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[25];
        tmp_dict_value_9 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[11];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[12];
        tmp_dict_value_9 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[13];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto dict_build_exception_9;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[14];
        tmp_dict_value_9 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_kw_defaults_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;
        tmp_dict_key_10 = mod_consts[17];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_5);

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 12 );
        {
            PyObject *tmp_expression_value_69;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_39;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[22];
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_70 == NULL));
            tmp_expression_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[76]);
            if (tmp_expression_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_34 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_subscript_value_34 == NULL)) {
                tmp_subscript_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
            }

            if (tmp_subscript_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_69);

                exception_lineno = 246;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_34);
            Py_DECREF(tmp_expression_value_69);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[23];
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_72 == NULL));
            tmp_expression_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[76]);
            if (tmp_expression_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_35 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_subscript_value_35 == NULL)) {
                tmp_subscript_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_subscript_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_71);

                exception_lineno = 247;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_35);
            Py_DECREF(tmp_expression_value_71);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[9];
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_74 == NULL));
            tmp_expression_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[76]);
            if (tmp_expression_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_36 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_subscript_value_36 == NULL)) {
                tmp_subscript_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
            }

            if (tmp_subscript_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_73);

                exception_lineno = 248;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_36);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[24];
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_76 == NULL));
            tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[76]);
            if (tmp_expression_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_37 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_subscript_value_37 == NULL)) {
                tmp_subscript_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_subscript_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_75);

                exception_lineno = 249;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_75);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[10];
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_78 == NULL));
            tmp_expression_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[76]);
            if (tmp_expression_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_38 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_subscript_value_38 == NULL)) {
                tmp_subscript_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
            }

            if (tmp_subscript_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_77);

                exception_lineno = 250;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_77);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[25];
            tmp_dict_value_10 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[11];
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_80 == NULL));
            tmp_expression_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[76]);
            if (tmp_expression_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_39 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_subscript_value_39 == NULL)) {
                tmp_subscript_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_subscript_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_79);

                exception_lineno = 252;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_39);
            Py_DECREF(tmp_expression_value_79);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[12];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[13];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[14];
            tmp_dict_value_10 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[78];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_kw_defaults_5);
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;


        tmp_assign_source_26 = MAKE_FUNCTION_httpx$_api$$$function__5_head(tmp_kw_defaults_5, tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_kw_defaults_6;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_dict_key_11 = mod_consts[18];
        tmp_dict_value_11 = Py_None;
        tmp_kw_defaults_6 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[19];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[20];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[21];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[22];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[23];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[9];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[24];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[10];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[25];
        tmp_dict_value_11 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[11];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[12];
        tmp_dict_value_11 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[13];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[14];
        tmp_dict_value_11 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_kw_defaults_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;
        tmp_dict_key_12 = mod_consts[17];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_6);

            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 16 );
        {
            PyObject *tmp_expression_value_81;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_subscript_value_42;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_subscript_value_43;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_subscript_value_44;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_subscript_value_45;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_subscript_value_47;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_subscript_value_48;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_subscript_value_49;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[18];
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_82 == NULL));
            tmp_expression_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[76]);
            if (tmp_expression_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_40 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_subscript_value_40 == NULL)) {
                tmp_subscript_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_subscript_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_81);

                exception_lineno = 284;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_40);
            Py_DECREF(tmp_expression_value_81);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[19];
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_84 == NULL));
            tmp_expression_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[76]);
            if (tmp_expression_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_41 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_subscript_value_41 == NULL)) {
                tmp_subscript_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
            }

            if (tmp_subscript_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_83);

                exception_lineno = 285;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_83);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[20];
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_86 == NULL));
            tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[76]);
            if (tmp_expression_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_42 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[72]);

            if (unlikely(tmp_subscript_value_42 == NULL)) {
                tmp_subscript_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
            }

            if (tmp_subscript_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_85);

                exception_lineno = 286;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_42);
            Py_DECREF(tmp_expression_value_85);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[21];
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_88 == NULL));
            tmp_expression_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[76]);
            if (tmp_expression_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto dict_build_exception_12;
            }
            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_89 == NULL)) {
                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_89 == NULL));
            tmp_subscript_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[77]);
            if (tmp_subscript_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_87);

                exception_lineno = 287;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_87, tmp_subscript_value_43);
            Py_DECREF(tmp_expression_value_87);
            Py_DECREF(tmp_subscript_value_43);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[22];
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_91 == NULL));
            tmp_expression_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[76]);
            if (tmp_expression_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_44 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_subscript_value_44 == NULL)) {
                tmp_subscript_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
            }

            if (tmp_subscript_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_90);

                exception_lineno = 288;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_90, tmp_subscript_value_44);
            Py_DECREF(tmp_expression_value_90);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[23];
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_93 == NULL));
            tmp_expression_value_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[76]);
            if (tmp_expression_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_45 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_subscript_value_45 == NULL)) {
                tmp_subscript_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_subscript_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_92);

                exception_lineno = 289;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_92, tmp_subscript_value_45);
            Py_DECREF(tmp_expression_value_92);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[9];
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_95 == NULL));
            tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[76]);
            if (tmp_expression_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_46 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_subscript_value_46 == NULL)) {
                tmp_subscript_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
            }

            if (tmp_subscript_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_94);

                exception_lineno = 290;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_94, tmp_subscript_value_46);
            Py_DECREF(tmp_expression_value_94);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[24];
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_97 == NULL));
            tmp_expression_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[76]);
            if (tmp_expression_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_47 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_subscript_value_47 == NULL)) {
                tmp_subscript_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_subscript_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_96);

                exception_lineno = 291;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_96, tmp_subscript_value_47);
            Py_DECREF(tmp_expression_value_96);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[10];
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_99 == NULL));
            tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[76]);
            if (tmp_expression_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_48 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_subscript_value_48 == NULL)) {
                tmp_subscript_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
            }

            if (tmp_subscript_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_98);

                exception_lineno = 292;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_98, tmp_subscript_value_48);
            Py_DECREF(tmp_expression_value_98);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[25];
            tmp_dict_value_12 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[11];
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_101 == NULL));
            tmp_expression_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[76]);
            if (tmp_expression_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_49 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_subscript_value_49 == NULL)) {
                tmp_subscript_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_subscript_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_100);

                exception_lineno = 294;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_100, tmp_subscript_value_49);
            Py_DECREF(tmp_expression_value_100);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[12];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[13];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[14];
            tmp_dict_value_12 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[78];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_kw_defaults_6);
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;


        tmp_assign_source_27 = MAKE_FUNCTION_httpx$_api$$$function__6_post(tmp_kw_defaults_6, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_kw_defaults_7;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_dict_key_13 = mod_consts[18];
        tmp_dict_value_13 = Py_None;
        tmp_kw_defaults_7 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[19];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[20];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[21];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[22];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[23];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[9];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[24];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[10];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[25];
        tmp_dict_value_13 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[11];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[12];
        tmp_dict_value_13 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[13];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto dict_build_exception_13;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[14];
        tmp_dict_value_13 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_kw_defaults_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;
        tmp_dict_key_14 = mod_consts[17];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_7);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 16 );
        {
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_subscript_value_50;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_subscript_value_51;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_subscript_value_52;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_subscript_value_53;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_subscript_value_54;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_subscript_value_55;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_subscript_value_56;
            PyObject *tmp_expression_value_117;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_subscript_value_57;
            PyObject *tmp_expression_value_119;
            PyObject *tmp_expression_value_120;
            PyObject *tmp_subscript_value_58;
            PyObject *tmp_expression_value_121;
            PyObject *tmp_expression_value_122;
            PyObject *tmp_subscript_value_59;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[18];
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_103 == NULL));
            tmp_expression_value_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[76]);
            if (tmp_expression_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_50 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_subscript_value_50 == NULL)) {
                tmp_subscript_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_subscript_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_102);

                exception_lineno = 327;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_102, tmp_subscript_value_50);
            Py_DECREF(tmp_expression_value_102);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[19];
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_105 == NULL));
            tmp_expression_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[76]);
            if (tmp_expression_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_51 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_subscript_value_51 == NULL)) {
                tmp_subscript_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
            }

            if (tmp_subscript_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_104);

                exception_lineno = 328;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_104, tmp_subscript_value_51);
            Py_DECREF(tmp_expression_value_104);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[20];
            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_107 == NULL)) {
                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_107 == NULL));
            tmp_expression_value_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[76]);
            if (tmp_expression_value_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_52 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[72]);

            if (unlikely(tmp_subscript_value_52 == NULL)) {
                tmp_subscript_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
            }

            if (tmp_subscript_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_106);

                exception_lineno = 329;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_106, tmp_subscript_value_52);
            Py_DECREF(tmp_expression_value_106);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[21];
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_109 == NULL));
            tmp_expression_value_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[76]);
            if (tmp_expression_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto dict_build_exception_14;
            }
            tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_110 == NULL)) {
                tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_110 == NULL));
            tmp_subscript_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[77]);
            if (tmp_subscript_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_108);

                exception_lineno = 330;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_108, tmp_subscript_value_53);
            Py_DECREF(tmp_expression_value_108);
            Py_DECREF(tmp_subscript_value_53);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[22];
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_112 == NULL));
            tmp_expression_value_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[76]);
            if (tmp_expression_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_54 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_subscript_value_54 == NULL)) {
                tmp_subscript_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
            }

            if (tmp_subscript_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_111);

                exception_lineno = 331;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_111, tmp_subscript_value_54);
            Py_DECREF(tmp_expression_value_111);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[23];
            tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_114 == NULL)) {
                tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_114 == NULL));
            tmp_expression_value_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[76]);
            if (tmp_expression_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_55 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_subscript_value_55 == NULL)) {
                tmp_subscript_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_subscript_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_113);

                exception_lineno = 332;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_113, tmp_subscript_value_55);
            Py_DECREF(tmp_expression_value_113);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[9];
            tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_116 == NULL)) {
                tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_116 == NULL));
            tmp_expression_value_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[76]);
            if (tmp_expression_value_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_56 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_subscript_value_56 == NULL)) {
                tmp_subscript_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
            }

            if (tmp_subscript_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_115);

                exception_lineno = 333;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_115, tmp_subscript_value_56);
            Py_DECREF(tmp_expression_value_115);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[24];
            tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_118 == NULL)) {
                tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_118 == NULL));
            tmp_expression_value_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[76]);
            if (tmp_expression_value_117 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_57 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_subscript_value_57 == NULL)) {
                tmp_subscript_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_subscript_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_117);

                exception_lineno = 334;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_117, tmp_subscript_value_57);
            Py_DECREF(tmp_expression_value_117);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[10];
            tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_120 == NULL)) {
                tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_120 == NULL));
            tmp_expression_value_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[76]);
            if (tmp_expression_value_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_58 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_subscript_value_58 == NULL)) {
                tmp_subscript_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
            }

            if (tmp_subscript_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_119);

                exception_lineno = 335;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_119, tmp_subscript_value_58);
            Py_DECREF(tmp_expression_value_119);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[25];
            tmp_dict_value_14 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[11];
            tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_122 == NULL)) {
                tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_122 == NULL));
            tmp_expression_value_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[76]);
            if (tmp_expression_value_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_59 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_subscript_value_59 == NULL)) {
                tmp_subscript_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_subscript_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_121);

                exception_lineno = 337;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_121, tmp_subscript_value_59);
            Py_DECREF(tmp_expression_value_121);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[12];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[13];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[14];
            tmp_dict_value_14 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[78];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_kw_defaults_7);
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;


        tmp_assign_source_28 = MAKE_FUNCTION_httpx$_api$$$function__7_put(tmp_kw_defaults_7, tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_kw_defaults_8;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        tmp_dict_key_15 = mod_consts[18];
        tmp_dict_value_15 = Py_None;
        tmp_kw_defaults_8 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[19];
        tmp_dict_value_15 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[20];
        tmp_dict_value_15 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[21];
        tmp_dict_value_15 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[22];
        tmp_dict_value_15 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[23];
        tmp_dict_value_15 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[9];
        tmp_dict_value_15 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[24];
        tmp_dict_value_15 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[10];
        tmp_dict_value_15 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[25];
        tmp_dict_value_15 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[11];
        tmp_dict_value_15 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[12];
        tmp_dict_value_15 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[13];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto dict_build_exception_15;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[14];
        tmp_dict_value_15 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_15;
        // Exception handling pass through code for dict_build:
        dict_build_exception_15:;
        Py_DECREF(tmp_kw_defaults_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_15:;
        tmp_dict_key_16 = mod_consts[17];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_8);

            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 16 );
        {
            PyObject *tmp_expression_value_123;
            PyObject *tmp_expression_value_124;
            PyObject *tmp_subscript_value_60;
            PyObject *tmp_expression_value_125;
            PyObject *tmp_expression_value_126;
            PyObject *tmp_subscript_value_61;
            PyObject *tmp_expression_value_127;
            PyObject *tmp_expression_value_128;
            PyObject *tmp_subscript_value_62;
            PyObject *tmp_expression_value_129;
            PyObject *tmp_expression_value_130;
            PyObject *tmp_subscript_value_63;
            PyObject *tmp_expression_value_131;
            PyObject *tmp_expression_value_132;
            PyObject *tmp_expression_value_133;
            PyObject *tmp_subscript_value_64;
            PyObject *tmp_expression_value_134;
            PyObject *tmp_expression_value_135;
            PyObject *tmp_subscript_value_65;
            PyObject *tmp_expression_value_136;
            PyObject *tmp_expression_value_137;
            PyObject *tmp_subscript_value_66;
            PyObject *tmp_expression_value_138;
            PyObject *tmp_expression_value_139;
            PyObject *tmp_subscript_value_67;
            PyObject *tmp_expression_value_140;
            PyObject *tmp_expression_value_141;
            PyObject *tmp_subscript_value_68;
            PyObject *tmp_expression_value_142;
            PyObject *tmp_expression_value_143;
            PyObject *tmp_subscript_value_69;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[18];
            tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_124 == NULL)) {
                tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_124 == NULL));
            tmp_expression_value_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[76]);
            if (tmp_expression_value_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_60 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_subscript_value_60 == NULL)) {
                tmp_subscript_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_subscript_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_123);

                exception_lineno = 370;

                goto dict_build_exception_16;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_123, tmp_subscript_value_60);
            Py_DECREF(tmp_expression_value_123);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[19];
            tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_126 == NULL)) {
                tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_126 == NULL));
            tmp_expression_value_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[76]);
            if (tmp_expression_value_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_61 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_subscript_value_61 == NULL)) {
                tmp_subscript_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
            }

            if (tmp_subscript_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_125);

                exception_lineno = 371;

                goto dict_build_exception_16;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_125, tmp_subscript_value_61);
            Py_DECREF(tmp_expression_value_125);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[20];
            tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_128 == NULL)) {
                tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_128 == NULL));
            tmp_expression_value_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[76]);
            if (tmp_expression_value_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_62 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[72]);

            if (unlikely(tmp_subscript_value_62 == NULL)) {
                tmp_subscript_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
            }

            if (tmp_subscript_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_127);

                exception_lineno = 372;

                goto dict_build_exception_16;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_127, tmp_subscript_value_62);
            Py_DECREF(tmp_expression_value_127);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[21];
            tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_130 == NULL)) {
                tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_130 == NULL));
            tmp_expression_value_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[76]);
            if (tmp_expression_value_129 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto dict_build_exception_16;
            }
            tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_131 == NULL)) {
                tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_131 == NULL));
            tmp_subscript_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[77]);
            if (tmp_subscript_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_129);

                exception_lineno = 373;

                goto dict_build_exception_16;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_129, tmp_subscript_value_63);
            Py_DECREF(tmp_expression_value_129);
            Py_DECREF(tmp_subscript_value_63);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[22];
            tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_133 == NULL)) {
                tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_133 == NULL));
            tmp_expression_value_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[76]);
            if (tmp_expression_value_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_64 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_subscript_value_64 == NULL)) {
                tmp_subscript_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
            }

            if (tmp_subscript_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_132);

                exception_lineno = 374;

                goto dict_build_exception_16;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_132, tmp_subscript_value_64);
            Py_DECREF(tmp_expression_value_132);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[23];
            tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_135 == NULL)) {
                tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_135 == NULL));
            tmp_expression_value_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[76]);
            if (tmp_expression_value_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_65 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_subscript_value_65 == NULL)) {
                tmp_subscript_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_subscript_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_134);

                exception_lineno = 375;

                goto dict_build_exception_16;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_134, tmp_subscript_value_65);
            Py_DECREF(tmp_expression_value_134);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[9];
            tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_137 == NULL)) {
                tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_137 == NULL));
            tmp_expression_value_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[76]);
            if (tmp_expression_value_136 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_66 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_subscript_value_66 == NULL)) {
                tmp_subscript_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
            }

            if (tmp_subscript_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_136);

                exception_lineno = 376;

                goto dict_build_exception_16;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_136, tmp_subscript_value_66);
            Py_DECREF(tmp_expression_value_136);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[24];
            tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_139 == NULL)) {
                tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_139 == NULL));
            tmp_expression_value_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[76]);
            if (tmp_expression_value_138 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_67 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_subscript_value_67 == NULL)) {
                tmp_subscript_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_subscript_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_138);

                exception_lineno = 377;

                goto dict_build_exception_16;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_138, tmp_subscript_value_67);
            Py_DECREF(tmp_expression_value_138);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[10];
            tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_141 == NULL)) {
                tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_141 == NULL));
            tmp_expression_value_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[76]);
            if (tmp_expression_value_140 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_68 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_subscript_value_68 == NULL)) {
                tmp_subscript_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
            }

            if (tmp_subscript_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_140);

                exception_lineno = 378;

                goto dict_build_exception_16;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_140, tmp_subscript_value_68);
            Py_DECREF(tmp_expression_value_140);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[25];
            tmp_dict_value_16 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[11];
            tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_143 == NULL)) {
                tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_143 == NULL));
            tmp_expression_value_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[76]);
            if (tmp_expression_value_142 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_69 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_subscript_value_69 == NULL)) {
                tmp_subscript_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_subscript_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_142);

                exception_lineno = 380;

                goto dict_build_exception_16;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_142, tmp_subscript_value_69);
            Py_DECREF(tmp_expression_value_142);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[12];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[13];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[14];
            tmp_dict_value_16 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[78];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_16;
        // Exception handling pass through code for dict_build:
        dict_build_exception_16:;
        Py_DECREF(tmp_kw_defaults_8);
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_16:;


        tmp_assign_source_29 = MAKE_FUNCTION_httpx$_api$$$function__8_patch(tmp_kw_defaults_8, tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_kw_defaults_9;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        tmp_dict_key_17 = mod_consts[22];
        tmp_dict_value_17 = Py_None;
        tmp_kw_defaults_9 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[23];
        tmp_dict_value_17 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[9];
        tmp_dict_value_17 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[24];
        tmp_dict_value_17 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[10];
        tmp_dict_value_17 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[25];
        tmp_dict_value_17 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[11];
        tmp_dict_value_17 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[12];
        tmp_dict_value_17 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[13];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto dict_build_exception_17;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[14];
        tmp_dict_value_17 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_17;
        // Exception handling pass through code for dict_build:
        dict_build_exception_17:;
        Py_DECREF(tmp_kw_defaults_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_17:;
        tmp_dict_key_18 = mod_consts[17];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_9);

            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 12 );
        {
            PyObject *tmp_expression_value_144;
            PyObject *tmp_expression_value_145;
            PyObject *tmp_subscript_value_70;
            PyObject *tmp_expression_value_146;
            PyObject *tmp_expression_value_147;
            PyObject *tmp_subscript_value_71;
            PyObject *tmp_expression_value_148;
            PyObject *tmp_expression_value_149;
            PyObject *tmp_subscript_value_72;
            PyObject *tmp_expression_value_150;
            PyObject *tmp_expression_value_151;
            PyObject *tmp_subscript_value_73;
            PyObject *tmp_expression_value_152;
            PyObject *tmp_expression_value_153;
            PyObject *tmp_subscript_value_74;
            PyObject *tmp_expression_value_154;
            PyObject *tmp_expression_value_155;
            PyObject *tmp_subscript_value_75;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[22];
            tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_145 == NULL)) {
                tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_145 == NULL));
            tmp_expression_value_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts[76]);
            if (tmp_expression_value_144 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;

                goto dict_build_exception_18;
            }
            tmp_subscript_value_70 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_subscript_value_70 == NULL)) {
                tmp_subscript_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
            }

            if (tmp_subscript_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_144);

                exception_lineno = 413;

                goto dict_build_exception_18;
            }
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_144, tmp_subscript_value_70);
            Py_DECREF(tmp_expression_value_144);
            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[23];
            tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_147 == NULL)) {
                tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_147 == NULL));
            tmp_expression_value_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[76]);
            if (tmp_expression_value_146 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;

                goto dict_build_exception_18;
            }
            tmp_subscript_value_71 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_subscript_value_71 == NULL)) {
                tmp_subscript_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_subscript_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_146);

                exception_lineno = 414;

                goto dict_build_exception_18;
            }
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_146, tmp_subscript_value_71);
            Py_DECREF(tmp_expression_value_146);
            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[9];
            tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_149 == NULL)) {
                tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_149 == NULL));
            tmp_expression_value_148 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts[76]);
            if (tmp_expression_value_148 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 415;

                goto dict_build_exception_18;
            }
            tmp_subscript_value_72 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_subscript_value_72 == NULL)) {
                tmp_subscript_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
            }

            if (tmp_subscript_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_148);

                exception_lineno = 415;

                goto dict_build_exception_18;
            }
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_148, tmp_subscript_value_72);
            Py_DECREF(tmp_expression_value_148);
            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 415;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[24];
            tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_151 == NULL)) {
                tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_151 == NULL));
            tmp_expression_value_150 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts[76]);
            if (tmp_expression_value_150 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto dict_build_exception_18;
            }
            tmp_subscript_value_73 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_subscript_value_73 == NULL)) {
                tmp_subscript_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_subscript_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_150);

                exception_lineno = 416;

                goto dict_build_exception_18;
            }
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_150, tmp_subscript_value_73);
            Py_DECREF(tmp_expression_value_150);
            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[10];
            tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_153 == NULL)) {
                tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_153 == NULL));
            tmp_expression_value_152 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[76]);
            if (tmp_expression_value_152 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;

                goto dict_build_exception_18;
            }
            tmp_subscript_value_74 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_subscript_value_74 == NULL)) {
                tmp_subscript_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
            }

            if (tmp_subscript_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_152);

                exception_lineno = 417;

                goto dict_build_exception_18;
            }
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_152, tmp_subscript_value_74);
            Py_DECREF(tmp_expression_value_152);
            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[25];
            tmp_dict_value_18 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[11];
            tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_155 == NULL)) {
                tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            assert(!(tmp_expression_value_155 == NULL));
            tmp_expression_value_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts[76]);
            if (tmp_expression_value_154 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;

                goto dict_build_exception_18;
            }
            tmp_subscript_value_75 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_subscript_value_75 == NULL)) {
                tmp_subscript_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_subscript_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_154);

                exception_lineno = 419;

                goto dict_build_exception_18;
            }
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_154, tmp_subscript_value_75);
            Py_DECREF(tmp_expression_value_154);
            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[12];
            tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_dict_value_18 == NULL)) {
                tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[13];
            tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_dict_value_18 == NULL)) {
                tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[14];
            tmp_dict_value_18 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[78];
            tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_18 == NULL)) {
                tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_18;
        // Exception handling pass through code for dict_build:
        dict_build_exception_18:;
        Py_DECREF(tmp_kw_defaults_9);
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_18:;


        tmp_assign_source_30 = MAKE_FUNCTION_httpx$_api$$$function__9_delete(tmp_kw_defaults_9, tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_30);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2934964d3c91829671a58654f60796b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2934964d3c91829671a58654f60796b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2934964d3c91829671a58654f60796b6, exception_lineno);
    }



    assertFrameObject(frame_2934964d3c91829671a58654f60796b6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_api", false);

    Py_INCREF(module_httpx$_api);
    return module_httpx$_api;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_api", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
