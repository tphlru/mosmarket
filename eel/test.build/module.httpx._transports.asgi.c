/* Generated code for Python module 'httpx$_transports$asgi'
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

/* The "module_httpx$_transports$asgi" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_transports$asgi;
PyDictObject *moduledict_httpx$_transports$asgi;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[137];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[137];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("httpx._transports.asgi"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 137; i++) {
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
void checkModuleConstants_httpx$_transports$asgi(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 137; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_23697e045d529c1f628a42b87b13d114;
static PyCodeObject *codeobj_8313ae13447c61382f169fd4e2e4bd88;
static PyCodeObject *codeobj_81f9eb2e2795c15734666dbe98f6f5e6;
static PyCodeObject *codeobj_e62d7365244a20ca394647f75f4a3171;
static PyCodeObject *codeobj_ed352aa686d7314ed782b8140f11a7e4;
static PyCodeObject *codeobj_07d844954a5dd1327776de5bdf08a17e;
static PyCodeObject *codeobj_5687312e2748e0955a68ca1eacc71def;
static PyCodeObject *codeobj_dc4664d604d3c9dce0cab8a762b0f483;
static PyCodeObject *codeobj_895031df02863823ba04f78fa6755a2e;
static PyCodeObject *codeobj_ef9046602766af1a3ba2770584c4bf13;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[124]); CHECK_OBJECT(module_filename_obj);
    codeobj_23697e045d529c1f628a42b87b13d114 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[125], mod_consts[125], NULL, NULL, 0, 0, 0);
    codeobj_8313ae13447c61382f169fd4e2e4bd88 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[126], NULL, 0, 0, 0);
    codeobj_81f9eb2e2795c15734666dbe98f6f5e6 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[126], NULL, 0, 0, 0);
    codeobj_e62d7365244a20ca394647f75f4a3171 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[127], NULL, 1, 0, 0);
    codeobj_ed352aa686d7314ed782b8140f11a7e4 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[128], NULL, 5, 0, 0);
    codeobj_07d844954a5dd1327776de5bdf08a17e = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[129], NULL, 2, 0, 0);
    codeobj_5687312e2748e0955a68ca1eacc71def = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[130], NULL, 0, 0, 0);
    codeobj_dc4664d604d3c9dce0cab8a762b0f483 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[131], NULL, 2, 0, 0);
    codeobj_895031df02863823ba04f78fa6755a2e = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[43], mod_consts[132], mod_consts[133], 0, 0, 0);
    codeobj_ef9046602766af1a3ba2770584c4bf13 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[46], mod_consts[46], mod_consts[134], mod_consts[135], 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_ASYNCGEN_httpx$_transports$asgi$$$function__3___aiter__$$$asyncgen__1___aiter__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__1_create_event(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__2___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__3___aiter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__4___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__5_handle_async_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send(PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_httpx$_transports$asgi$$$function__1_create_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_trio = NULL;
    PyObject *var_asyncio = NULL;
    struct Nuitka_FrameObject *frame_5687312e2748e0955a68ca1eacc71def;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5687312e2748e0955a68ca1eacc71def = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5687312e2748e0955a68ca1eacc71def)) {
        Py_XDECREF(cache_frame_5687312e2748e0955a68ca1eacc71def);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5687312e2748e0955a68ca1eacc71def == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5687312e2748e0955a68ca1eacc71def = MAKE_FUNCTION_FRAME(tstate, codeobj_5687312e2748e0955a68ca1eacc71def, module_httpx$_transports$asgi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5687312e2748e0955a68ca1eacc71def->m_type_description == NULL);
    frame_5687312e2748e0955a68ca1eacc71def = cache_frame_5687312e2748e0955a68ca1eacc71def;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5687312e2748e0955a68ca1eacc71def);
    assert(Py_REFCNT(frame_5687312e2748e0955a68ca1eacc71def) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5687312e2748e0955a68ca1eacc71def->m_frame.f_lineno = 28;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[1]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[2];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_transports$asgi;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_5687312e2748e0955a68ca1eacc71def->m_frame.f_lineno = 29;
        tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_trio == NULL);
        var_trio = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_trio);
        tmp_called_instance_2 = var_trio;
        frame_5687312e2748e0955a68ca1eacc71def->m_frame.f_lineno = 31;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[4]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[5];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_transports$asgi;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[3];
        frame_5687312e2748e0955a68ca1eacc71def->m_frame.f_lineno = 33;
        tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_asyncio == NULL);
        var_asyncio = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_asyncio);
        tmp_called_instance_3 = var_asyncio;
        frame_5687312e2748e0955a68ca1eacc71def->m_frame.f_lineno = 35;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[4]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5687312e2748e0955a68ca1eacc71def, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5687312e2748e0955a68ca1eacc71def->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5687312e2748e0955a68ca1eacc71def, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5687312e2748e0955a68ca1eacc71def,
        type_description_1,
        var_trio,
        var_asyncio
    );


    // Release cached frame if used for exception.
    if (frame_5687312e2748e0955a68ca1eacc71def == cache_frame_5687312e2748e0955a68ca1eacc71def) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5687312e2748e0955a68ca1eacc71def);
        cache_frame_5687312e2748e0955a68ca1eacc71def = NULL;
    }

    assertFrameObject(frame_5687312e2748e0955a68ca1eacc71def);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_trio);
    var_trio = NULL;
    Py_XDECREF(var_asyncio);
    var_asyncio = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_trio);
    var_trio = NULL;
    Py_XDECREF(var_asyncio);
    var_asyncio = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_transports$asgi$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_body = python_pars[1];
    struct Nuitka_FrameObject *frame_07d844954a5dd1327776de5bdf08a17e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_07d844954a5dd1327776de5bdf08a17e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_07d844954a5dd1327776de5bdf08a17e)) {
        Py_XDECREF(cache_frame_07d844954a5dd1327776de5bdf08a17e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07d844954a5dd1327776de5bdf08a17e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07d844954a5dd1327776de5bdf08a17e = MAKE_FUNCTION_FRAME(tstate, codeobj_07d844954a5dd1327776de5bdf08a17e, module_httpx$_transports$asgi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_07d844954a5dd1327776de5bdf08a17e->m_type_description == NULL);
    frame_07d844954a5dd1327776de5bdf08a17e = cache_frame_07d844954a5dd1327776de5bdf08a17e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_07d844954a5dd1327776de5bdf08a17e);
    assert(Py_REFCNT(frame_07d844954a5dd1327776de5bdf08a17e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_body);
        tmp_assattr_value_1 = par_body;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_07d844954a5dd1327776de5bdf08a17e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07d844954a5dd1327776de5bdf08a17e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07d844954a5dd1327776de5bdf08a17e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07d844954a5dd1327776de5bdf08a17e,
        type_description_1,
        par_self,
        par_body
    );


    // Release cached frame if used for exception.
    if (frame_07d844954a5dd1327776de5bdf08a17e == cache_frame_07d844954a5dd1327776de5bdf08a17e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_07d844954a5dd1327776de5bdf08a17e);
        cache_frame_07d844954a5dd1327776de5bdf08a17e = NULL;
    }

    assertFrameObject(frame_07d844954a5dd1327776de5bdf08a17e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_transports$asgi$$$function__3___aiter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_ASYNCGEN_httpx$_transports$asgi$$$function__3___aiter__$$$asyncgen__1___aiter__(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpx$_transports$asgi$$$function__3___aiter__$$$asyncgen__1___aiter___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
};
#endif

static PyObject *httpx$_transports$asgi$$$function__3___aiter__$$$asyncgen__1___aiter___context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpx$_transports$asgi$$$function__3___aiter__$$$asyncgen__1___aiter___locals *asyncgen_heap = (struct httpx$_transports$asgi$$$function__3___aiter__$$$asyncgen__1___aiter___locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(asyncgen->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    asyncgen_heap->type_description_1 = NULL;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_e62d7365244a20ca394647f75f4a3171, module_httpx$_transports$asgi, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    asyncgen->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(asyncgen->m_frame);
    assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

    assert(asyncgen->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, asyncgen->m_frame);
    assert(Py_REFCNT(asyncgen->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_bytes_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_bytes_arg_value_1 = mod_consts[7];
        if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[8]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 43;
            asyncgen_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
        tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
        if (tmp_iterable_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 43;
            asyncgen_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 43;
            asyncgen_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_bytes_arg_value_1, sizeof(PyObject *), &tmp_iterable_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        asyncgen->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_bytes_arg_value_1, sizeof(PyObject *), &tmp_iterable_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 43;
            asyncgen_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }

    // Release exception attached to the frame
    DROP_ASYNCGEN_EXCEPTION(asyncgen);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, asyncgen_heap->exception_type)) {
        if (asyncgen_heap->exception_tb == NULL) {
            asyncgen_heap->exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        } else if (asyncgen_heap->exception_tb->tb_frame != &asyncgen->m_frame->m_frame) {
            asyncgen_heap->exception_tb = ADD_TRACEBACK(asyncgen_heap->exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            asyncgen->m_frame,
            asyncgen_heap->type_description_1,
            asyncgen->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(asyncgen->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(asyncgen));
#endif
    Py_CLEAR(EXC_VALUE_F(asyncgen));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(asyncgen));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    assert(asyncgen_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, asyncgen_heap->exception_type, asyncgen_heap->exception_value, asyncgen_heap->exception_tb);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_httpx$_transports$asgi$$$function__3___aiter__$$$asyncgen__1___aiter__(struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        httpx$_transports$asgi$$$function__3___aiter__$$$asyncgen__1___aiter___context,
        module_httpx$_transports$asgi,
        mod_consts[9],
        mod_consts[10],
        codeobj_e62d7365244a20ca394647f75f4a3171,
        closure,
        1,
#if 1
        sizeof(struct httpx$_transports$asgi$$$function__3___aiter__$$$asyncgen__1___aiter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$asgi$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_app = python_pars[1];
    PyObject *par_raise_app_exceptions = python_pars[2];
    PyObject *par_root_path = python_pars[3];
    PyObject *par_client = python_pars[4];
    struct Nuitka_FrameObject *frame_ed352aa686d7314ed782b8140f11a7e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ed352aa686d7314ed782b8140f11a7e4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ed352aa686d7314ed782b8140f11a7e4)) {
        Py_XDECREF(cache_frame_ed352aa686d7314ed782b8140f11a7e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed352aa686d7314ed782b8140f11a7e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed352aa686d7314ed782b8140f11a7e4 = MAKE_FUNCTION_FRAME(tstate, codeobj_ed352aa686d7314ed782b8140f11a7e4, module_httpx$_transports$asgi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ed352aa686d7314ed782b8140f11a7e4->m_type_description == NULL);
    frame_ed352aa686d7314ed782b8140f11a7e4 = cache_frame_ed352aa686d7314ed782b8140f11a7e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ed352aa686d7314ed782b8140f11a7e4);
    assert(Py_REFCNT(frame_ed352aa686d7314ed782b8140f11a7e4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_app);
        tmp_assattr_value_1 = par_app;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_raise_app_exceptions);
        tmp_assattr_value_2 = par_raise_app_exceptions;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_root_path);
        tmp_assattr_value_3 = par_root_path;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[13], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_client);
        tmp_assattr_value_4 = par_client;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[14], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ed352aa686d7314ed782b8140f11a7e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed352aa686d7314ed782b8140f11a7e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed352aa686d7314ed782b8140f11a7e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed352aa686d7314ed782b8140f11a7e4,
        type_description_1,
        par_self,
        par_app,
        par_raise_app_exceptions,
        par_root_path,
        par_client
    );


    // Release cached frame if used for exception.
    if (frame_ed352aa686d7314ed782b8140f11a7e4 == cache_frame_ed352aa686d7314ed782b8140f11a7e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ed352aa686d7314ed782b8140f11a7e4);
        cache_frame_ed352aa686d7314ed782b8140f11a7e4 = NULL;
    }

    assertFrameObject(frame_ed352aa686d7314ed782b8140f11a7e4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_raise_app_exceptions);
    Py_DECREF(par_raise_app_exceptions);
    CHECK_OBJECT(par_root_path);
    Py_DECREF(par_root_path);
    CHECK_OBJECT(par_client);
    Py_DECREF(par_client);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_raise_app_exceptions);
    Py_DECREF(par_raise_app_exceptions);
    CHECK_OBJECT(par_root_path);
    Py_DECREF(par_root_path);
    CHECK_OBJECT(par_client);
    Py_DECREF(par_client);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_transports$asgi$$$function__5_handle_async_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_request = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_request;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_COROUTINE_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request(tstate, tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_locals {
    PyObject *var_scope;
    struct Nuitka_CellObject *var_request_body_chunks;
    struct Nuitka_CellObject *var_request_complete;
    struct Nuitka_CellObject *var_status_code;
    struct Nuitka_CellObject *var_response_headers;
    struct Nuitka_CellObject *var_body_parts;
    struct Nuitka_CellObject *var_response_started;
    struct Nuitka_CellObject *var_response_complete;
    PyObject *var_receive;
    PyObject *var_send;
    PyObject *var_stream;
    PyObject *outline_0_var_k;
    PyObject *outline_0_var_v;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter;
    PyObject *tmp_listcomp_1__$0;
    PyObject *tmp_listcomp_1__contraction;
    PyObject *tmp_listcomp_1__iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
};
#endif

static PyObject *httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_locals *coroutine_heap = (struct httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_scope = NULL;
    coroutine_heap->var_request_body_chunks = Nuitka_Cell_Empty();
    coroutine_heap->var_request_complete = Nuitka_Cell_Empty();
    coroutine_heap->var_status_code = Nuitka_Cell_Empty();
    coroutine_heap->var_response_headers = Nuitka_Cell_Empty();
    coroutine_heap->var_body_parts = Nuitka_Cell_Empty();
    coroutine_heap->var_response_started = Nuitka_Cell_Empty();
    coroutine_heap->var_response_complete = Nuitka_Cell_Empty();
    coroutine_heap->var_receive = NULL;
    coroutine_heap->var_send = NULL;
    coroutine_heap->var_stream = NULL;
    coroutine_heap->outline_0_var_k = NULL;
    coroutine_heap->outline_0_var_v = NULL;
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    coroutine_heap->tmp_listcomp_1__$0 = NULL;
    coroutine_heap->tmp_listcomp_1__contraction = NULL;
    coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_dc4664d604d3c9dce0cab8a762b0f483, module_httpx$_transports$asgi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[15]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 95;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[16]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 95;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            coroutine_heap->exception_lineno = 95;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 95;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 95;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        coroutine_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        coroutine_heap->exception_lineno = 95;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccocccccccooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[18];
        tmp_dict_value_1 = mod_consts[19];
        tmp_assign_source_1 = _PyDict_NewPresized( 12 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[20];
            tmp_dict_value_1 = DICT_COPY(mod_consts[21]);
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[22];
            tmp_dict_value_1 = mod_consts[23];
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[24];
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[15]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 102;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 102;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[25];
            // Tried code:
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_expression_value_4;
                if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[15]);
                    coroutine_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                    CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

                    coroutine_heap->exception_lineno = 103;
                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    goto try_except_handler_2;
                }

                tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
                tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
                if (tmp_expression_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                    coroutine_heap->exception_lineno = 103;
                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    goto try_except_handler_2;
                }
                tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[26]);
                Py_DECREF(tmp_expression_value_3);
                if (tmp_iter_arg_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                    coroutine_heap->exception_lineno = 103;
                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
                Py_DECREF(tmp_iter_arg_1);
                if (tmp_assign_source_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                    coroutine_heap->exception_lineno = 103;
                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    goto try_except_handler_2;
                }
                assert(coroutine_heap->tmp_listcomp_1__$0 == NULL);
                coroutine_heap->tmp_listcomp_1__$0 = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
                assert(coroutine_heap->tmp_listcomp_1__contraction == NULL);
                coroutine_heap->tmp_listcomp_1__contraction = tmp_assign_source_3;
            }
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_4;
                CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
                tmp_next_source_1 = coroutine_heap->tmp_listcomp_1__$0;
                tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
                if (tmp_assign_source_4 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                        goto loop_end_1;
                    } else {

                        FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                        coroutine_heap->type_description_1 = "ccocccccccooo";
                        coroutine_heap->exception_lineno = 103;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = coroutine_heap->tmp_listcomp_1__iter_value_0;
                    coroutine_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_iter_arg_2;
                CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__iter_value_0);
                tmp_iter_arg_2 = coroutine_heap->tmp_listcomp_1__iter_value_0;
                tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
                if (tmp_assign_source_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                    coroutine_heap->exception_lineno = 103;
                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
                    coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_5;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
                tmp_unpack_1 = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
                if (tmp_assign_source_6 == NULL) {
                    if (!HAS_ERROR_OCCURRED(tstate)) {
                        coroutine_heap->exception_type = PyExc_StopIteration;
                        Py_INCREF(coroutine_heap->exception_type);
                        coroutine_heap->exception_value = NULL;
                        coroutine_heap->exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                    }


                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    coroutine_heap->exception_lineno = 103;
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1;
                    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_6;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
                tmp_unpack_2 = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
                if (tmp_assign_source_7 == NULL) {
                    if (!HAS_ERROR_OCCURRED(tstate)) {
                        coroutine_heap->exception_type = PyExc_StopIteration;
                        Py_INCREF(coroutine_heap->exception_type);
                        coroutine_heap->exception_value = NULL;
                        coroutine_heap->exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                    }


                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    coroutine_heap->exception_lineno = 103;
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2;
                    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_7;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_iterator_name_1;
                CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
                tmp_iterator_name_1 = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

                coroutine_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

                if (likely(coroutine_heap->tmp_iterator_attempt == NULL)) {
                    PyObject *error = GET_ERROR_OCCURRED(tstate);

                    if (error != NULL) {
                        if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                            CLEAR_ERROR_OCCURRED(tstate);
                        } else {
                            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

                            coroutine_heap->type_description_1 = "ccocccccccooo";
                            coroutine_heap->exception_lineno = 103;
                            goto try_except_handler_5;
                        }
                    }
                } else {
                    Py_DECREF(coroutine_heap->tmp_iterator_attempt);

                    coroutine_heap->exception_type = PyExc_ValueError;
                    Py_INCREF(PyExc_ValueError);
                    coroutine_heap->exception_value = mod_consts[27];
                    Py_INCREF(coroutine_heap->exception_value);
                    coroutine_heap->exception_tb = NULL;

                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    coroutine_heap->exception_lineno = 103;
                    goto try_except_handler_5;
                }
            }
            goto try_end_1;
            // Exception handler code:
            try_except_handler_5:;
            coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
            coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
            coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
            coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
            coroutine_heap->exception_type = NULL;
            coroutine_heap->exception_value = NULL;
            coroutine_heap->exception_tb = NULL;
            coroutine_heap->exception_lineno = 0;

            CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
            Py_DECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
            coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
            // Re-raise.
            coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_1;
            coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_1;
            coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_1;
            coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

            goto try_except_handler_4;
            // End of try:
            try_end_1:;
            goto try_end_2;
            // Exception handler code:
            try_except_handler_4:;
            coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
            coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
            coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
            coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
            coroutine_heap->exception_type = NULL;
            coroutine_heap->exception_value = NULL;
            coroutine_heap->exception_tb = NULL;
            coroutine_heap->exception_lineno = 0;

            Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1);
            coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;
            Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2);
            coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;
            // Re-raise.
            coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
            coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
            coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
            coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

            goto try_except_handler_3;
            // End of try:
            try_end_2:;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
            Py_DECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
            coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
            {
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1);
                tmp_assign_source_8 = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1;
                {
                    PyObject *old = coroutine_heap->outline_0_var_k;
                    coroutine_heap->outline_0_var_k = tmp_assign_source_8;
                    Py_INCREF(coroutine_heap->outline_0_var_k);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1);
            coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_9;
                CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2);
                tmp_assign_source_9 = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2;
                {
                    PyObject *old = coroutine_heap->outline_0_var_v;
                    coroutine_heap->outline_0_var_v = tmp_assign_source_9;
                    Py_INCREF(coroutine_heap->outline_0_var_v);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2);
            coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;

            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_called_value_1;
                PyObject *tmp_expression_value_5;
                CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
                tmp_append_list_1 = coroutine_heap->tmp_listcomp_1__contraction;
                CHECK_OBJECT(coroutine_heap->outline_0_var_k);
                tmp_expression_value_5 = coroutine_heap->outline_0_var_k;
                tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[28]);
                if (tmp_called_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                    coroutine_heap->exception_lineno = 103;
                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    goto try_except_handler_3;
                }
                coroutine->m_frame->m_frame.f_lineno = 103;
                tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
                Py_DECREF(tmp_called_value_1);
                if (tmp_tuple_element_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                    coroutine_heap->exception_lineno = 103;
                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    goto try_except_handler_3;
                }
                tmp_append_value_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_append_value_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(coroutine_heap->outline_0_var_v);
                tmp_tuple_element_1 = coroutine_heap->outline_0_var_v;
                PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_1);
                coroutine_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
                if (coroutine_heap->tmp_result == false) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                    coroutine_heap->exception_lineno = 103;
                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    goto try_except_handler_3;
                }
            }
            if (CONSIDER_THREADING(tstate) == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 103;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto try_except_handler_3;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
            tmp_dict_value_1 = coroutine_heap->tmp_listcomp_1__contraction;
            Py_INCREF(tmp_dict_value_1);
            goto try_return_handler_3;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
            Py_DECREF(coroutine_heap->tmp_listcomp_1__$0);
            coroutine_heap->tmp_listcomp_1__$0 = NULL;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
            Py_DECREF(coroutine_heap->tmp_listcomp_1__contraction);
            coroutine_heap->tmp_listcomp_1__contraction = NULL;
            Py_XDECREF(coroutine_heap->tmp_listcomp_1__iter_value_0);
            coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
            goto try_return_handler_2;
            // Exception handler code:
            try_except_handler_3:;
            coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
            coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
            coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
            coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
            coroutine_heap->exception_type = NULL;
            coroutine_heap->exception_value = NULL;
            coroutine_heap->exception_tb = NULL;
            coroutine_heap->exception_lineno = 0;

            CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
            Py_DECREF(coroutine_heap->tmp_listcomp_1__$0);
            coroutine_heap->tmp_listcomp_1__$0 = NULL;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
            Py_DECREF(coroutine_heap->tmp_listcomp_1__contraction);
            coroutine_heap->tmp_listcomp_1__contraction = NULL;
            Py_XDECREF(coroutine_heap->tmp_listcomp_1__iter_value_0);
            coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
            coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
            coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
            coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

            goto try_except_handler_2;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            Py_XDECREF(coroutine_heap->outline_0_var_k);
            coroutine_heap->outline_0_var_k = NULL;
            Py_XDECREF(coroutine_heap->outline_0_var_v);
            coroutine_heap->outline_0_var_v = NULL;
            goto outline_result_1;
            // Exception handler code:
            try_except_handler_2:;
            coroutine_heap->exception_keeper_type_4 = coroutine_heap->exception_type;
            coroutine_heap->exception_keeper_value_4 = coroutine_heap->exception_value;
            coroutine_heap->exception_keeper_tb_4 = coroutine_heap->exception_tb;
            coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
            coroutine_heap->exception_type = NULL;
            coroutine_heap->exception_value = NULL;
            coroutine_heap->exception_tb = NULL;
            coroutine_heap->exception_lineno = 0;

            Py_XDECREF(coroutine_heap->outline_0_var_k);
            coroutine_heap->outline_0_var_k = NULL;
            Py_XDECREF(coroutine_heap->outline_0_var_v);
            coroutine_heap->outline_0_var_v = NULL;
            // Re-raise.
            coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_4;
            coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_4;
            coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_4;
            coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

            goto outline_exception_1;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_1:;
            coroutine_heap->exception_lineno = 103;
            goto dict_build_exception_1;
            outline_result_1:;
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[29];
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[15]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 104;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[30]);
            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 104;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[29]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 104;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[31];
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[15]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 105;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[30]);
            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 105;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[31]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 105;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[32];
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[15]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 106;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[30]);
            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 106;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[32]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 106;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[33];
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[15]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 107;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_13 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[30]);
            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 107;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[34]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 107;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[35];
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[15]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 108;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[30]);
            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 108;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[36]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 108;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_16;
                PyObject *tmp_expression_value_17;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_2);
                if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[15]);
                    coroutine_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                    CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

                    coroutine_heap->exception_lineno = 108;
                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    goto tuple_build_exception_1;
                }

                tmp_expression_value_17 = Nuitka_Cell_GET(coroutine->m_closure[0]);
                tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[30]);
                if (tmp_expression_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                    coroutine_heap->exception_lineno = 108;
                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    goto tuple_build_exception_1;
                }
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[37]);
                Py_DECREF(tmp_expression_value_16);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                    coroutine_heap->exception_lineno = 108;
                    coroutine_heap->type_description_1 = "ccocccccccooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[14];
            if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[8]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 109;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_18 = Nuitka_Cell_GET(coroutine->m_closure[1]);
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[14]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 109;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[13];
            if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[8]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 110;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_19 = Nuitka_Cell_GET(coroutine->m_closure[1]);
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[13]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 110;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto dict_build_exception_1;
            }
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(coroutine_heap->var_scope == NULL);
        coroutine_heap->var_scope = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_20;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[15]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[16]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 114;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[9]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(coroutine_heap->var_request_body_chunks) == NULL);
        PyCell_SET(coroutine_heap->var_request_body_chunks, tmp_assign_source_10);

    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_False;
        assert(Nuitka_Cell_GET(coroutine_heap->var_request_complete) == NULL);
        Py_INCREF(tmp_assign_source_11);
        PyCell_SET(coroutine_heap->var_request_complete, tmp_assign_source_11);

    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_None;
        assert(Nuitka_Cell_GET(coroutine_heap->var_status_code) == NULL);
        Py_INCREF(tmp_assign_source_12);
        PyCell_SET(coroutine_heap->var_status_code, tmp_assign_source_12);

    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_None;
        assert(Nuitka_Cell_GET(coroutine_heap->var_response_headers) == NULL);
        Py_INCREF(tmp_assign_source_13);
        PyCell_SET(coroutine_heap->var_response_headers, tmp_assign_source_13);

    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_LIST_EMPTY(0);
        assert(Nuitka_Cell_GET(coroutine_heap->var_body_parts) == NULL);
        PyCell_SET(coroutine_heap->var_body_parts, tmp_assign_source_14);

    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_False;
        assert(Nuitka_Cell_GET(coroutine_heap->var_response_started) == NULL);
        Py_INCREF(tmp_assign_source_15);
        PyCell_SET(coroutine_heap->var_response_started, tmp_assign_source_15);

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 122;
        tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(coroutine_heap->var_response_complete) == NULL);
        PyCell_SET(coroutine_heap->var_response_complete, tmp_assign_source_16);

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_3;
        struct Nuitka_CellObject *tmp_closure_1[3];
        tmp_dict_key_2 = mod_consts[39];
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_expression_value_22 == NULL));
        tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[41]);
        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 126;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_23;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_3);
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            assert(!(tmp_expression_value_23 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[42]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 126;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_expression_value_21);
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_21);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 126;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(coroutine_heap->tmp_res != 0));

        tmp_closure_1[0] = coroutine_heap->var_request_body_chunks;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = coroutine_heap->var_request_complete;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = coroutine_heap->var_response_complete;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_17 = MAKE_FUNCTION_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive(tmp_annotations_1, tmp_closure_1);

        assert(coroutine_heap->var_receive == NULL);
        coroutine_heap->var_receive = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_4;
        struct Nuitka_CellObject *tmp_closure_2[6];
        tmp_dict_key_3 = mod_consts[45];
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 140;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[41]);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 140;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_26;
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_4);
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 140;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[42]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 140;
                coroutine_heap->type_description_1 = "ccocccccccooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_expression_value_24);
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_24);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 140;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(coroutine_heap->tmp_res != 0));
        tmp_dict_key_3 = mod_consts[39];
        tmp_dict_value_3 = Py_None;
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(coroutine_heap->tmp_res != 0));

        tmp_closure_2[0] = coroutine_heap->var_body_parts;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = coroutine->m_closure[0];
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = coroutine_heap->var_response_complete;
        Py_INCREF(tmp_closure_2[2]);
        tmp_closure_2[3] = coroutine_heap->var_response_headers;
        Py_INCREF(tmp_closure_2[3]);
        tmp_closure_2[4] = coroutine_heap->var_response_started;
        Py_INCREF(tmp_closure_2[4]);
        tmp_closure_2[5] = coroutine_heap->var_status_code;
        Py_INCREF(tmp_closure_2[5]);

        tmp_assign_source_18 = MAKE_FUNCTION_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send(tmp_annotations_2, tmp_closure_2);

        assert(coroutine_heap->var_send == NULL);
        coroutine_heap->var_send = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 162;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[8]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 162;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        CHECK_OBJECT(coroutine_heap->var_scope);
        tmp_args_element_value_1 = coroutine_heap->var_scope;
        CHECK_OBJECT(coroutine_heap->var_receive);
        tmp_args_element_value_2 = coroutine_heap->var_receive;
        CHECK_OBJECT(coroutine_heap->var_send);
        tmp_args_element_value_3 = coroutine_heap->var_send;
        coroutine->m_frame->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_28 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[11],
                call_args
            );
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 162;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_27 = ASYNC_AWAIT(tstate, tmp_expression_value_28, await_normal);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 162;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto try_except_handler_6;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_28, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yield_from = tmp_expression_value_27;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_28, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 162;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto try_except_handler_6;
        }
        tmp_await_result_1 = yield_return_value;
        Py_DECREF(tmp_await_result_1);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_type_5 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_5 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_5 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (coroutine_heap->exception_keeper_tb_5 == NULL) {
        coroutine_heap->exception_keeper_tb_5 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
    } else if (coroutine_heap->exception_keeper_lineno_5 != 0) {
        coroutine_heap->exception_keeper_tb_5 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_5, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_type_5, &coroutine_heap->exception_keeper_value_5, &coroutine_heap->exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[8]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_29 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[12]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto try_except_handler_7;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto try_except_handler_7;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto try_except_handler_7;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_response_complete));
        tmp_called_instance_3 = Nuitka_Cell_GET(coroutine_heap->var_response_complete);
        coroutine->m_frame->m_frame.f_lineno = 164;
        tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[48]);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto try_except_handler_7;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto try_except_handler_7;
        }
        tmp_or_right_value_1 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 165;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_7;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 161;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_7;
    branch_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    coroutine_heap->exception_keeper_type_6 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_6 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_6 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_6;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_6;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_6;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_response_complete));
        tmp_called_instance_4 = Nuitka_Cell_GET(coroutine_heap->var_response_complete);
        coroutine->m_frame->m_frame.f_lineno = 167;
        tmp_operand_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[48]);
        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 167;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 167;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        coroutine_heap->exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        coroutine_heap->exception_lineno = 167;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccocccccccooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(coroutine_heap->var_status_code) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[49]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 168;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(coroutine_heap->var_status_code);
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        coroutine_heap->exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        coroutine_heap->exception_lineno = 168;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccocccccccooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (Nuitka_Cell_GET(coroutine_heap->var_response_headers) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[50]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 169;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(coroutine_heap->var_response_headers);
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_4;
        tmp_raise_type_4 = PyExc_AssertionError;
        coroutine_heap->exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        coroutine_heap->exception_lineno = 169;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccocccccccooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_body_parts));
        tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine_heap->var_body_parts);
        coroutine->m_frame->m_frame.f_lineno = 171;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_stream == NULL);
        coroutine_heap->var_stream = tmp_assign_source_19;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine_heap->var_status_code) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[49]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine_heap->var_status_code);
        if (Nuitka_Cell_GET(coroutine_heap->var_response_headers) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[50]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine_heap->var_response_headers);
        CHECK_OBJECT(coroutine_heap->var_stream);
        tmp_kw_call_dict_value_1_1 = coroutine_heap->var_stream;
        coroutine->m_frame->m_frame.f_lineno = 173;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[53]);
        }

        if (coroutine_heap->tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "ccocccccccooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[1],
            coroutine->m_closure[0],
            coroutine_heap->var_scope,
            coroutine_heap->var_request_body_chunks,
            coroutine_heap->var_request_complete,
            coroutine_heap->var_status_code,
            coroutine_heap->var_response_headers,
            coroutine_heap->var_body_parts,
            coroutine_heap->var_response_started,
            coroutine_heap->var_response_complete,
            coroutine_heap->var_receive,
            coroutine_heap->var_send,
            coroutine_heap->var_stream
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(coroutine_heap->var_scope);
    Py_DECREF(coroutine_heap->var_scope);
    coroutine_heap->var_scope = NULL;
    CHECK_OBJECT(coroutine_heap->var_request_body_chunks);
    Py_DECREF(coroutine_heap->var_request_body_chunks);
    coroutine_heap->var_request_body_chunks = NULL;
    CHECK_OBJECT(coroutine_heap->var_request_complete);
    Py_DECREF(coroutine_heap->var_request_complete);
    coroutine_heap->var_request_complete = NULL;
    CHECK_OBJECT(coroutine_heap->var_status_code);
    Py_DECREF(coroutine_heap->var_status_code);
    coroutine_heap->var_status_code = NULL;
    CHECK_OBJECT(coroutine_heap->var_response_headers);
    Py_DECREF(coroutine_heap->var_response_headers);
    coroutine_heap->var_response_headers = NULL;
    CHECK_OBJECT(coroutine_heap->var_body_parts);
    Py_DECREF(coroutine_heap->var_body_parts);
    coroutine_heap->var_body_parts = NULL;
    CHECK_OBJECT(coroutine_heap->var_response_started);
    Py_DECREF(coroutine_heap->var_response_started);
    coroutine_heap->var_response_started = NULL;
    CHECK_OBJECT(coroutine_heap->var_response_complete);
    Py_DECREF(coroutine_heap->var_response_complete);
    coroutine_heap->var_response_complete = NULL;
    CHECK_OBJECT(coroutine_heap->var_receive);
    Py_DECREF(coroutine_heap->var_receive);
    coroutine_heap->var_receive = NULL;
    CHECK_OBJECT(coroutine_heap->var_send);
    Py_DECREF(coroutine_heap->var_send);
    coroutine_heap->var_send = NULL;
    CHECK_OBJECT(coroutine_heap->var_stream);
    Py_DECREF(coroutine_heap->var_stream);
    coroutine_heap->var_stream = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_7 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_7 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_7 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_scope);
    coroutine_heap->var_scope = NULL;
    CHECK_OBJECT(coroutine_heap->var_request_body_chunks);
    Py_DECREF(coroutine_heap->var_request_body_chunks);
    coroutine_heap->var_request_body_chunks = NULL;
    CHECK_OBJECT(coroutine_heap->var_request_complete);
    Py_DECREF(coroutine_heap->var_request_complete);
    coroutine_heap->var_request_complete = NULL;
    CHECK_OBJECT(coroutine_heap->var_status_code);
    Py_DECREF(coroutine_heap->var_status_code);
    coroutine_heap->var_status_code = NULL;
    CHECK_OBJECT(coroutine_heap->var_response_headers);
    Py_DECREF(coroutine_heap->var_response_headers);
    coroutine_heap->var_response_headers = NULL;
    CHECK_OBJECT(coroutine_heap->var_body_parts);
    Py_DECREF(coroutine_heap->var_body_parts);
    coroutine_heap->var_body_parts = NULL;
    CHECK_OBJECT(coroutine_heap->var_response_started);
    Py_DECREF(coroutine_heap->var_response_started);
    coroutine_heap->var_response_started = NULL;
    CHECK_OBJECT(coroutine_heap->var_response_complete);
    Py_DECREF(coroutine_heap->var_response_complete);
    coroutine_heap->var_response_complete = NULL;
    Py_XDECREF(coroutine_heap->var_receive);
    coroutine_heap->var_receive = NULL;
    Py_XDECREF(coroutine_heap->var_send);
    coroutine_heap->var_send = NULL;
    Py_XDECREF(coroutine_heap->var_stream);
    coroutine_heap->var_stream = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_7;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_7;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_7;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_context,
        module_httpx$_transports$asgi,
        mod_consts[54],
        mod_consts[55],
        codeobj_dc4664d604d3c9dce0cab8a762b0f483,
        closure,
        2,
#if 1
        sizeof(struct httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = self->m_closure[1];
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = self->m_closure[2];
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive(tstate, tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive_locals {
    PyObject *var_body;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
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
};
#endif

static PyObject *httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive_locals *coroutine_heap = (struct httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_body = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_895031df02863823ba04f78fa6755a2e, module_httpx$_transports$asgi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[56]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 129;
            coroutine_heap->type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[1]));
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 129;
            coroutine_heap->type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 130;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[57]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 130;
            coroutine_heap->type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 130;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[58]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 130;
            coroutine_heap->type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 130;
            coroutine_heap->type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yield_from = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 130;
            coroutine_heap->type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        Py_DECREF(tmp_await_result_1);
    }
    coroutine_heap->tmp_return_value = DICT_COPY(mod_consts[59]);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_2;
        coroutine->m_frame->m_frame.f_lineno = 134;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[60]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 134;
            coroutine_heap->type_description_1 = "cocc";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 134;
        tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[61]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 134;
            coroutine_heap->type_description_1 = "cocc";
            goto try_except_handler_2;
        }
        tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 134;
            coroutine_heap->type_description_1 = "cocc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yield_from = tmp_expression_value_3;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 134;
            coroutine_heap->type_description_1 = "cocc";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = yield_return_value;
        assert(coroutine_heap->var_body == NULL);
        coroutine_heap->var_body = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (coroutine_heap->exception_keeper_tb_1 == NULL) {
        coroutine_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        coroutine_heap->exception_keeper_tb_1 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_1, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_type_1, &coroutine_heap->exception_keeper_value_1, &coroutine_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_True;
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[1]);
            PyCell_SET(coroutine->m_closure[1], tmp_assign_source_2);
            Py_INCREF(tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    coroutine_heap->tmp_return_value = DICT_COPY(mod_consts[62]);
    goto try_return_handler_3;
    goto branch_end_2;
    branch_no_2:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 133;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cocc";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[1],
            coroutine_heap->var_body,
            coroutine->m_closure[2],
            coroutine->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[18];
        tmp_dict_value_1 = mod_consts[63];
        coroutine_heap->tmp_return_value = _PyDict_NewPresized( 3 );
        coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[64];
        CHECK_OBJECT(coroutine_heap->var_body);
        tmp_dict_value_1 = coroutine_heap->var_body;
        coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[65];
        tmp_dict_value_1 = Py_True;
        coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_body);
    coroutine_heap->var_body = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive_context,
        module_httpx$_transports$asgi,
        mod_consts[43],
        mod_consts[44],
        codeobj_895031df02863823ba04f78fa6755a2e,
        closure,
        3,
#if 1
        sizeof(struct httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_message = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[7];

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_message;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = self->m_closure[1];
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = self->m_closure[2];
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = self->m_closure[3];
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = self->m_closure[4];
        Py_INCREF(tmp_closure_1[5]);
        tmp_closure_1[6] = self->m_closure[5];
        Py_INCREF(tmp_closure_1[6]);

        tmp_return_value = MAKE_COROUTINE_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send(tstate, tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send_locals {
    PyObject *var_body;
    PyObject *var_more_body;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};
#endif

static PyObject *httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send_locals *coroutine_heap = (struct httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_body = NULL;
    coroutine_heap->var_more_body = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_ef9046602766af1a3ba2770584c4bf13, module_httpx$_transports$asgi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[45]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 143;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_subscript_value_1 = mod_consts[18];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 143;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[66];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 143;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_operand_value_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[67]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 144;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 144;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (coroutine_heap->tmp_res == 0) ? Py_True : Py_False;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        coroutine_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        coroutine_heap->exception_lineno = 144;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccccooccc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[45]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 146;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_subscript_value_2 = mod_consts[68];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 146;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[6]);
            PyCell_SET(coroutine->m_closure[6], tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[45]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[69]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[25];
        tmp_call_arg_element_2 = MAKE_LIST_EMPTY(0);
        coroutine->m_frame->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[4]);
            PyCell_SET(coroutine->m_closure[4], tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_True;
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[5]);
            PyCell_SET(coroutine->m_closure[5], tmp_assign_source_3);
            Py_INCREF(tmp_assign_source_3);
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[45]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_subscript_value_3 = mod_consts[18];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[70];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[57]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 151;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        coroutine->m_frame->m_frame.f_lineno = 151;
        tmp_operand_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[48]);
        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 151;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 151;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_3 = (coroutine_heap->tmp_res == 0) ? Py_True : Py_False;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_4 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        coroutine_heap->exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        coroutine_heap->exception_lineno = 151;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccccooccc";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[45]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 152;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[69]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 152;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 152;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_2, mod_consts[71]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 152;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_body == NULL);
        coroutine_heap->var_body = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[45]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 153;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[69]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 153;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 153;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_3, mod_consts[72]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 153;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_more_body == NULL);
        coroutine_heap->var_more_body = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(coroutine_heap->var_body);
        tmp_truth_name_1 = CHECK_IF_TRUE(coroutine_heap->var_body);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[15]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[24]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[73];
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[74]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 156;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[75]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 156;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_body);
        tmp_args_element_value_1 = coroutine_heap->var_body;
        coroutine->m_frame->m_frame.f_lineno = 156;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 156;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_5;
        CHECK_OBJECT(coroutine_heap->var_more_body);
        tmp_operand_value_5 = coroutine_heap->var_more_body;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 158;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[57]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 159;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        coroutine->m_frame->m_frame.f_lineno = 159;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[76]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 159;
            coroutine_heap->type_description_1 = "ccccooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_6:;
    branch_no_3:;
    branch_end_1:;

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[1],
            coroutine->m_closure[6],
            coroutine->m_closure[4],
            coroutine->m_closure[5],
            coroutine_heap->var_body,
            coroutine_heap->var_more_body,
            coroutine->m_closure[3],
            coroutine->m_closure[2],
            coroutine->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_body);
    coroutine_heap->var_body = NULL;
    Py_XDECREF(coroutine_heap->var_more_body);
    coroutine_heap->var_more_body = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_body);
    coroutine_heap->var_body = NULL;
    Py_XDECREF(coroutine_heap->var_more_body);
    coroutine_heap->var_more_body = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_1;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_1;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_1;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send_context,
        module_httpx$_transports$asgi,
        mod_consts[46],
        mod_consts[47],
        codeobj_ef9046602766af1a3ba2770584c4bf13,
        closure,
        7,
#if 1
        sizeof(struct httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__1_create_event(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__1_create_event,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5687312e2748e0955a68ca1eacc71def,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__2___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__2___init__,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_07d844954a5dd1327776de5bdf08a17e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__3___aiter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__3___aiter__,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[10],
#endif
        codeobj_e62d7365244a20ca394647f75f4a3171,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__4___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__4___init__,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_ed352aa686d7314ed782b8140f11a7e4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__5_handle_async_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__5_handle_async_request,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[55],
#endif
        codeobj_dc4664d604d3c9dce0cab8a762b0f483,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_895031df02863823ba04f78fa6755a2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[47],
#endif
        codeobj_ef9046602766af1a3ba2770584c4bf13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        closure,
        6
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

static function_impl_code const function_table_httpx$_transports$asgi[] = {
    impl_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive,
    impl_httpx$_transports$asgi$$$function__5_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send,
    impl_httpx$_transports$asgi$$$function__1_create_event,
    impl_httpx$_transports$asgi$$$function__2___init__,
    impl_httpx$_transports$asgi$$$function__3___aiter__,
    impl_httpx$_transports$asgi$$$function__4___init__,
    impl_httpx$_transports$asgi$$$function__5_handle_async_request,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_httpx$_transports$asgi);

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
        module_httpx$_transports$asgi,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_httpx$_transports$asgi,
        sizeof(function_table_httpx$_transports$asgi) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_httpx$_transports$asgi(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_transports$asgi");

    // Store the module for future use.
    module_httpx$_transports$asgi = module;

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
        PRINT_STRING("httpx$_transports$asgi: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_transports$asgi: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithttpx$_transports$asgi\n");

    moduledict_httpx$_transports$asgi = MODULE_DICT(module_httpx$_transports$asgi);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_transports$asgi,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_transports$asgi,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[136]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_transports$asgi,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_transports$asgi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_transports$asgi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_transports$asgi);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_transports$asgi);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_23697e045d529c1f628a42b87b13d114;
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
    PyObject *locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_8313ae13447c61382f169fd4e2e4bd88_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_httpx$_transports$asgi$$$class__2_ASGITransport_46 = NULL;
    struct Nuitka_FrameObject *frame_81f9eb2e2795c15734666dbe98f6f5e6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_2);
    }
    frame_23697e045d529c1f628a42b87b13d114 = MAKE_MODULE_FRAME(codeobj_23697e045d529c1f628a42b87b13d114, module_httpx$_transports$asgi);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_23697e045d529c1f628a42b87b13d114);
    assert(Py_REFCNT(frame_23697e045d529c1f628a42b87b13d114) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[80], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[81], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_transports$asgi;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_23697e045d529c1f628a42b87b13d114->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[83];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_transports$asgi;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[84];
        tmp_level_value_2 = mod_consts[85];
        frame_23697e045d529c1f628a42b87b13d114->m_frame.f_lineno = 5;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_httpx$_transports$asgi,
                mod_consts[86],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[86]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_httpx$_transports$asgi,
                mod_consts[52],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[52]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[87];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_httpx$_transports$asgi;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[88];
        tmp_level_value_3 = mod_consts[85];
        frame_23697e045d529c1f628a42b87b13d114->m_frame.f_lineno = 6;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_httpx$_transports$asgi,
                mod_consts[17],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[89];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_httpx$_transports$asgi;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[90];
        tmp_level_value_4 = mod_consts[91];
        frame_23697e045d529c1f628a42b87b13d114->m_frame.f_lineno = 7;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_httpx$_transports$asgi,
                mod_consts[92],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[41]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            assert(!(tmp_expression_value_3 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[42]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[94]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = MAKE_LIST_EMPTY(0);
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_2);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            assert(!(tmp_expression_value_7 == NULL));
            tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[95]);
            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto tuple_build_exception_2;
            }
            tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[93]);

            if (unlikely(tmp_subscript_value_3 == NULL)) {
                tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
            }

            assert(!(tmp_subscript_value_3 == NULL));
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_expression_value_4);
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_4);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_4;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_expression_value_9 == NULL));
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[94]);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_expression_value_11 == NULL));
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[41]);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_8);

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_4);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[42]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_expression_value_8);
        Py_DECREF(tmp_expression_value_10);
        Py_DECREF(tmp_subscript_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_list_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_10);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_8);

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_tuple_element_3, 0, tmp_list_element_1);
        tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_6;
            PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_3);
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            assert(!(tmp_expression_value_14 == NULL));
            tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[97]);
            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_6 = mod_consts[98];
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_expression_value_8);
        Py_DECREF(tmp_subscript_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_8);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_list_element_2;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_tuple_element_6;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_expression_value_16 == NULL));
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[94]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_expression_value_18 == NULL));
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[41]);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_15);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_6);
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[42]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_expression_value_15);
        Py_DECREF(tmp_expression_value_17);
        Py_DECREF(tmp_subscript_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_list_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_17);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_15);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM(tmp_tuple_element_5, 0, tmp_list_element_2);
        tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_list_element_2 == NULL)) {
            tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_tuple_element_5, 1, tmp_list_element_2);
        tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_list_element_2 == NULL)) {
            tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_tuple_element_5, 2, tmp_list_element_2);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_expression_value_15);
        Py_DECREF(tmp_tuple_element_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_9;
            PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_5);
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            assert(!(tmp_expression_value_21 == NULL));
            tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[97]);
            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_6;
            }
            tmp_subscript_value_9 = mod_consts[98];
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_7, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_expression_value_15);
        Py_DECREF(tmp_subscript_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_15);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[101]);


        tmp_assign_source_15 = MAKE_FUNCTION_httpx$_transports$asgi$$$function__1_create_event(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_15);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        tmp_assign_source_16 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_17 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_22 = tmp_class_creation_1__bases;
        tmp_subscript_value_10 = mod_consts[3];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_10, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_19 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_23 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts[102]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_24 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[102]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        tmp_tuple_element_8 = mod_consts[51];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_8 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_23697e045d529c1f628a42b87b13d114->m_frame.f_lineno = 38;
        tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_25 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts[103]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[104];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_26 = tmp_class_creation_1__metaclass;
        tmp_name_value_5 = mod_consts[105];
        tmp_default_value_1 = mod_consts[106];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_26, tmp_name_value_5, tmp_default_value_1);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_27;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_27 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[105]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 38;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38, mod_consts[109], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        frame_8313ae13447c61382f169fd4e2e4bd88_2 = MAKE_CLASS_FRAME(tstate, codeobj_8313ae13447c61382f169fd4e2e4bd88, module_httpx$_transports$asgi, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_8313ae13447c61382f169fd4e2e4bd88_2);
        assert(Py_REFCNT(frame_8313ae13447c61382f169fd4e2e4bd88_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_11;
            tmp_dict_key_1 = mod_consts[64];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            assert(!(tmp_expression_value_29 == NULL));
            tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[110]);
            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_11 = PyObject_GetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38, mod_consts[111]);

            if (tmp_subscript_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_subscript_value_11 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_subscript_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_28);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[39];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$asgi$$$function__2___init__(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_12;
            tmp_dict_key_2 = mod_consts[39];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            assert(!(tmp_expression_value_31 == NULL));
            tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[114]);
            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_12 = PyObject_GetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38, mod_consts[111]);

            if (tmp_subscript_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_subscript_value_12 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_subscript_value_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_30);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$asgi$$$function__3___aiter__(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8313ae13447c61382f169fd4e2e4bd88_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8313ae13447c61382f169fd4e2e4bd88_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8313ae13447c61382f169fd4e2e4bd88_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8313ae13447c61382f169fd4e2e4bd88_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_8313ae13447c61382f169fd4e2e4bd88_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38, mod_consts[115], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_10 = mod_consts[51];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_10 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_23697e045d529c1f628a42b87b13d114->m_frame.f_lineno = 38;
            tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38);
        locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38);
        locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_38 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 38;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_22);
    }
    goto try_end_2;
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

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        tmp_assign_source_24 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_25 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_32 = tmp_class_creation_2__bases;
        tmp_subscript_value_13 = mod_consts[3];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_13, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_27 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_33 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts[102]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_34 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[102]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        tmp_tuple_element_12 = mod_consts[116];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_12 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_23697e045d529c1f628a42b87b13d114->m_frame.f_lineno = 46;
        tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_35 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_35, mod_consts[103]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[104];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_36 = tmp_class_creation_2__metaclass;
        tmp_name_value_6 = mod_consts[105];
        tmp_default_value_2 = mod_consts[106];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_36, tmp_name_value_6, tmp_default_value_2);
        if (tmp_tuple_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_37;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_37 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_37 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[105]);
            Py_DECREF(tmp_expression_value_37);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 46;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_29;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_httpx$_transports$asgi$$$class__2_ASGITransport_46 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[109], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_7;
        }
        frame_81f9eb2e2795c15734666dbe98f6f5e6_3 = MAKE_CLASS_FRAME(tstate, codeobj_81f9eb2e2795c15734666dbe98f6f5e6, module_httpx$_transports$asgi, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_81f9eb2e2795c15734666dbe98f6f5e6_3);
        assert(Py_REFCNT(frame_81f9eb2e2795c15734666dbe98f6f5e6_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_defaults_1 = mod_consts[118];
            tmp_dict_key_3 = mod_consts[11];
            tmp_dict_value_3 = PyObject_GetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[100]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[100]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 81;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_38;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_tuple_element_14;
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[12];
                tmp_dict_value_3 = PyObject_GetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[119]);

                if (tmp_dict_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_3 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_3);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[13];
                tmp_dict_value_3 = PyObject_GetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[120]);

                if (tmp_dict_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_dict_value_3);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[14];
                tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[40]);

                if (unlikely(tmp_expression_value_39 == NULL)) {
                    tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
                }

                assert(!(tmp_expression_value_39 == NULL));
                tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[121]);
                if (tmp_expression_value_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_tuple_element_14 = PyObject_GetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[120]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_14, 0, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[122]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_14);
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[39];
                tmp_dict_value_3 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$asgi$$$function__4___init__(tmp_defaults_1, tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[15];
            tmp_dict_value_4 = PyObject_GetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[86]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[86]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 93;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[39];
            tmp_dict_value_4 = PyObject_GetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[52]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 94;
                        type_description_2 = "o";
                        goto dict_build_exception_2;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto dict_build_exception_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$asgi$$$function__5_handle_async_request(tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_81f9eb2e2795c15734666dbe98f6f5e6_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_81f9eb2e2795c15734666dbe98f6f5e6_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_81f9eb2e2795c15734666dbe98f6f5e6_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_81f9eb2e2795c15734666dbe98f6f5e6_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_81f9eb2e2795c15734666dbe98f6f5e6_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46, mod_consts[115], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_15 = mod_consts[116];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_15 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_httpx$_transports$asgi$$$class__2_ASGITransport_46;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_23697e045d529c1f628a42b87b13d114->m_frame.f_lineno = 46;
            tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_30 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46);
        locals_httpx$_transports$asgi$$$class__2_ASGITransport_46 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_transports$asgi$$$class__2_ASGITransport_46);
        locals_httpx$_transports$asgi$$$class__2_ASGITransport_46 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 46;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_30);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_23697e045d529c1f628a42b87b13d114, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23697e045d529c1f628a42b87b13d114->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23697e045d529c1f628a42b87b13d114, exception_lineno);
    }



    assertFrameObject(frame_23697e045d529c1f628a42b87b13d114);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_transports$asgi", false);

    Py_INCREF(module_httpx$_transports$asgi);
    return module_httpx$_transports$asgi;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_transports$asgi", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
