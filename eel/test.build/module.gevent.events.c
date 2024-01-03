/* Generated code for Python module 'gevent$events'
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

/* The "module_gevent$events" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_gevent$events;
PyDictObject *moduledict_gevent$events;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[180];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[180];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("gevent.events"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 180; i++) {
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
void checkModuleConstants_gevent$events(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 180; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e0367424e7849e1121efd21b94618a70;
static PyCodeObject *codeobj_d06646f56ca6ab26ee0783e674b6a63b;
static PyCodeObject *codeobj_761fe7b79e226f358ec45d698f419347;
static PyCodeObject *codeobj_fb2271ac7b3d5e17756df5bd10254d75;
static PyCodeObject *codeobj_29be3c6119cdb0f6b702319526330203;
static PyCodeObject *codeobj_daf1d7b8d8f7b5c3e7e9cb2787acaa1e;
static PyCodeObject *codeobj_eeb4d1dda7d601427d1aba1be3059e45;
static PyCodeObject *codeobj_060eef5a6c2377246155d0afeecdc887;
static PyCodeObject *codeobj_b38c557613e3755ca94e2a7c0c279665;
static PyCodeObject *codeobj_a0230443a066f9f97b05ba4fd03b02a4;
static PyCodeObject *codeobj_221db5a267b413d793b1777d660cb63c;
static PyCodeObject *codeobj_f2d503b2f67a4192ecc60cf388348d9b;
static PyCodeObject *codeobj_a1c1703403d724fa8d8da82d4499ea72;
static PyCodeObject *codeobj_b1b0953a36cfadc6b45155c1a1ad9470;
static PyCodeObject *codeobj_4ed82db26e509d025a69f7f2573cdcea;
static PyCodeObject *codeobj_fe7a94905aa814c223c3a1c1e1e7866e;
static PyCodeObject *codeobj_5fe2931a351eac944a2e08dc2de4c7ee;
static PyCodeObject *codeobj_79108e5af7ec12619a972f38411d115a;
static PyCodeObject *codeobj_efb4d372d6fb65bae80dda4c968f6807;
static PyCodeObject *codeobj_5fc4ee28c1e2df71fb50ba945d0a32eb;
static PyCodeObject *codeobj_6f22e4f92c2f3bcdf6a53b89853fe797;
static PyCodeObject *codeobj_b4a0d0aee67f686c4383e69e34ef51f9;
static PyCodeObject *codeobj_21bcc682543a5fade3b434e6e2e5565a;
static PyCodeObject *codeobj_c08f475e97dba699687213145f4d6028;
static PyCodeObject *codeobj_a98d3139b6b598292df124da1f649fa0;
static PyCodeObject *codeobj_0ae867789d0a34dbbc38d07b7fa65455;
static PyCodeObject *codeobj_9b775e18ffeb04928ca46e58ed0aa9ad;
static PyCodeObject *codeobj_31b233b8b9aec4948519d6adfb4d8b4e;
static PyCodeObject *codeobj_b41e91d7e89fd78e83ffc96ca6f9400c;
static PyCodeObject *codeobj_6596c8380393591c7f77dc78c97b4963;
static PyCodeObject *codeobj_1b18c3a0bb238745db6f661f2e0aa8dc;
static PyCodeObject *codeobj_aa44109372fe91efa83fa2c39a810e10;
static PyCodeObject *codeobj_6af6dc5dcd5728cb8a90451a044d6cda;
static PyCodeObject *codeobj_5cf6a073012b102485f9b6bb307eced9;
static PyCodeObject *codeobj_d62445b004cd8fc5601a6e39ec811e01;
static PyCodeObject *codeobj_4b2a2434d532b51b2c4478efbfcaaabb;
static PyCodeObject *codeobj_01d57210498daed2ba32dd5a81d2b06a;
static PyCodeObject *codeobj_c9bf0216d4b3f4aaf1f0c3ab102328ed;
static PyCodeObject *codeobj_2a9350f119ff7e00ded17fa239d1f2a4;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[163]); CHECK_OBJECT(module_filename_obj);
    codeobj_e0367424e7849e1121efd21b94618a70 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[164], mod_consts[164], NULL, NULL, 0, 0, 0);
    codeobj_d06646f56ca6ab26ee0783e674b6a63b = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[165], NULL, 0, 0, 0);
    codeobj_761fe7b79e226f358ec45d698f419347 = MAKE_CODE_OBJECT(module_filename_obj, 497, CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[165], NULL, 0, 0, 0);
    codeobj_fb2271ac7b3d5e17756df5bd10254d75 = MAKE_CODE_OBJECT(module_filename_obj, 479, CO_NOFREE, mod_consts[155], mod_consts[155], mod_consts[165], NULL, 0, 0, 0);
    codeobj_29be3c6119cdb0f6b702319526330203 = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[165], NULL, 0, 0, 0);
    codeobj_daf1d7b8d8f7b5c3e7e9cb2787acaa1e = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[165], NULL, 0, 0, 0);
    codeobj_eeb4d1dda7d601427d1aba1be3059e45 = MAKE_CODE_OBJECT(module_filename_obj, 446, CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[165], NULL, 0, 0, 0);
    codeobj_060eef5a6c2377246155d0afeecdc887 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[165], NULL, 0, 0, 0);
    codeobj_b38c557613e3755ca94e2a7c0c279665 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[165], NULL, 0, 0, 0);
    codeobj_a0230443a066f9f97b05ba4fd03b02a4 = MAKE_CODE_OBJECT(module_filename_obj, 458, CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[165], NULL, 0, 0, 0);
    codeobj_221db5a267b413d793b1777d660cb63c = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[165], NULL, 0, 0, 0);
    codeobj_f2d503b2f67a4192ecc60cf388348d9b = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_NOFREE, mod_consts[105], mod_consts[105], mod_consts[165], NULL, 0, 0, 0);
    codeobj_a1c1703403d724fa8d8da82d4499ea72 = MAKE_CODE_OBJECT(module_filename_obj, 389, CO_NOFREE, mod_consts[136], mod_consts[136], mod_consts[165], NULL, 0, 0, 0);
    codeobj_b1b0953a36cfadc6b45155c1a1ad9470 = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[165], NULL, 0, 0, 0);
    codeobj_4ed82db26e509d025a69f7f2573cdcea = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[165], NULL, 0, 0, 0);
    codeobj_fe7a94905aa814c223c3a1c1e1e7866e = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[165], NULL, 0, 0, 0);
    codeobj_5fe2931a351eac944a2e08dc2de4c7ee = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[165], NULL, 0, 0, 0);
    codeobj_79108e5af7ec12619a972f38411d115a = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[165], NULL, 0, 0, 0);
    codeobj_efb4d372d6fb65bae80dda4c968f6807 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[165], NULL, 0, 0, 0);
    codeobj_5fc4ee28c1e2df71fb50ba945d0a32eb = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[165], NULL, 0, 0, 0);
    codeobj_6f22e4f92c2f3bcdf6a53b89853fe797 = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[165], NULL, 0, 0, 0);
    codeobj_b4a0d0aee67f686c4383e69e34ef51f9 = MAKE_CODE_OBJECT(module_filename_obj, 426, CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[165], NULL, 0, 0, 0);
    codeobj_21bcc682543a5fade3b434e6e2e5565a = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[166], NULL, 4, 0, 0);
    codeobj_c08f475e97dba699687213145f4d6028 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[167], NULL, 4, 0, 0);
    codeobj_a98d3139b6b598292df124da1f649fa0 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[168], NULL, 5, 0, 0);
    codeobj_0ae867789d0a34dbbc38d07b7fa65455 = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[169], NULL, 4, 0, 0);
    codeobj_9b775e18ffeb04928ca46e58ed0aa9ad = MAKE_CODE_OBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[170], NULL, 5, 0, 0);
    codeobj_31b233b8b9aec4948519d6adfb4d8b4e = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[171], NULL, 2, 0, 0);
    codeobj_b41e91d7e89fd78e83ffc96ca6f9400c = MAKE_CODE_OBJECT(module_filename_obj, 427, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[172], NULL, 3, 0, 0);
    codeobj_6596c8380393591c7f77dc78c97b4963 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[173], NULL, 3, 0, 0);
    codeobj_1b18c3a0bb238745db6f661f2e0aa8dc = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[174], NULL, 1, 0, 0);
    codeobj_aa44109372fe91efa83fa2c39a810e10 = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[174], NULL, 1, 0, 0);
    codeobj_6af6dc5dcd5728cb8a90451a044d6cda = MAKE_CODE_OBJECT(module_filename_obj, 440, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[174], NULL, 1, 0, 0);
    codeobj_5cf6a073012b102485f9b6bb307eced9 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[175], NULL, 2, 0, 0);
    codeobj_d62445b004cd8fc5601a6e39ec811e01 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[176], NULL, 1, 0, 0);
    codeobj_4b2a2434d532b51b2c4478efbfcaaabb = MAKE_CODE_OBJECT(module_filename_obj, 433, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[174], NULL, 1, 0, 0);
    codeobj_01d57210498daed2ba32dd5a81d2b06a = MAKE_CODE_OBJECT(module_filename_obj, 437, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[140], mod_consts[140], mod_consts[174], NULL, 1, 0, 0);
    codeobj_c9bf0216d4b3f4aaf1f0c3ab102328ed = MAKE_CODE_OBJECT(module_filename_obj, 421, CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[177], NULL, 1, 0, 0);
    codeobj_2a9350f119ff7e00ded17fa239d1f2a4 = MAKE_CODE_OBJECT(module_filename_obj, 455, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[178], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_gevent$events$$$function__10___init__();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__11___init__();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__12_will_patch_module();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__13___init__();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__14_patch_all_arguments();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__15_patch_all_kwargs();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__16___repr__();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__17_will_patch_module();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__1_notify_and_call_entry_points();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__2_add_monitoring_function();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__3___init__();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__4___init__();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__5___init__();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__6___repr__();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__7___init__();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__8___init__();


static PyObject *MAKE_FUNCTION_gevent$events$$$function__9___repr__();


// The module function definitions.
static PyObject *impl_gevent$events$$$function__1_notify_and_call_entry_points(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_metadata = NULL;
    PyObject *var_sys = NULL;
    PyObject *var_entry_points = NULL;
    PyObject *var_plugin = NULL;
    PyObject *var_subscriber = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_d62445b004cd8fc5601a6e39ec811e01;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_importlib_metadata_entry_points_function;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_d62445b004cd8fc5601a6e39ec811e01 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d62445b004cd8fc5601a6e39ec811e01)) {
        Py_XDECREF(cache_frame_d62445b004cd8fc5601a6e39ec811e01);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d62445b004cd8fc5601a6e39ec811e01 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d62445b004cd8fc5601a6e39ec811e01 = MAKE_FUNCTION_FRAME(tstate, codeobj_d62445b004cd8fc5601a6e39ec811e01, module_gevent$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d62445b004cd8fc5601a6e39ec811e01->m_type_description == NULL);
    frame_d62445b004cd8fc5601a6e39ec811e01 = cache_frame_d62445b004cd8fc5601a6e39ec811e01;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d62445b004cd8fc5601a6e39ec811e01);
    assert(Py_REFCNT(frame_d62445b004cd8fc5601a6e39ec811e01) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooNNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_args_element_value_1 = par_event;
        frame_d62445b004cd8fc5601a6e39ec811e01->m_frame.f_lineno = 106;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooNNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = IMPORT_HARD_IMPORTLIB__METADATA();
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_metadata == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_metadata = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_sys == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_sys = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB__METADATA();
            tmp_importlib_metadata_entry_points_function = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[1]);
        }
        assert(!(tmp_importlib_metadata_entry_points_function == NULL));
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_importlib_metadata_entry_points_function);

            exception_lineno = 116;
            type_description_1 = "ooooNNoo";
            goto frame_exception_exit_1;
        }
        frame_d62445b004cd8fc5601a6e39ec811e01->m_frame.f_lineno = 116;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_importlib_metadata_entry_points_function, kw_values, mod_consts[3]);
        }

        Py_DECREF(tmp_importlib_metadata_entry_points_function);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooNNoo";
            goto frame_exception_exit_1;
        }
        assert(var_entry_points == NULL);
        var_entry_points = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_entry_points);
        tmp_iter_arg_1 = var_entry_points;
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooNNoo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooNNoo";
                exception_lineno = 136;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_plugin;
            var_plugin = tmp_assign_source_6;
            Py_INCREF(var_plugin);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_plugin);
        tmp_called_instance_1 = var_plugin;
        frame_d62445b004cd8fc5601a6e39ec811e01->m_frame.f_lineno = 137;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[4]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooNNoo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_subscriber;
            var_subscriber = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_subscriber);
        tmp_called_value_2 = var_subscriber;
        if (par_event == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 138;
            type_description_1 = "ooooNNoo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_event;
        frame_d62445b004cd8fc5601a6e39ec811e01->m_frame.f_lineno = 138;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooNNoo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 136;
        type_description_1 = "ooooNNoo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d62445b004cd8fc5601a6e39ec811e01, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d62445b004cd8fc5601a6e39ec811e01->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d62445b004cd8fc5601a6e39ec811e01, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d62445b004cd8fc5601a6e39ec811e01,
        type_description_1,
        par_event,
        var_metadata,
        var_sys,
        var_entry_points,
        NULL,
        NULL,
        var_plugin,
        var_subscriber
    );


    // Release cached frame if used for exception.
    if (frame_d62445b004cd8fc5601a6e39ec811e01 == cache_frame_d62445b004cd8fc5601a6e39ec811e01) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d62445b004cd8fc5601a6e39ec811e01);
        cache_frame_d62445b004cd8fc5601a6e39ec811e01 = NULL;
    }

    assertFrameObject(frame_d62445b004cd8fc5601a6e39ec811e01);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_metadata);
    Py_DECREF(var_metadata);
    var_metadata = NULL;
    CHECK_OBJECT(var_sys);
    Py_DECREF(var_sys);
    var_sys = NULL;
    CHECK_OBJECT(var_entry_points);
    Py_DECREF(var_entry_points);
    var_entry_points = NULL;
    Py_XDECREF(var_plugin);
    var_plugin = NULL;
    Py_XDECREF(var_subscriber);
    var_subscriber = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_metadata);
    var_metadata = NULL;
    Py_XDECREF(var_sys);
    var_sys = NULL;
    Py_XDECREF(var_entry_points);
    var_entry_points = NULL;
    Py_XDECREF(var_plugin);
    var_plugin = NULL;
    Py_XDECREF(var_subscriber);
    var_subscriber = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_gevent$events$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_monitor = python_pars[1];
    struct Nuitka_FrameObject *frame_31b233b8b9aec4948519d6adfb4d8b4e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_31b233b8b9aec4948519d6adfb4d8b4e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_31b233b8b9aec4948519d6adfb4d8b4e)) {
        Py_XDECREF(cache_frame_31b233b8b9aec4948519d6adfb4d8b4e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31b233b8b9aec4948519d6adfb4d8b4e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31b233b8b9aec4948519d6adfb4d8b4e = MAKE_FUNCTION_FRAME(tstate, codeobj_31b233b8b9aec4948519d6adfb4d8b4e, module_gevent$events, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_31b233b8b9aec4948519d6adfb4d8b4e->m_type_description == NULL);
    frame_31b233b8b9aec4948519d6adfb4d8b4e = cache_frame_31b233b8b9aec4948519d6adfb4d8b4e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_31b233b8b9aec4948519d6adfb4d8b4e);
    assert(Py_REFCNT(frame_31b233b8b9aec4948519d6adfb4d8b4e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_monitor);
        tmp_assattr_value_1 = par_monitor;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_31b233b8b9aec4948519d6adfb4d8b4e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31b233b8b9aec4948519d6adfb4d8b4e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31b233b8b9aec4948519d6adfb4d8b4e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31b233b8b9aec4948519d6adfb4d8b4e,
        type_description_1,
        par_self,
        par_monitor
    );


    // Release cached frame if used for exception.
    if (frame_31b233b8b9aec4948519d6adfb4d8b4e == cache_frame_31b233b8b9aec4948519d6adfb4d8b4e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_31b233b8b9aec4948519d6adfb4d8b4e);
        cache_frame_31b233b8b9aec4948519d6adfb4d8b4e = NULL;
    }

    assertFrameObject(frame_31b233b8b9aec4948519d6adfb4d8b4e);

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
    CHECK_OBJECT(par_monitor);
    Py_DECREF(par_monitor);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_monitor);
    Py_DECREF(par_monitor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_gevent$events$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_greenlet = python_pars[1];
    PyObject *par_blocking_time = python_pars[2];
    PyObject *par_info = python_pars[3];
    struct Nuitka_FrameObject *frame_21bcc682543a5fade3b434e6e2e5565a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_21bcc682543a5fade3b434e6e2e5565a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21bcc682543a5fade3b434e6e2e5565a)) {
        Py_XDECREF(cache_frame_21bcc682543a5fade3b434e6e2e5565a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21bcc682543a5fade3b434e6e2e5565a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21bcc682543a5fade3b434e6e2e5565a = MAKE_FUNCTION_FRAME(tstate, codeobj_21bcc682543a5fade3b434e6e2e5565a, module_gevent$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21bcc682543a5fade3b434e6e2e5565a->m_type_description == NULL);
    frame_21bcc682543a5fade3b434e6e2e5565a = cache_frame_21bcc682543a5fade3b434e6e2e5565a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_21bcc682543a5fade3b434e6e2e5565a);
    assert(Py_REFCNT(frame_21bcc682543a5fade3b434e6e2e5565a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_greenlet);
        tmp_assattr_value_1 = par_greenlet;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_blocking_time);
        tmp_assattr_value_2 = par_blocking_time;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_info);
        tmp_assattr_value_3 = par_info;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[9], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21bcc682543a5fade3b434e6e2e5565a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21bcc682543a5fade3b434e6e2e5565a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21bcc682543a5fade3b434e6e2e5565a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21bcc682543a5fade3b434e6e2e5565a,
        type_description_1,
        par_self,
        par_greenlet,
        par_blocking_time,
        par_info
    );


    // Release cached frame if used for exception.
    if (frame_21bcc682543a5fade3b434e6e2e5565a == cache_frame_21bcc682543a5fade3b434e6e2e5565a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21bcc682543a5fade3b434e6e2e5565a);
        cache_frame_21bcc682543a5fade3b434e6e2e5565a = NULL;
    }

    assertFrameObject(frame_21bcc682543a5fade3b434e6e2e5565a);

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
    CHECK_OBJECT(par_greenlet);
    Py_DECREF(par_greenlet);
    CHECK_OBJECT(par_blocking_time);
    Py_DECREF(par_blocking_time);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_greenlet);
    Py_DECREF(par_greenlet);
    CHECK_OBJECT(par_blocking_time);
    Py_DECREF(par_blocking_time);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_gevent$events$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mem_usage = python_pars[1];
    PyObject *par_max_allowed = python_pars[2];
    PyObject *par_memory_info = python_pars[3];
    struct Nuitka_FrameObject *frame_c08f475e97dba699687213145f4d6028;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c08f475e97dba699687213145f4d6028 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c08f475e97dba699687213145f4d6028)) {
        Py_XDECREF(cache_frame_c08f475e97dba699687213145f4d6028);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c08f475e97dba699687213145f4d6028 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c08f475e97dba699687213145f4d6028 = MAKE_FUNCTION_FRAME(tstate, codeobj_c08f475e97dba699687213145f4d6028, module_gevent$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c08f475e97dba699687213145f4d6028->m_type_description == NULL);
    frame_c08f475e97dba699687213145f4d6028 = cache_frame_c08f475e97dba699687213145f4d6028;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c08f475e97dba699687213145f4d6028);
    assert(Py_REFCNT(frame_c08f475e97dba699687213145f4d6028) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_mem_usage);
        tmp_assattr_value_1 = par_mem_usage;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_max_allowed);
        tmp_assattr_value_2 = par_max_allowed;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[11], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_memory_info);
        tmp_assattr_value_3 = par_memory_info;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[12], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c08f475e97dba699687213145f4d6028, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c08f475e97dba699687213145f4d6028->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c08f475e97dba699687213145f4d6028, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c08f475e97dba699687213145f4d6028,
        type_description_1,
        par_self,
        par_mem_usage,
        par_max_allowed,
        par_memory_info
    );


    // Release cached frame if used for exception.
    if (frame_c08f475e97dba699687213145f4d6028 == cache_frame_c08f475e97dba699687213145f4d6028) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c08f475e97dba699687213145f4d6028);
        cache_frame_c08f475e97dba699687213145f4d6028 = NULL;
    }

    assertFrameObject(frame_c08f475e97dba699687213145f4d6028);

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
    CHECK_OBJECT(par_mem_usage);
    Py_DECREF(par_mem_usage);
    CHECK_OBJECT(par_max_allowed);
    Py_DECREF(par_max_allowed);
    CHECK_OBJECT(par_memory_info);
    Py_DECREF(par_memory_info);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mem_usage);
    Py_DECREF(par_mem_usage);
    CHECK_OBJECT(par_max_allowed);
    Py_DECREF(par_max_allowed);
    CHECK_OBJECT(par_memory_info);
    Py_DECREF(par_memory_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_gevent$events$$$function__6___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1b18c3a0bb238745db6f661f2e0aa8dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1b18c3a0bb238745db6f661f2e0aa8dc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1b18c3a0bb238745db6f661f2e0aa8dc)) {
        Py_XDECREF(cache_frame_1b18c3a0bb238745db6f661f2e0aa8dc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b18c3a0bb238745db6f661f2e0aa8dc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b18c3a0bb238745db6f661f2e0aa8dc = MAKE_FUNCTION_FRAME(tstate, codeobj_1b18c3a0bb238745db6f661f2e0aa8dc, module_gevent$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b18c3a0bb238745db6f661f2e0aa8dc->m_type_description == NULL);
    frame_1b18c3a0bb238745db6f661f2e0aa8dc = cache_frame_1b18c3a0bb238745db6f661f2e0aa8dc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1b18c3a0bb238745db6f661f2e0aa8dc);
    assert(Py_REFCNT(frame_1b18c3a0bb238745db6f661f2e0aa8dc) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_mod_expr_left_1 = mod_consts[13];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[10]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[11]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[12]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_1b18c3a0bb238745db6f661f2e0aa8dc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b18c3a0bb238745db6f661f2e0aa8dc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b18c3a0bb238745db6f661f2e0aa8dc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b18c3a0bb238745db6f661f2e0aa8dc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1b18c3a0bb238745db6f661f2e0aa8dc == cache_frame_1b18c3a0bb238745db6f661f2e0aa8dc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b18c3a0bb238745db6f661f2e0aa8dc);
        cache_frame_1b18c3a0bb238745db6f661f2e0aa8dc = NULL;
    }

    assertFrameObject(frame_1b18c3a0bb238745db6f661f2e0aa8dc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

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


static PyObject *impl_gevent$events$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mem_usage = python_pars[1];
    PyObject *par_max_allowed = python_pars[2];
    PyObject *par_memory_info = python_pars[3];
    PyObject *par_max_usage = python_pars[4];
    struct Nuitka_FrameObject *frame_a98d3139b6b598292df124da1f649fa0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a98d3139b6b598292df124da1f649fa0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a98d3139b6b598292df124da1f649fa0)) {
        Py_XDECREF(cache_frame_a98d3139b6b598292df124da1f649fa0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a98d3139b6b598292df124da1f649fa0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a98d3139b6b598292df124da1f649fa0 = MAKE_FUNCTION_FRAME(tstate, codeobj_a98d3139b6b598292df124da1f649fa0, module_gevent$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a98d3139b6b598292df124da1f649fa0->m_type_description == NULL);
    frame_a98d3139b6b598292df124da1f649fa0 = cache_frame_a98d3139b6b598292df124da1f649fa0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a98d3139b6b598292df124da1f649fa0);
    assert(Py_REFCNT(frame_a98d3139b6b598292df124da1f649fa0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_gevent$events, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mem_usage);
        tmp_args_element_value_1 = par_mem_usage;
        CHECK_OBJECT(par_max_allowed);
        tmp_args_element_value_2 = par_max_allowed;
        CHECK_OBJECT(par_memory_info);
        tmp_args_element_value_3 = par_memory_info;
        frame_a98d3139b6b598292df124da1f649fa0->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[16],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_max_usage);
        tmp_assattr_value_1 = par_max_usage;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a98d3139b6b598292df124da1f649fa0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a98d3139b6b598292df124da1f649fa0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a98d3139b6b598292df124da1f649fa0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a98d3139b6b598292df124da1f649fa0,
        type_description_1,
        par_self,
        par_mem_usage,
        par_max_allowed,
        par_memory_info,
        par_max_usage,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_a98d3139b6b598292df124da1f649fa0 == cache_frame_a98d3139b6b598292df124da1f649fa0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a98d3139b6b598292df124da1f649fa0);
        cache_frame_a98d3139b6b598292df124da1f649fa0 = NULL;
    }

    assertFrameObject(frame_a98d3139b6b598292df124da1f649fa0);

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
    CHECK_OBJECT(par_mem_usage);
    Py_DECREF(par_mem_usage);
    CHECK_OBJECT(par_max_allowed);
    Py_DECREF(par_max_allowed);
    CHECK_OBJECT(par_memory_info);
    Py_DECREF(par_memory_info);
    CHECK_OBJECT(par_max_usage);
    Py_DECREF(par_max_usage);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mem_usage);
    Py_DECREF(par_mem_usage);
    CHECK_OBJECT(par_max_allowed);
    Py_DECREF(par_max_allowed);
    CHECK_OBJECT(par_memory_info);
    Py_DECREF(par_memory_info);
    CHECK_OBJECT(par_max_usage);
    Py_DECREF(par_max_usage);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_gevent$events$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_source = python_pars[1];
    PyObject *par_target = python_pars[2];
    struct Nuitka_FrameObject *frame_6596c8380393591c7f77dc78c97b4963;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6596c8380393591c7f77dc78c97b4963 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6596c8380393591c7f77dc78c97b4963)) {
        Py_XDECREF(cache_frame_6596c8380393591c7f77dc78c97b4963);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6596c8380393591c7f77dc78c97b4963 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6596c8380393591c7f77dc78c97b4963 = MAKE_FUNCTION_FRAME(tstate, codeobj_6596c8380393591c7f77dc78c97b4963, module_gevent$events, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6596c8380393591c7f77dc78c97b4963->m_type_description == NULL);
    frame_6596c8380393591c7f77dc78c97b4963 = cache_frame_6596c8380393591c7f77dc78c97b4963;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6596c8380393591c7f77dc78c97b4963);
    assert(Py_REFCNT(frame_6596c8380393591c7f77dc78c97b4963) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_source);
        tmp_assattr_value_1 = par_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_target);
        tmp_assattr_value_2 = par_target;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6596c8380393591c7f77dc78c97b4963, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6596c8380393591c7f77dc78c97b4963->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6596c8380393591c7f77dc78c97b4963, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6596c8380393591c7f77dc78c97b4963,
        type_description_1,
        par_self,
        par_source,
        par_target
    );


    // Release cached frame if used for exception.
    if (frame_6596c8380393591c7f77dc78c97b4963 == cache_frame_6596c8380393591c7f77dc78c97b4963) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6596c8380393591c7f77dc78c97b4963);
        cache_frame_6596c8380393591c7f77dc78c97b4963 = NULL;
    }

    assertFrameObject(frame_6596c8380393591c7f77dc78c97b4963);

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
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_gevent$events$$$function__9___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_aa44109372fe91efa83fa2c39a810e10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa44109372fe91efa83fa2c39a810e10 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aa44109372fe91efa83fa2c39a810e10)) {
        Py_XDECREF(cache_frame_aa44109372fe91efa83fa2c39a810e10);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa44109372fe91efa83fa2c39a810e10 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa44109372fe91efa83fa2c39a810e10 = MAKE_FUNCTION_FRAME(tstate, codeobj_aa44109372fe91efa83fa2c39a810e10, module_gevent$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aa44109372fe91efa83fa2c39a810e10->m_type_description == NULL);
    frame_aa44109372fe91efa83fa2c39a810e10 = cache_frame_aa44109372fe91efa83fa2c39a810e10;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_aa44109372fe91efa83fa2c39a810e10);
    assert(Py_REFCNT(frame_aa44109372fe91efa83fa2c39a810e10) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_mod_expr_left_1 = mod_consts[20];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_id_arg_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[19]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_id_arg_1 = par_self;
            tmp_tuple_element_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
            assert(!(tmp_tuple_element_1 == NULL));
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_aa44109372fe91efa83fa2c39a810e10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa44109372fe91efa83fa2c39a810e10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa44109372fe91efa83fa2c39a810e10, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa44109372fe91efa83fa2c39a810e10,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_aa44109372fe91efa83fa2c39a810e10 == cache_frame_aa44109372fe91efa83fa2c39a810e10) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aa44109372fe91efa83fa2c39a810e10);
        cache_frame_aa44109372fe91efa83fa2c39a810e10 = NULL;
    }

    assertFrameObject(frame_aa44109372fe91efa83fa2c39a810e10);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

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


static PyObject *impl_gevent$events$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_module_name = python_pars[1];
    PyObject *par_source = python_pars[2];
    PyObject *par_target = python_pars[3];
    PyObject *par_items = python_pars[4];
    struct Nuitka_FrameObject *frame_9b775e18ffeb04928ca46e58ed0aa9ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9b775e18ffeb04928ca46e58ed0aa9ad = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9b775e18ffeb04928ca46e58ed0aa9ad)) {
        Py_XDECREF(cache_frame_9b775e18ffeb04928ca46e58ed0aa9ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b775e18ffeb04928ca46e58ed0aa9ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b775e18ffeb04928ca46e58ed0aa9ad = MAKE_FUNCTION_FRAME(tstate, codeobj_9b775e18ffeb04928ca46e58ed0aa9ad, module_gevent$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b775e18ffeb04928ca46e58ed0aa9ad->m_type_description == NULL);
    frame_9b775e18ffeb04928ca46e58ed0aa9ad = cache_frame_9b775e18ffeb04928ca46e58ed0aa9ad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9b775e18ffeb04928ca46e58ed0aa9ad);
    assert(Py_REFCNT(frame_9b775e18ffeb04928ca46e58ed0aa9ad) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_gevent$events, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_source);
        tmp_args_element_value_1 = par_source;
        CHECK_OBJECT(par_target);
        tmp_args_element_value_2 = par_target;
        frame_9b775e18ffeb04928ca46e58ed0aa9ad->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[16],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_module_name);
        tmp_assattr_value_1 = par_module_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[22], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_items);
        tmp_assattr_value_2 = par_items;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[23], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9b775e18ffeb04928ca46e58ed0aa9ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b775e18ffeb04928ca46e58ed0aa9ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b775e18ffeb04928ca46e58ed0aa9ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b775e18ffeb04928ca46e58ed0aa9ad,
        type_description_1,
        par_self,
        par_module_name,
        par_source,
        par_target,
        par_items,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_9b775e18ffeb04928ca46e58ed0aa9ad == cache_frame_9b775e18ffeb04928ca46e58ed0aa9ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b775e18ffeb04928ca46e58ed0aa9ad);
        cache_frame_9b775e18ffeb04928ca46e58ed0aa9ad = NULL;
    }

    assertFrameObject(frame_9b775e18ffeb04928ca46e58ed0aa9ad);

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
    CHECK_OBJECT(par_module_name);
    Py_DECREF(par_module_name);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_module_name);
    Py_DECREF(par_module_name);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_gevent$events$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_module_name = python_pars[1];
    PyObject *par_source = python_pars[2];
    PyObject *par_target = python_pars[3];
    struct Nuitka_FrameObject *frame_0ae867789d0a34dbbc38d07b7fa65455;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0ae867789d0a34dbbc38d07b7fa65455 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0ae867789d0a34dbbc38d07b7fa65455)) {
        Py_XDECREF(cache_frame_0ae867789d0a34dbbc38d07b7fa65455);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ae867789d0a34dbbc38d07b7fa65455 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ae867789d0a34dbbc38d07b7fa65455 = MAKE_FUNCTION_FRAME(tstate, codeobj_0ae867789d0a34dbbc38d07b7fa65455, module_gevent$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0ae867789d0a34dbbc38d07b7fa65455->m_type_description == NULL);
    frame_0ae867789d0a34dbbc38d07b7fa65455 = cache_frame_0ae867789d0a34dbbc38d07b7fa65455;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0ae867789d0a34dbbc38d07b7fa65455);
    assert(Py_REFCNT(frame_0ae867789d0a34dbbc38d07b7fa65455) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_gevent$events, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_source);
        tmp_args_element_value_1 = par_source;
        CHECK_OBJECT(par_target);
        tmp_args_element_value_2 = par_target;
        frame_0ae867789d0a34dbbc38d07b7fa65455->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[16],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_module_name);
        tmp_assattr_value_1 = par_module_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[22], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ae867789d0a34dbbc38d07b7fa65455, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ae867789d0a34dbbc38d07b7fa65455->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ae867789d0a34dbbc38d07b7fa65455, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ae867789d0a34dbbc38d07b7fa65455,
        type_description_1,
        par_self,
        par_module_name,
        par_source,
        par_target,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_0ae867789d0a34dbbc38d07b7fa65455 == cache_frame_0ae867789d0a34dbbc38d07b7fa65455) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0ae867789d0a34dbbc38d07b7fa65455);
        cache_frame_0ae867789d0a34dbbc38d07b7fa65455 = NULL;
    }

    assertFrameObject(frame_0ae867789d0a34dbbc38d07b7fa65455);

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
    CHECK_OBJECT(par_module_name);
    Py_DECREF(par_module_name);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_module_name);
    Py_DECREF(par_module_name);
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_gevent$events$$$function__13___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_patch_all_arguments = python_pars[1];
    PyObject *par_patch_all_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_b41e91d7e89fd78e83ffc96ca6f9400c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b41e91d7e89fd78e83ffc96ca6f9400c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b41e91d7e89fd78e83ffc96ca6f9400c)) {
        Py_XDECREF(cache_frame_b41e91d7e89fd78e83ffc96ca6f9400c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b41e91d7e89fd78e83ffc96ca6f9400c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b41e91d7e89fd78e83ffc96ca6f9400c = MAKE_FUNCTION_FRAME(tstate, codeobj_b41e91d7e89fd78e83ffc96ca6f9400c, module_gevent$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b41e91d7e89fd78e83ffc96ca6f9400c->m_type_description == NULL);
    frame_b41e91d7e89fd78e83ffc96ca6f9400c = cache_frame_b41e91d7e89fd78e83ffc96ca6f9400c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b41e91d7e89fd78e83ffc96ca6f9400c);
    assert(Py_REFCNT(frame_b41e91d7e89fd78e83ffc96ca6f9400c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_gevent$events, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_b41e91d7e89fd78e83ffc96ca6f9400c->m_frame.f_lineno = 428;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_1,
            mod_consts[16],
            &PyTuple_GET_ITEM(mod_consts[26], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_patch_all_arguments);
        tmp_assattr_value_1 = par_patch_all_arguments;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_patch_all_kwargs);
        tmp_assattr_value_2 = par_patch_all_kwargs;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[28], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b41e91d7e89fd78e83ffc96ca6f9400c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b41e91d7e89fd78e83ffc96ca6f9400c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b41e91d7e89fd78e83ffc96ca6f9400c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b41e91d7e89fd78e83ffc96ca6f9400c,
        type_description_1,
        par_self,
        par_patch_all_arguments,
        par_patch_all_kwargs,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_b41e91d7e89fd78e83ffc96ca6f9400c == cache_frame_b41e91d7e89fd78e83ffc96ca6f9400c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b41e91d7e89fd78e83ffc96ca6f9400c);
        cache_frame_b41e91d7e89fd78e83ffc96ca6f9400c = NULL;
    }

    assertFrameObject(frame_b41e91d7e89fd78e83ffc96ca6f9400c);

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
    CHECK_OBJECT(par_patch_all_arguments);
    Py_DECREF(par_patch_all_arguments);
    CHECK_OBJECT(par_patch_all_kwargs);
    Py_DECREF(par_patch_all_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_patch_all_arguments);
    Py_DECREF(par_patch_all_arguments);
    CHECK_OBJECT(par_patch_all_kwargs);
    Py_DECREF(par_patch_all_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_gevent$events$$$function__14_patch_all_arguments(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4b2a2434d532b51b2c4478efbfcaaabb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4b2a2434d532b51b2c4478efbfcaaabb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4b2a2434d532b51b2c4478efbfcaaabb)) {
        Py_XDECREF(cache_frame_4b2a2434d532b51b2c4478efbfcaaabb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4b2a2434d532b51b2c4478efbfcaaabb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4b2a2434d532b51b2c4478efbfcaaabb = MAKE_FUNCTION_FRAME(tstate, codeobj_4b2a2434d532b51b2c4478efbfcaaabb, module_gevent$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4b2a2434d532b51b2c4478efbfcaaabb->m_type_description == NULL);
    frame_4b2a2434d532b51b2c4478efbfcaaabb = cache_frame_4b2a2434d532b51b2c4478efbfcaaabb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4b2a2434d532b51b2c4478efbfcaaabb);
    assert(Py_REFCNT(frame_4b2a2434d532b51b2c4478efbfcaaabb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[27]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4b2a2434d532b51b2c4478efbfcaaabb->m_frame.f_lineno = 434;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_4b2a2434d532b51b2c4478efbfcaaabb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4b2a2434d532b51b2c4478efbfcaaabb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4b2a2434d532b51b2c4478efbfcaaabb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4b2a2434d532b51b2c4478efbfcaaabb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4b2a2434d532b51b2c4478efbfcaaabb == cache_frame_4b2a2434d532b51b2c4478efbfcaaabb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4b2a2434d532b51b2c4478efbfcaaabb);
        cache_frame_4b2a2434d532b51b2c4478efbfcaaabb = NULL;
    }

    assertFrameObject(frame_4b2a2434d532b51b2c4478efbfcaaabb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

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


static PyObject *impl_gevent$events$$$function__15_patch_all_kwargs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_01d57210498daed2ba32dd5a81d2b06a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_01d57210498daed2ba32dd5a81d2b06a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_01d57210498daed2ba32dd5a81d2b06a)) {
        Py_XDECREF(cache_frame_01d57210498daed2ba32dd5a81d2b06a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_01d57210498daed2ba32dd5a81d2b06a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_01d57210498daed2ba32dd5a81d2b06a = MAKE_FUNCTION_FRAME(tstate, codeobj_01d57210498daed2ba32dd5a81d2b06a, module_gevent$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_01d57210498daed2ba32dd5a81d2b06a->m_type_description == NULL);
    frame_01d57210498daed2ba32dd5a81d2b06a = cache_frame_01d57210498daed2ba32dd5a81d2b06a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_01d57210498daed2ba32dd5a81d2b06a);
    assert(Py_REFCNT(frame_01d57210498daed2ba32dd5a81d2b06a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[28]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_01d57210498daed2ba32dd5a81d2b06a->m_frame.f_lineno = 438;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_01d57210498daed2ba32dd5a81d2b06a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01d57210498daed2ba32dd5a81d2b06a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01d57210498daed2ba32dd5a81d2b06a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_01d57210498daed2ba32dd5a81d2b06a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_01d57210498daed2ba32dd5a81d2b06a == cache_frame_01d57210498daed2ba32dd5a81d2b06a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_01d57210498daed2ba32dd5a81d2b06a);
        cache_frame_01d57210498daed2ba32dd5a81d2b06a = NULL;
    }

    assertFrameObject(frame_01d57210498daed2ba32dd5a81d2b06a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

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


static PyObject *impl_gevent$events$$$function__16___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6af6dc5dcd5728cb8a90451a044d6cda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6af6dc5dcd5728cb8a90451a044d6cda = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6af6dc5dcd5728cb8a90451a044d6cda)) {
        Py_XDECREF(cache_frame_6af6dc5dcd5728cb8a90451a044d6cda);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6af6dc5dcd5728cb8a90451a044d6cda == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6af6dc5dcd5728cb8a90451a044d6cda = MAKE_FUNCTION_FRAME(tstate, codeobj_6af6dc5dcd5728cb8a90451a044d6cda, module_gevent$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6af6dc5dcd5728cb8a90451a044d6cda->m_type_description == NULL);
    frame_6af6dc5dcd5728cb8a90451a044d6cda = cache_frame_6af6dc5dcd5728cb8a90451a044d6cda;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6af6dc5dcd5728cb8a90451a044d6cda);
    assert(Py_REFCNT(frame_6af6dc5dcd5728cb8a90451a044d6cda) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_mod_expr_left_1 = mod_consts[30];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_id_arg_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[27]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_id_arg_1 = par_self;
            tmp_tuple_element_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
            assert(!(tmp_tuple_element_1 == NULL));
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_6af6dc5dcd5728cb8a90451a044d6cda, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6af6dc5dcd5728cb8a90451a044d6cda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6af6dc5dcd5728cb8a90451a044d6cda, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6af6dc5dcd5728cb8a90451a044d6cda,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6af6dc5dcd5728cb8a90451a044d6cda == cache_frame_6af6dc5dcd5728cb8a90451a044d6cda) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6af6dc5dcd5728cb8a90451a044d6cda);
        cache_frame_6af6dc5dcd5728cb8a90451a044d6cda = NULL;
    }

    assertFrameObject(frame_6af6dc5dcd5728cb8a90451a044d6cda);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

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


static PyObject *impl_gevent$events$$$function__17_will_patch_module(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_module_name = python_pars[1];
    struct Nuitka_FrameObject *frame_2a9350f119ff7e00ded17fa239d1f2a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2a9350f119ff7e00ded17fa239d1f2a4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2a9350f119ff7e00ded17fa239d1f2a4)) {
        Py_XDECREF(cache_frame_2a9350f119ff7e00ded17fa239d1f2a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2a9350f119ff7e00ded17fa239d1f2a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2a9350f119ff7e00ded17fa239d1f2a4 = MAKE_FUNCTION_FRAME(tstate, codeobj_2a9350f119ff7e00ded17fa239d1f2a4, module_gevent$events, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2a9350f119ff7e00ded17fa239d1f2a4->m_type_description == NULL);
    frame_2a9350f119ff7e00ded17fa239d1f2a4 = cache_frame_2a9350f119ff7e00ded17fa239d1f2a4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2a9350f119ff7e00ded17fa239d1f2a4);
    assert(Py_REFCNT(frame_2a9350f119ff7e00ded17fa239d1f2a4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[31]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_module_name);
        tmp_args_element_value_1 = par_module_name;
        frame_2a9350f119ff7e00ded17fa239d1f2a4->m_frame.f_lineno = 456;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_2a9350f119ff7e00ded17fa239d1f2a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2a9350f119ff7e00ded17fa239d1f2a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a9350f119ff7e00ded17fa239d1f2a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2a9350f119ff7e00ded17fa239d1f2a4,
        type_description_1,
        par_self,
        par_module_name
    );


    // Release cached frame if used for exception.
    if (frame_2a9350f119ff7e00ded17fa239d1f2a4 == cache_frame_2a9350f119ff7e00ded17fa239d1f2a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2a9350f119ff7e00ded17fa239d1f2a4);
        cache_frame_2a9350f119ff7e00ded17fa239d1f2a4 = NULL;
    }

    assertFrameObject(frame_2a9350f119ff7e00ded17fa239d1f2a4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_module_name);
    Py_DECREF(par_module_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_module_name);
    Py_DECREF(par_module_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__10___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__10___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_9b775e18ffeb04928ca46e58ed0aa9ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__11___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__11___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_0ae867789d0a34dbbc38d07b7fa65455,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__12_will_patch_module() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_c9bf0216d4b3f4aaf1f0c3ab102328ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        mod_consts[141],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__13___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__13___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_b41e91d7e89fd78e83ffc96ca6f9400c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__14_patch_all_arguments() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__14_patch_all_arguments,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_4b2a2434d532b51b2c4478efbfcaaabb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__15_patch_all_kwargs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__15_patch_all_kwargs,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_01d57210498daed2ba32dd5a81d2b06a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__16___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__16___repr__,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_6af6dc5dcd5728cb8a90451a044d6cda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__17_will_patch_module() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__17_will_patch_module,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_2a9350f119ff7e00ded17fa239d1f2a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__1_notify_and_call_entry_points() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__1_notify_and_call_entry_points,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d62445b004cd8fc5601a6e39ec811e01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__2_add_monitoring_function() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_5cf6a073012b102485f9b6bb307eced9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        mod_consts[69],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__3___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__3___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_31b233b8b9aec4948519d6adfb4d8b4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__4___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__4___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_21bcc682543a5fade3b434e6e2e5565a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__5___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__5___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_c08f475e97dba699687213145f4d6028,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__6___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__6___repr__,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_1b18c3a0bb238745db6f661f2e0aa8dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__7___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__7___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_a98d3139b6b598292df124da1f649fa0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__8___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__8___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_6596c8380393591c7f77dc78c97b4963,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$events$$$function__9___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$events$$$function__9___repr__,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_aa44109372fe91efa83fa2c39a810e10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$events,
        NULL,
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

static function_impl_code const function_table_gevent$events[] = {
    impl_gevent$events$$$function__1_notify_and_call_entry_points,
    impl_gevent$events$$$function__3___init__,
    impl_gevent$events$$$function__4___init__,
    impl_gevent$events$$$function__5___init__,
    impl_gevent$events$$$function__6___repr__,
    impl_gevent$events$$$function__7___init__,
    impl_gevent$events$$$function__8___init__,
    impl_gevent$events$$$function__9___repr__,
    impl_gevent$events$$$function__10___init__,
    impl_gevent$events$$$function__11___init__,
    impl_gevent$events$$$function__13___init__,
    impl_gevent$events$$$function__14_patch_all_arguments,
    impl_gevent$events$$$function__15_patch_all_kwargs,
    impl_gevent$events$$$function__16___repr__,
    impl_gevent$events$$$function__17_will_patch_module,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_gevent$events);

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
        module_gevent$events,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_gevent$events,
        sizeof(function_table_gevent$events) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_gevent$events(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("gevent$events");

    // Store the module for future use.
    module_gevent$events = module;

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
        PRINT_STRING("gevent$events: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("gevent$events: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initgevent$events\n");

    moduledict_gevent$events = MODULE_DICT(module_gevent$events);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_gevent$events,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_gevent$events,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[179]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_gevent$events,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_gevent$events,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_gevent$events,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_gevent$events);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_gevent$events, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_gevent$events, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_gevent$events, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_gevent$events);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *outline_20_var___class__ = NULL;
    PyObject *outline_21_var___class__ = NULL;
    PyObject *outline_22_var___class__ = NULL;
    PyObject *outline_23_var___class__ = NULL;
    PyObject *outline_24_var___class__ = NULL;
    PyObject *outline_25_var___class__ = NULL;
    PyObject *outline_26_var___class__ = NULL;
    PyObject *outline_27_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__bases_orig = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__bases_orig = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__bases_orig = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__bases_orig = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__bases_orig = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__bases_orig = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__bases_orig = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__bases_orig = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__bases_orig = NULL;
    PyObject *tmp_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_22__prepared = NULL;
    PyObject *tmp_class_creation_23__bases = NULL;
    PyObject *tmp_class_creation_23__class_decl_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_23__prepared = NULL;
    PyObject *tmp_class_creation_24__bases = NULL;
    PyObject *tmp_class_creation_24__bases_orig = NULL;
    PyObject *tmp_class_creation_24__class_decl_dict = NULL;
    PyObject *tmp_class_creation_24__metaclass = NULL;
    PyObject *tmp_class_creation_24__prepared = NULL;
    PyObject *tmp_class_creation_25__bases = NULL;
    PyObject *tmp_class_creation_25__bases_orig = NULL;
    PyObject *tmp_class_creation_25__class_decl_dict = NULL;
    PyObject *tmp_class_creation_25__metaclass = NULL;
    PyObject *tmp_class_creation_25__prepared = NULL;
    PyObject *tmp_class_creation_26__bases = NULL;
    PyObject *tmp_class_creation_26__bases_orig = NULL;
    PyObject *tmp_class_creation_26__class_decl_dict = NULL;
    PyObject *tmp_class_creation_26__metaclass = NULL;
    PyObject *tmp_class_creation_26__prepared = NULL;
    PyObject *tmp_class_creation_27__bases = NULL;
    PyObject *tmp_class_creation_27__bases_orig = NULL;
    PyObject *tmp_class_creation_27__class_decl_dict = NULL;
    PyObject *tmp_class_creation_27__metaclass = NULL;
    PyObject *tmp_class_creation_27__prepared = NULL;
    PyObject *tmp_class_creation_28__bases = NULL;
    PyObject *tmp_class_creation_28__bases_orig = NULL;
    PyObject *tmp_class_creation_28__class_decl_dict = NULL;
    PyObject *tmp_class_creation_28__metaclass = NULL;
    PyObject *tmp_class_creation_28__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_e0367424e7849e1121efd21b94618a70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *locals_gevent$events$$$class__1_IPeriodicMonitorThread_141 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5fe2931a351eac944a2e08dc2de4c7ee_2;
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
    PyObject *locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163 = NULL;
    struct Nuitka_FrameObject *frame_79108e5af7ec12619a972f38411d115a_3;
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
    PyObject *locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172 = NULL;
    struct Nuitka_FrameObject *frame_5fc4ee28c1e2df71fb50ba945d0a32eb_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_gevent$events$$$class__4_IEventLoopBlocked_184 = NULL;
    struct Nuitka_FrameObject *frame_b38c557613e3755ca94e2a7c0c279665_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_gevent$events$$$class__5_EventLoopBlocked_196 = NULL;
    struct Nuitka_FrameObject *frame_d06646f56ca6ab26ee0783e674b6a63b_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208 = NULL;
    struct Nuitka_FrameObject *frame_4ed82db26e509d025a69f7f2573cdcea_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_gevent$events$$$class__7__AbstractMemoryEvent_223 = NULL;
    struct Nuitka_FrameObject *frame_6f22e4f92c2f3bcdf6a53b89853fe797_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *locals_gevent$events$$$class__8_MemoryUsageThresholdExceeded_239 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245 = NULL;
    struct Nuitka_FrameObject *frame_fe7a94905aa814c223c3a1c1e1e7866e_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *locals_gevent$events$$$class__10_MemoryUsageUnderThreshold_266 = NULL;
    struct Nuitka_FrameObject *frame_efb4d372d6fb65bae80dda4c968f6807_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *locals_gevent$events$$$class__11_IGeventPatchEvent_276 = NULL;
    struct Nuitka_FrameObject *frame_f2d503b2f67a4192ecc60cf388348d9b_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *locals_gevent$events$$$class__12_GeventPatchEvent_285 = NULL;
    struct Nuitka_FrameObject *frame_daf1d7b8d8f7b5c3e7e9cb2787acaa1e_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *locals_gevent$events$$$class__13_IGeventWillPatchEvent_300 = NULL;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *locals_gevent$events$$$class__14_DoNotPatch_309 = NULL;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *locals_gevent$events$$$class__15_GeventWillPatchEvent_317 = NULL;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *locals_gevent$events$$$class__16_IGeventDidPatchEvent_322 = NULL;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *locals_gevent$events$$$class__17_GeventDidPatchEvent_328 = NULL;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333 = NULL;
    struct Nuitka_FrameObject *frame_b1b0953a36cfadc6b45155c1a1ad9470_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347 = NULL;
    struct Nuitka_FrameObject *frame_060eef5a6c2377246155d0afeecdc887_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362 = NULL;
    struct Nuitka_FrameObject *frame_221db5a267b413d793b1777d660cb63c_15;
    NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373 = NULL;
    struct Nuitka_FrameObject *frame_29be3c6119cdb0f6b702319526330203_16;
    NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389 = NULL;
    struct Nuitka_FrameObject *frame_a1c1703403d724fa8d8da82d4499ea72_17;
    NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *locals_gevent$events$$$class__23__PatchAllMixin_426 = NULL;
    struct Nuitka_FrameObject *frame_b4a0d0aee67f686c4383e69e34ef51f9_18;
    NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
    PyObject *exception_keeper_type_70;
    PyObject *exception_keeper_value_70;
    PyTracebackObject *exception_keeper_tb_70;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
    PyObject *locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446 = NULL;
    struct Nuitka_FrameObject *frame_eeb4d1dda7d601427d1aba1be3059e45_19;
    NUITKA_MAY_BE_UNUSED char const *type_description_19 = NULL;
    PyObject *exception_keeper_type_71;
    PyObject *exception_keeper_value_71;
    PyTracebackObject *exception_keeper_tb_71;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
    PyObject *exception_keeper_type_72;
    PyObject *exception_keeper_value_72;
    PyTracebackObject *exception_keeper_tb_72;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
    PyObject *exception_keeper_type_73;
    PyObject *exception_keeper_value_73;
    PyTracebackObject *exception_keeper_tb_73;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
    PyObject *locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458 = NULL;
    struct Nuitka_FrameObject *frame_a0230443a066f9f97b05ba4fd03b02a4_20;
    NUITKA_MAY_BE_UNUSED char const *type_description_20 = NULL;
    PyObject *exception_keeper_type_74;
    PyObject *exception_keeper_value_74;
    PyTracebackObject *exception_keeper_tb_74;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
    PyObject *exception_keeper_type_75;
    PyObject *exception_keeper_value_75;
    PyTracebackObject *exception_keeper_tb_75;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
    PyObject *exception_keeper_type_76;
    PyObject *exception_keeper_value_76;
    PyTracebackObject *exception_keeper_tb_76;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;
    PyObject *locals_gevent$events$$$class__26_GeventDidPatchBuiltinModulesEvent_479 = NULL;
    struct Nuitka_FrameObject *frame_fb2271ac7b3d5e17756df5bd10254d75_21;
    NUITKA_MAY_BE_UNUSED char const *type_description_21 = NULL;
    PyObject *exception_keeper_type_77;
    PyObject *exception_keeper_value_77;
    PyTracebackObject *exception_keeper_tb_77;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_77;
    PyObject *exception_keeper_type_78;
    PyObject *exception_keeper_value_78;
    PyTracebackObject *exception_keeper_tb_78;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_78;
    PyObject *exception_keeper_type_79;
    PyObject *exception_keeper_value_79;
    PyTracebackObject *exception_keeper_tb_79;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_79;
    PyObject *locals_gevent$events$$$class__27_IGeventDidPatchAllEvent_488 = NULL;
    PyObject *exception_keeper_type_80;
    PyObject *exception_keeper_value_80;
    PyTracebackObject *exception_keeper_tb_80;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_80;
    PyObject *exception_keeper_type_81;
    PyObject *exception_keeper_value_81;
    PyTracebackObject *exception_keeper_tb_81;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_81;
    PyObject *exception_keeper_type_82;
    PyObject *exception_keeper_value_82;
    PyTracebackObject *exception_keeper_tb_82;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_82;
    PyObject *locals_gevent$events$$$class__28_GeventDidPatchAllEvent_497 = NULL;
    struct Nuitka_FrameObject *frame_761fe7b79e226f358ec45d698f419347_22;
    NUITKA_MAY_BE_UNUSED char const *type_description_22 = NULL;
    PyObject *exception_keeper_type_83;
    PyObject *exception_keeper_value_83;
    PyTracebackObject *exception_keeper_tb_83;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_83;
    PyObject *exception_keeper_type_84;
    PyObject *exception_keeper_value_84;
    PyTracebackObject *exception_keeper_tb_84;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_84;
    PyObject *exception_keeper_type_85;
    PyObject *exception_keeper_value_85;
    PyTracebackObject *exception_keeper_tb_85;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_85;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_2);
    }
    frame_e0367424e7849e1121efd21b94618a70 = MAKE_MODULE_FRAME(codeobj_e0367424e7849e1121efd21b94618a70, module_gevent$events);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e0367424e7849e1121efd21b94618a70);
    assert(Py_REFCNT(frame_e0367424e7849e1121efd21b94618a70) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[37], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[38], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[40]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[41]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[42]);
        }
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = LIST_COPY(mod_consts[43]);
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[45];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_gevent$events;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[46];
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 69;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[47];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_gevent$events;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[48];
        tmp_level_value_2 = mod_consts[46];
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 71;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_gevent$events,
                mod_consts[49],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[47];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_gevent$events;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[50];
        tmp_level_value_3 = mod_consts[46];
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 72;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_gevent$events,
                mod_consts[51],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[51]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[47];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_gevent$events;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[52];
        tmp_level_value_4 = mod_consts[46];
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 73;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_gevent$events,
                mod_consts[53],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[54];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_gevent$events;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[55];
        tmp_level_value_5 = mod_consts[46];
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 75;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_gevent$events,
                mod_consts[56],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[54];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_gevent$events;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[57];
        tmp_level_value_6 = mod_consts[46];
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 76;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_gevent$events,
                mod_consts[0],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_assign_source_14 == NULL)) {
            tmp_assign_source_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_14);
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_1;
        }
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 99;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[58]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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

    Py_DECREF(exception_keeper_type_1);
    Py_XDECREF(exception_keeper_value_1);
    Py_XDECREF(exception_keeper_tb_1);
    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_gevent$events, mod_consts[45]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 103;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_gevent$events$$$function__1_notify_and_call_entry_points();

        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_15);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_2;
        }
        tmp_assign_source_16 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_1);
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


            exception_lineno = 141;

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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

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
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[46];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

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


            exception_lineno = 141;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

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
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[60]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[61];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 141;
        tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_7 = mod_consts[14];
        tmp_default_value_1 = mod_consts[64];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_7, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[14]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 141;
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
            locals_gevent$events$$$class__1_IPeriodicMonitorThread_141 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__1_IPeriodicMonitorThread_141, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__1_IPeriodicMonitorThread_141, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__1_IPeriodicMonitorThread_141, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_4;
        }
        frame_5fe2931a351eac944a2e08dc2de4c7ee_2 = MAKE_CLASS_FRAME(tstate, codeobj_5fe2931a351eac944a2e08dc2de4c7ee, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5fe2931a351eac944a2e08dc2de4c7ee_2);
        assert(Py_REFCNT(frame_5fe2931a351eac944a2e08dc2de4c7ee_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__2_add_monitoring_function();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__1_IPeriodicMonitorThread_141, mod_consts[70], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5fe2931a351eac944a2e08dc2de4c7ee_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5fe2931a351eac944a2e08dc2de4c7ee_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5fe2931a351eac944a2e08dc2de4c7ee_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5fe2931a351eac944a2e08dc2de4c7ee_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_5fe2931a351eac944a2e08dc2de4c7ee_2);

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


                exception_lineno = 141;

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
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__1_IPeriodicMonitorThread_141, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[61];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_gevent$events$$$class__1_IPeriodicMonitorThread_141;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 141;
            tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

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
        Py_DECREF(locals_gevent$events$$$class__1_IPeriodicMonitorThread_141);
        locals_gevent$events$$$class__1_IPeriodicMonitorThread_141 = NULL;
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

        Py_DECREF(locals_gevent$events$$$class__1_IPeriodicMonitorThread_141);
        locals_gevent$events$$$class__1_IPeriodicMonitorThread_141 = NULL;
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
        exception_lineno = 141;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_22);
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
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_5;
        }
        tmp_assign_source_24 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_5);
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


            exception_lineno = 163;

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
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

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
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[46];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

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


            exception_lineno = 163;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

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
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[60]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_5;
        }
        tmp_tuple_element_6 = mod_consts[73];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 163;
        tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

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
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_name_value_8 = mod_consts[14];
        tmp_default_value_2 = mod_consts[64];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_8, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[14]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 163;
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
            locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_7;
        }
        frame_79108e5af7ec12619a972f38411d115a_3 = MAKE_CLASS_FRAME(tstate, codeobj_79108e5af7ec12619a972f38411d115a, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_79108e5af7ec12619a972f38411d115a_3);
        assert(Py_REFCNT(frame_79108e5af7ec12619a972f38411d115a_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_4;
            tmp_called_value_4 = PyObject_GetItem(locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163, mod_consts[51]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 170;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_79108e5af7ec12619a972f38411d115a_3->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[75]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_79108e5af7ec12619a972f38411d115a_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_79108e5af7ec12619a972f38411d115a_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_79108e5af7ec12619a972f38411d115a_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_79108e5af7ec12619a972f38411d115a_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_79108e5af7ec12619a972f38411d115a_3);

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


                exception_lineno = 163;

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
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[73];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 163;
            tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

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
        Py_DECREF(locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163);
        locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163 = NULL;
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

        Py_DECREF(locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163);
        locals_gevent$events$$$class__2_IPeriodicMonitorThreadStartedEvent_163 = NULL;
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
        exception_lineno = 163;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_30);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = mod_consts[76];
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_32 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_8;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_13 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[46];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_34 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_8;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[60]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_8;
        }
        tmp_tuple_element_9 = mod_consts[77];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_9 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 172;
        tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_16 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_8;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_17 = tmp_class_creation_3__metaclass;
        tmp_name_value_9 = mod_consts[14];
        tmp_default_value_3 = mod_consts[64];
        tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_9, tmp_default_value_3);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[14]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 172;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_36;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        frame_5fc4ee28c1e2df71fb50ba945d0a32eb_4 = MAKE_CLASS_FRAME(tstate, codeobj_5fc4ee28c1e2df71fb50ba945d0a32eb, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5fc4ee28c1e2df71fb50ba945d0a32eb_4);
        assert(Py_REFCNT(frame_5fc4ee28c1e2df71fb50ba945d0a32eb_4) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__3___init__();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5fc4ee28c1e2df71fb50ba945d0a32eb_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5fc4ee28c1e2df71fb50ba945d0a32eb_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5fc4ee28c1e2df71fb50ba945d0a32eb_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5fc4ee28c1e2df71fb50ba945d0a32eb_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_5fc4ee28c1e2df71fb50ba945d0a32eb_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            tmp_cmp_expr_right_3 = mod_consts[76];
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_7 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_11 = mod_consts[77];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_11 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 172;
            tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_38;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_37 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172);
        locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172);
        locals_gevent$events$$$class__3_PeriodicMonitorThreadStartedEvent_172 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 172;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_37);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_tuple_element_12;
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_11;
        }
        tmp_assign_source_39 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_39, 0, tmp_tuple_element_12);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_40 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_11;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_19 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[46];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_11;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_20 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_11;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_21 = tmp_class_creation_4__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[60]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_11;
        }
        tmp_tuple_element_13 = mod_consts[81];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_13 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 184;
        tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_43;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_22 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_11;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_23 = tmp_class_creation_4__metaclass;
        tmp_name_value_10 = mod_consts[14];
        tmp_default_value_4 = mod_consts[64];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_10, tmp_default_value_4);
        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_24 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[14]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 184;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_44;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_gevent$events$$$class__4_IEventLoopBlocked_184 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__4_IEventLoopBlocked_184, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__4_IEventLoopBlocked_184, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__4_IEventLoopBlocked_184, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_13;
        }
        frame_b38c557613e3755ca94e2a7c0c279665_5 = MAKE_CLASS_FRAME(tstate, codeobj_b38c557613e3755ca94e2a7c0c279665, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b38c557613e3755ca94e2a7c0c279665_5);
        assert(Py_REFCNT(frame_b38c557613e3755ca94e2a7c0c279665_5) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_9;
            tmp_called_value_9 = PyObject_GetItem(locals_gevent$events$$$class__4_IEventLoopBlocked_184, mod_consts[51]);

            if (tmp_called_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_9 == NULL)) {
                        tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 191;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_9);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_b38c557613e3755ca94e2a7c0c279665_5->m_frame.f_lineno = 191;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[83]);

            Py_DECREF(tmp_called_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__4_IEventLoopBlocked_184, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_10;
            tmp_called_value_10 = PyObject_GetItem(locals_gevent$events$$$class__4_IEventLoopBlocked_184, mod_consts[51]);

            if (tmp_called_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_10 == NULL)) {
                        tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 192;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_10);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_b38c557613e3755ca94e2a7c0c279665_5->m_frame.f_lineno = 192;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_10, mod_consts[84]);

            Py_DECREF(tmp_called_value_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__4_IEventLoopBlocked_184, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_11;
            tmp_called_value_11 = PyObject_GetItem(locals_gevent$events$$$class__4_IEventLoopBlocked_184, mod_consts[51]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 193;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_b38c557613e3755ca94e2a7c0c279665_5->m_frame.f_lineno = 193;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[85]);

            Py_DECREF(tmp_called_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__4_IEventLoopBlocked_184, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b38c557613e3755ca94e2a7c0c279665_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b38c557613e3755ca94e2a7c0c279665_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b38c557613e3755ca94e2a7c0c279665_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b38c557613e3755ca94e2a7c0c279665_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_b38c557613e3755ca94e2a7c0c279665_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__4_IEventLoopBlocked_184, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_13;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_12 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_15 = mod_consts[81];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_15 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_gevent$events$$$class__4_IEventLoopBlocked_184;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 184;
            tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_45 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_gevent$events$$$class__4_IEventLoopBlocked_184);
        locals_gevent$events$$$class__4_IEventLoopBlocked_184 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__4_IEventLoopBlocked_184);
        locals_gevent$events$$$class__4_IEventLoopBlocked_184 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 184;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_45);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dircall_arg1_5;
        tmp_dircall_arg1_5 = mod_consts[76];
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_47 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_14;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_25 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[46];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_14;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_49 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_26 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_14;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_27 = tmp_class_creation_5__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[60]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_14;
        }
        tmp_tuple_element_16 = mod_consts[86];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_16 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 196;
        tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_28 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_14;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_29 = tmp_class_creation_5__metaclass;
        tmp_name_value_11 = mod_consts[14];
        tmp_default_value_5 = mod_consts[64];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_11, tmp_default_value_5);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[14]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 196;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_51;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_14;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_14;
        }
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 195;
        tmp_called_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_1);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_14;
        }
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_gevent$events$$$class__5_EventLoopBlocked_196 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__5_EventLoopBlocked_196, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__5_EventLoopBlocked_196, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[86];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__5_EventLoopBlocked_196, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_16;
        }
        frame_d06646f56ca6ab26ee0783e674b6a63b_6 = MAKE_CLASS_FRAME(tstate, codeobj_d06646f56ca6ab26ee0783e674b6a63b, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d06646f56ca6ab26ee0783e674b6a63b_6);
        assert(Py_REFCNT(frame_d06646f56ca6ab26ee0783e674b6a63b_6) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__4___init__();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__5_EventLoopBlocked_196, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d06646f56ca6ab26ee0783e674b6a63b_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d06646f56ca6ab26ee0783e674b6a63b_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d06646f56ca6ab26ee0783e674b6a63b_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d06646f56ca6ab26ee0783e674b6a63b_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_d06646f56ca6ab26ee0783e674b6a63b_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            tmp_cmp_expr_right_5 = mod_consts[76];
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__5_EventLoopBlocked_196, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_16;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_16 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_18 = mod_consts[86];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_18 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_gevent$events$$$class__5_EventLoopBlocked_196;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 196;
            tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_args_element_value_2 = outline_4_var___class__;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_gevent$events$$$class__5_EventLoopBlocked_196);
        locals_gevent$events$$$class__5_EventLoopBlocked_196 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__5_EventLoopBlocked_196);
        locals_gevent$events$$$class__5_EventLoopBlocked_196 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 196;
        goto try_except_handler_14;
        outline_result_5:;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 195;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_52);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_tuple_element_19;
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_17;
        }
        tmp_assign_source_54 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_54, 0, tmp_tuple_element_19);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_55 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_17;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_31 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[46];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_17;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_57 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_32 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_17;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_33 = tmp_class_creation_6__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[60]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_17;
        }
        tmp_tuple_element_20 = mod_consts[89];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_20 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 208;
        tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_34 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_17;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_35 = tmp_class_creation_6__metaclass;
        tmp_name_value_12 = mod_consts[14];
        tmp_default_value_6 = mod_consts[64];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_12, tmp_default_value_6);
        if (tmp_tuple_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[14]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 208;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_59;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_60;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_19;
        }
        frame_4ed82db26e509d025a69f7f2573cdcea_7 = MAKE_CLASS_FRAME(tstate, codeobj_4ed82db26e509d025a69f7f2573cdcea, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4ed82db26e509d025a69f7f2573cdcea_7);
        assert(Py_REFCNT(frame_4ed82db26e509d025a69f7f2573cdcea_7) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_18;
            tmp_called_value_18 = PyObject_GetItem(locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208, mod_consts[51]);

            if (tmp_called_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_18 == NULL)) {
                        tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 219;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_18);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_4ed82db26e509d025a69f7f2573cdcea_7->m_frame.f_lineno = 219;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_18, mod_consts[91]);

            Py_DECREF(tmp_called_value_18);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_19;
            tmp_called_value_19 = PyObject_GetItem(locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208, mod_consts[51]);

            if (tmp_called_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_19 == NULL)) {
                        tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 220;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_19);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_4ed82db26e509d025a69f7f2573cdcea_7->m_frame.f_lineno = 220;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_19, mod_consts[92]);

            Py_DECREF(tmp_called_value_19);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_20;
            tmp_called_value_20 = PyObject_GetItem(locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208, mod_consts[51]);

            if (tmp_called_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_20 == NULL)) {
                        tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 221;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_20);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_4ed82db26e509d025a69f7f2573cdcea_7->m_frame.f_lineno = 221;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_20, mod_consts[93]);

            Py_DECREF(tmp_called_value_20);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4ed82db26e509d025a69f7f2573cdcea_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4ed82db26e509d025a69f7f2573cdcea_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4ed82db26e509d025a69f7f2573cdcea_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4ed82db26e509d025a69f7f2573cdcea_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_4ed82db26e509d025a69f7f2573cdcea_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_19;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_19;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_21 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_22 = mod_consts[89];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_22 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 208;
            tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_61;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_60 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_60);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208);
        locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208);
        locals_gevent$events$$$class__6_IMemoryUsageThresholdExceeded_208 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 208;
        goto try_except_handler_17;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_60);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_dircall_arg1_7;
        tmp_dircall_arg1_7 = mod_consts[76];
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_62 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_20;
        }
        tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_37 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[46];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_20;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_20;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_64 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_64;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_38 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_20;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_39 = tmp_class_creation_7__metaclass;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[60]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_20;
        }
        tmp_tuple_element_23 = mod_consts[94];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_23 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 223;
        tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_40 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_20;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_name_value_13;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_41 = tmp_class_creation_7__metaclass;
        tmp_name_value_13 = mod_consts[14];
        tmp_default_value_7 = mod_consts[64];
        tmp_tuple_element_24 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_13, tmp_default_value_7);
        if (tmp_tuple_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_20;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_42;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_42 == NULL));
            tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[14]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 223;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_20;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_66;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_67;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_gevent$events$$$class__7__AbstractMemoryEvent_223 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__7__AbstractMemoryEvent_223, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__7__AbstractMemoryEvent_223, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_22;
        }
        frame_6f22e4f92c2f3bcdf6a53b89853fe797_8 = MAKE_CLASS_FRAME(tstate, codeobj_6f22e4f92c2f3bcdf6a53b89853fe797, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6f22e4f92c2f3bcdf6a53b89853fe797_8);
        assert(Py_REFCNT(frame_6f22e4f92c2f3bcdf6a53b89853fe797_8) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__5___init__();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__7__AbstractMemoryEvent_223, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__6___repr__();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__7__AbstractMemoryEvent_223, mod_consts[96], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6f22e4f92c2f3bcdf6a53b89853fe797_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6f22e4f92c2f3bcdf6a53b89853fe797_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6f22e4f92c2f3bcdf6a53b89853fe797_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6f22e4f92c2f3bcdf6a53b89853fe797_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_6f22e4f92c2f3bcdf6a53b89853fe797_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_22;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            tmp_cmp_expr_right_7 = mod_consts[76];
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto try_except_handler_22;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__7__AbstractMemoryEvent_223, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_22;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_23 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_25 = mod_consts[94];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_25 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_25);
            tmp_tuple_element_25 = locals_gevent$events$$$class__7__AbstractMemoryEvent_223;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 223;
            tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_68;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_67 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_67);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_gevent$events$$$class__7__AbstractMemoryEvent_223);
        locals_gevent$events$$$class__7__AbstractMemoryEvent_223 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__7__AbstractMemoryEvent_223);
        locals_gevent$events$$$class__7__AbstractMemoryEvent_223 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 223;
        goto try_except_handler_20;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_67);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_tuple_element_26;
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_tuple_element_26 == NULL)) {
            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_tuple_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_23;
        }
        tmp_assign_source_69 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_69, 0, tmp_tuple_element_26);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_70 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_23;
        }
        tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_43 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[46];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_23;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_23;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_72 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_44 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_23;
        }
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_45 = tmp_class_creation_8__metaclass;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[60]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_23;
        }
        tmp_tuple_element_27 = mod_consts[98];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_27);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_27 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_27);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 239;
        tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_46 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_23;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_name_value_14;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_47 = tmp_class_creation_8__metaclass;
        tmp_name_value_14 = mod_consts[14];
        tmp_default_value_8 = mod_consts[64];
        tmp_tuple_element_28 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_14, tmp_default_value_8);
        if (tmp_tuple_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_23;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_48 == NULL));
            tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[14]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_28);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_23;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 239;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_23;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_74;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_25;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_23;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_23;
        }
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 238;
        tmp_called_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_3);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_23;
        }
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_gevent$events$$$class__8_MemoryUsageThresholdExceeded_239 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__8_MemoryUsageThresholdExceeded_239, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__8_MemoryUsageThresholdExceeded_239, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__8_MemoryUsageThresholdExceeded_239, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_25;
        }
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto try_except_handler_25;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__8_MemoryUsageThresholdExceeded_239, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_25;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_27 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_29 = mod_consts[98];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_29 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_29);
            tmp_tuple_element_29 = locals_gevent$events$$$class__8_MemoryUsageThresholdExceeded_239;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 239;
            tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto try_except_handler_25;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_76;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_args_element_value_4 = outline_7_var___class__;
        Py_INCREF(tmp_args_element_value_4);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_gevent$events$$$class__8_MemoryUsageThresholdExceeded_239);
        locals_gevent$events$$$class__8_MemoryUsageThresholdExceeded_239 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__8_MemoryUsageThresholdExceeded_239);
        locals_gevent$events$$$class__8_MemoryUsageThresholdExceeded_239 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 239;
        goto try_except_handler_23;
        outline_result_8:;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 238;
        tmp_assign_source_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_75);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_tuple_element_30;
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_tuple_element_30 == NULL)) {
            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_tuple_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_26;
        }
        tmp_assign_source_77 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_77, 0, tmp_tuple_element_30);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_78 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_33;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_26;
        }
        tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_49 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[46];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_26;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_26;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_80 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_80;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_50 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_26;
        }
        tmp_condition_result_34 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_51 = tmp_class_creation_9__metaclass;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[60]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_26;
        }
        tmp_tuple_element_31 = mod_consts[100];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_31);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_31 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_31);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 245;
        tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_81;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_52 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_26;
        }
        tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_name_value_15;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_53 = tmp_class_creation_9__metaclass;
        tmp_name_value_15 = mod_consts[14];
        tmp_default_value_9 = mod_consts[64];
        tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_15, tmp_default_value_9);
        if (tmp_tuple_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_26;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_54;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_54 == NULL));
            tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[14]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_32);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_26;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 245;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_26;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_82;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_83;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_28;
        }
        frame_fe7a94905aa814c223c3a1c1e1e7866e_9 = MAKE_CLASS_FRAME(tstate, codeobj_fe7a94905aa814c223c3a1c1e1e7866e, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_fe7a94905aa814c223c3a1c1e1e7866e_9);
        assert(Py_REFCNT(frame_fe7a94905aa814c223c3a1c1e1e7866e_9) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_29;
            tmp_called_value_29 = PyObject_GetItem(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245, mod_consts[51]);

            if (tmp_called_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_29 == NULL)) {
                        tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 258;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_value_29);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_fe7a94905aa814c223c3a1c1e1e7866e_9->m_frame.f_lineno = 258;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_29, mod_consts[91]);

            Py_DECREF(tmp_called_value_29);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_30;
            tmp_called_value_30 = PyObject_GetItem(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245, mod_consts[51]);

            if (tmp_called_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_30 == NULL)) {
                        tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 259;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_value_30);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_fe7a94905aa814c223c3a1c1e1e7866e_9->m_frame.f_lineno = 259;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_30, mod_consts[92]);

            Py_DECREF(tmp_called_value_30);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_31;
            tmp_called_value_31 = PyObject_GetItem(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245, mod_consts[51]);

            if (tmp_called_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_31 == NULL)) {
                        tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 260;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_value_31);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_fe7a94905aa814c223c3a1c1e1e7866e_9->m_frame.f_lineno = 260;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_31, mod_consts[102]);

            Py_DECREF(tmp_called_value_31);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_32;
            tmp_called_value_32 = PyObject_GetItem(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245, mod_consts[51]);

            if (tmp_called_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_32 == NULL)) {
                        tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_32 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 262;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_value_32);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_fe7a94905aa814c223c3a1c1e1e7866e_9->m_frame.f_lineno = 262;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_32, mod_consts[93]);

            Py_DECREF(tmp_called_value_32);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fe7a94905aa814c223c3a1c1e1e7866e_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fe7a94905aa814c223c3a1c1e1e7866e_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fe7a94905aa814c223c3a1c1e1e7866e_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fe7a94905aa814c223c3a1c1e1e7866e_9,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_fe7a94905aa814c223c3a1c1e1e7866e_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_28;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto try_except_handler_28;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_28;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_33 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_33 = mod_consts[100];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_33 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_33);
            tmp_tuple_element_33 = locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 245;
            tmp_assign_source_84 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto try_except_handler_28;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_84;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_83 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_83);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245);
        locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245 = NULL;
        goto try_return_handler_27;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245);
        locals_gevent$events$$$class__9_IMemoryUsageUnderThreshold_245 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 245;
        goto try_except_handler_26;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_83);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_tuple_element_34;
        tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_tuple_element_34 == NULL)) {
            tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_tuple_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_29;
        }
        tmp_assign_source_85 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_85, 0, tmp_tuple_element_34);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_86 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_metaclass_value_10;
        nuitka_bool tmp_condition_result_37;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_29;
        }
        tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_55 = tmp_class_creation_10__bases;
        tmp_subscript_value_10 = mod_consts[46];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_29;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_29;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_88 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_88;
    }
    {
        bool tmp_condition_result_38;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_56 = tmp_class_creation_10__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_29;
        }
        tmp_condition_result_38 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_57 = tmp_class_creation_10__metaclass;
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[60]);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_29;
        }
        tmp_tuple_element_35 = mod_consts[15];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_35);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_35 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_35);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 266;
        tmp_assign_source_89 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_89;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_58 = tmp_class_creation_10__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_29;
        }
        tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_name_value_16;
        PyObject *tmp_default_value_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_59 = tmp_class_creation_10__metaclass;
        tmp_name_value_16 = mod_consts[14];
        tmp_default_value_10 = mod_consts[64];
        tmp_tuple_element_36 = BUILTIN_GETATTR(tstate, tmp_expression_value_59, tmp_name_value_16, tmp_default_value_10);
        if (tmp_tuple_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_29;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_60;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_60 == NULL));
            tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[14]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_36);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_29;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_29;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 266;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_29;
    }
    branch_no_29:;
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_90;
    }
    branch_end_28:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_35;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_29;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_29;
        }
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 265;
        tmp_called_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_5);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_29;
        }
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_gevent$events$$$class__10_MemoryUsageUnderThreshold_266 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__10_MemoryUsageUnderThreshold_266, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__10_MemoryUsageUnderThreshold_266, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__10_MemoryUsageUnderThreshold_266, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_31;
        }
        frame_efb4d372d6fb65bae80dda4c968f6807_10 = MAKE_CLASS_FRAME(tstate, codeobj_efb4d372d6fb65bae80dda4c968f6807, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_efb4d372d6fb65bae80dda4c968f6807_10);
        assert(Py_REFCNT(frame_efb4d372d6fb65bae80dda4c968f6807_10) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__7___init__();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__10_MemoryUsageUnderThreshold_266, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_2 = "o";
            goto frame_exception_exit_10;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_efb4d372d6fb65bae80dda4c968f6807_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_efb4d372d6fb65bae80dda4c968f6807_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_efb4d372d6fb65bae80dda4c968f6807_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_efb4d372d6fb65bae80dda4c968f6807_10,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_efb4d372d6fb65bae80dda4c968f6807_10);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_31;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_10 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto try_except_handler_31;
            }
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__10_MemoryUsageUnderThreshold_266, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_31;
        }
        branch_no_30:;
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_37 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_37 = mod_consts[15];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_37 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_37);
            tmp_tuple_element_37 = locals_gevent$events$$$class__10_MemoryUsageUnderThreshold_266;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 266;
            tmp_assign_source_92 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto try_except_handler_31;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_92;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_args_element_value_6 = outline_9_var___class__;
        Py_INCREF(tmp_args_element_value_6);
        goto try_return_handler_31;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_DECREF(locals_gevent$events$$$class__10_MemoryUsageUnderThreshold_266);
        locals_gevent$events$$$class__10_MemoryUsageUnderThreshold_266 = NULL;
        goto try_return_handler_30;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__10_MemoryUsageUnderThreshold_266);
        locals_gevent$events$$$class__10_MemoryUsageUnderThreshold_266 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto try_except_handler_30;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 266;
        goto try_except_handler_29;
        outline_result_10:;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 265;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_91);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_10__bases_orig);
    Py_DECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_tuple_element_38;
        tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_tuple_element_38 == NULL)) {
            tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_tuple_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_32;
        }
        tmp_assign_source_93 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_93, 0, tmp_tuple_element_38);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_dircall_arg1_11;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_94 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_metaclass_value_11;
        nuitka_bool tmp_condition_result_41;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_11;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_32;
        }
        tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_61 = tmp_class_creation_11__bases;
        tmp_subscript_value_11 = mod_consts[46];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_61, tmp_subscript_value_11, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_32;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_32;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_96 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_96;
    }
    {
        bool tmp_condition_result_42;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_62 = tmp_class_creation_11__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_32;
        }
        tmp_condition_result_42 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_value_21;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_63 = tmp_class_creation_11__metaclass;
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[60]);
        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_32;
        }
        tmp_tuple_element_39 = mod_consts[105];
        tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_39);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_39 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_39);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 276;
        tmp_assign_source_97 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_value_21);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_97;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_64 = tmp_class_creation_11__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_32;
        }
        tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_name_value_17;
        PyObject *tmp_default_value_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_65 = tmp_class_creation_11__metaclass;
        tmp_name_value_17 = mod_consts[14];
        tmp_default_value_11 = mod_consts[64];
        tmp_tuple_element_40 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_17, tmp_default_value_11);
        if (tmp_tuple_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_32;
        }
        tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_66;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_22 = tmp_class_creation_11__prepared;
            tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_66 == NULL));
            tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[14]);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_tuple_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_40);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_32;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_32;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 276;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_32;
    }
    branch_no_32:;
    goto branch_end_31;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_98;
    }
    branch_end_31:;
    {
        PyObject *tmp_assign_source_99;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_gevent$events$$$class__11_IGeventPatchEvent_276 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__11_IGeventPatchEvent_276, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__11_IGeventPatchEvent_276, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__11_IGeventPatchEvent_276, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_34;
        }
        frame_f2d503b2f67a4192ecc60cf388348d9b_11 = MAKE_CLASS_FRAME(tstate, codeobj_f2d503b2f67a4192ecc60cf388348d9b, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_f2d503b2f67a4192ecc60cf388348d9b_11);
        assert(Py_REFCNT(frame_f2d503b2f67a4192ecc60cf388348d9b_11) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_39;
            tmp_called_value_39 = PyObject_GetItem(locals_gevent$events$$$class__11_IGeventPatchEvent_276, mod_consts[51]);

            if (tmp_called_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_39 == NULL)) {
                        tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 281;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_value_39);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_f2d503b2f67a4192ecc60cf388348d9b_11->m_frame.f_lineno = 281;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_39, mod_consts[107]);

            Py_DECREF(tmp_called_value_39);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__11_IGeventPatchEvent_276, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_value_40;
            tmp_called_value_40 = PyObject_GetItem(locals_gevent$events$$$class__11_IGeventPatchEvent_276, mod_consts[51]);

            if (tmp_called_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_40 == NULL)) {
                        tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 282;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_value_40);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_f2d503b2f67a4192ecc60cf388348d9b_11->m_frame.f_lineno = 282;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_40, mod_consts[108]);

            Py_DECREF(tmp_called_value_40);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__11_IGeventPatchEvent_276, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f2d503b2f67a4192ecc60cf388348d9b_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f2d503b2f67a4192ecc60cf388348d9b_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f2d503b2f67a4192ecc60cf388348d9b_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f2d503b2f67a4192ecc60cf388348d9b_11,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_f2d503b2f67a4192ecc60cf388348d9b_11);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_34;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_44;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto try_except_handler_34;
            }
            if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
                goto branch_yes_33;
            } else {
                goto branch_no_33;
            }
        }
        branch_yes_33:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__11_IGeventPatchEvent_276, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_34;
        }
        branch_no_33:;
        {
            PyObject *tmp_assign_source_100;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_41 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_41 = mod_consts[105];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_41 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_41);
            tmp_tuple_element_41 = locals_gevent$events$$$class__11_IGeventPatchEvent_276;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 276;
            tmp_assign_source_100 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto try_except_handler_34;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_100;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_99 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_99);
        goto try_return_handler_34;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        Py_DECREF(locals_gevent$events$$$class__11_IGeventPatchEvent_276);
        locals_gevent$events$$$class__11_IGeventPatchEvent_276 = NULL;
        goto try_return_handler_33;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__11_IGeventPatchEvent_276);
        locals_gevent$events$$$class__11_IGeventPatchEvent_276 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto try_except_handler_33;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 276;
        goto try_except_handler_32;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_99);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_dircall_arg1_12;
        tmp_dircall_arg1_12 = mod_consts[76];
        Py_INCREF(tmp_dircall_arg1_12);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
            tmp_assign_source_101 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_102;
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_metaclass_value_12;
        nuitka_bool tmp_condition_result_45;
        int tmp_truth_name_12;
        PyObject *tmp_type_arg_23;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_12;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_12 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_35;
        }
        tmp_condition_result_45 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_value_67 = tmp_class_creation_12__bases;
        tmp_subscript_value_12 = mod_consts[46];
        tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_67, tmp_subscript_value_12, 0);
        if (tmp_type_arg_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_35;
        }
        tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
        Py_DECREF(tmp_type_arg_23);
        if (tmp_metaclass_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_35;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_12);
        condexpr_end_12:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_value_12 = tmp_class_creation_12__bases;
        tmp_assign_source_103 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
        Py_DECREF(tmp_metaclass_value_12);
        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_103;
    }
    {
        bool tmp_condition_result_46;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_68 = tmp_class_creation_12__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_35;
        }
        tmp_condition_result_46 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_46 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_value_23;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_kwargs_value_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_69 = tmp_class_creation_12__metaclass;
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[60]);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_35;
        }
        tmp_tuple_element_42 = mod_consts[109];
        tmp_args_value_23 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_42);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_42 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_42);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_23 = tmp_class_creation_12__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 285;
        tmp_assign_source_104 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_23, tmp_kwargs_value_23);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_value_23);
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_104;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_70 = tmp_class_creation_12__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_35;
        }
        tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_name_value_18;
        PyObject *tmp_default_value_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_mod_expr_left_12 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_71 = tmp_class_creation_12__metaclass;
        tmp_name_value_18 = mod_consts[14];
        tmp_default_value_12 = mod_consts[64];
        tmp_tuple_element_43 = BUILTIN_GETATTR(tstate, tmp_expression_value_71, tmp_name_value_18, tmp_default_value_12);
        if (tmp_tuple_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_35;
        }
        tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_72;
            PyObject *tmp_type_arg_24;
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_24 = tmp_class_creation_12__prepared;
            tmp_expression_value_72 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_expression_value_72 == NULL));
            tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[14]);
            Py_DECREF(tmp_expression_value_72);
            if (tmp_tuple_element_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_43);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_12);
        goto try_except_handler_35;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        Py_DECREF(tmp_mod_expr_right_12);
        if (tmp_raise_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_35;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 285;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_35;
    }
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_105;
    }
    branch_end_34:;
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_43;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_35;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_35;
        }
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 284;
        tmp_called_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_7);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_35;
        }
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_gevent$events$$$class__12_GeventPatchEvent_285 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__12_GeventPatchEvent_285, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__12_GeventPatchEvent_285, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__12_GeventPatchEvent_285, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_37;
        }
        frame_daf1d7b8d8f7b5c3e7e9cb2787acaa1e_12 = MAKE_CLASS_FRAME(tstate, codeobj_daf1d7b8d8f7b5c3e7e9cb2787acaa1e, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_daf1d7b8d8f7b5c3e7e9cb2787acaa1e_12);
        assert(Py_REFCNT(frame_daf1d7b8d8f7b5c3e7e9cb2787acaa1e_12) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__8___init__();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__12_GeventPatchEvent_285, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_2 = "o";
            goto frame_exception_exit_12;
        }


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__9___repr__();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__12_GeventPatchEvent_285, mod_consts[96], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_2 = "o";
            goto frame_exception_exit_12;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_11;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_daf1d7b8d8f7b5c3e7e9cb2787acaa1e_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_daf1d7b8d8f7b5c3e7e9cb2787acaa1e_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_daf1d7b8d8f7b5c3e7e9cb2787acaa1e_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_daf1d7b8d8f7b5c3e7e9cb2787acaa1e_12,
            type_description_2,
            outline_11_var___class__
        );



        assertFrameObject(frame_daf1d7b8d8f7b5c3e7e9cb2787acaa1e_12);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_37;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_cmp_expr_left_12 = tmp_class_creation_12__bases;
            tmp_cmp_expr_right_12 = mod_consts[76];
            tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto try_except_handler_37;
            }
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
        }
        branch_yes_36:;
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__12_GeventPatchEvent_285, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_37;
        }
        branch_no_36:;
        {
            PyObject *tmp_assign_source_107;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_kwargs_value_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_45 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_44 = mod_consts[109];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_44 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_44);
            tmp_tuple_element_44 = locals_gevent$events$$$class__12_GeventPatchEvent_285;
            PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_24 = tmp_class_creation_12__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 285;
            tmp_assign_source_107 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto try_except_handler_37;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_107;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_args_element_value_8 = outline_11_var___class__;
        Py_INCREF(tmp_args_element_value_8);
        goto try_return_handler_37;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        Py_DECREF(locals_gevent$events$$$class__12_GeventPatchEvent_285);
        locals_gevent$events$$$class__12_GeventPatchEvent_285 = NULL;
        goto try_return_handler_36;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__12_GeventPatchEvent_285);
        locals_gevent$events$$$class__12_GeventPatchEvent_285 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto try_except_handler_36;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 285;
        goto try_except_handler_35;
        outline_result_12:;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 284;
        tmp_assign_source_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_35;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_106);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_12__bases);
    Py_DECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_tuple_element_45;
        tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_tuple_element_45 == NULL)) {
            tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_tuple_element_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_38;
        }
        tmp_assign_source_108 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_108, 0, tmp_tuple_element_45);
        assert(tmp_class_creation_13__bases_orig == NULL);
        tmp_class_creation_13__bases_orig = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_dircall_arg1_13;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dircall_arg1_13 = tmp_class_creation_13__bases_orig;
        Py_INCREF(tmp_dircall_arg1_13);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
            tmp_assign_source_109 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_110;
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_metaclass_value_13;
        nuitka_bool tmp_condition_result_49;
        int tmp_truth_name_13;
        PyObject *tmp_type_arg_25;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_13;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
        if (tmp_truth_name_13 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_38;
        }
        tmp_condition_result_49 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_value_73 = tmp_class_creation_13__bases;
        tmp_subscript_value_13 = mod_consts[46];
        tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_73, tmp_subscript_value_13, 0);
        if (tmp_type_arg_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_38;
        }
        tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
        Py_DECREF(tmp_type_arg_25);
        if (tmp_metaclass_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_38;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_13);
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_value_13 = tmp_class_creation_13__bases;
        tmp_assign_source_111 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
        Py_DECREF(tmp_metaclass_value_13);
        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_111;
    }
    {
        bool tmp_condition_result_50;
        PyObject *tmp_expression_value_74;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_74 = tmp_class_creation_13__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_38;
        }
        tmp_condition_result_50 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_args_value_25;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_kwargs_value_25;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_75 = tmp_class_creation_13__metaclass;
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[60]);
        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_38;
        }
        tmp_tuple_element_46 = mod_consts[113];
        tmp_args_value_25 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_46);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_46 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_46);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_value_25 = tmp_class_creation_13__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 300;
        tmp_assign_source_112 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_25, tmp_kwargs_value_25);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_value_25);
        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_112;
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_value_76 = tmp_class_creation_13__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_38;
        }
        tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_51 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_name_value_19;
        PyObject *tmp_default_value_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_mod_expr_left_13 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_77 = tmp_class_creation_13__metaclass;
        tmp_name_value_19 = mod_consts[14];
        tmp_default_value_13 = mod_consts[64];
        tmp_tuple_element_47 = BUILTIN_GETATTR(tstate, tmp_expression_value_77, tmp_name_value_19, tmp_default_value_13);
        if (tmp_tuple_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_38;
        }
        tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_78;
            PyObject *tmp_type_arg_26;
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_26 = tmp_class_creation_13__prepared;
            tmp_expression_value_78 = BUILTIN_TYPE1(tmp_type_arg_26);
            assert(!(tmp_expression_value_78 == NULL));
            tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[14]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_47);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_13);
        goto try_except_handler_38;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        Py_DECREF(tmp_mod_expr_right_13);
        if (tmp_raise_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_38;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 300;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_38;
    }
    branch_no_38:;
    goto branch_end_37;
    branch_no_37:;
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_113;
    }
    branch_end_37:;
    {
        PyObject *tmp_assign_source_114;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_gevent$events$$$class__13_IGeventWillPatchEvent_300 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__13_IGeventWillPatchEvent_300, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__13_IGeventWillPatchEvent_300, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__13_IGeventWillPatchEvent_300, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_40;
        }
        {
            nuitka_bool tmp_condition_result_52;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_cmp_expr_left_13 = tmp_class_creation_13__bases;
            CHECK_OBJECT(tmp_class_creation_13__bases_orig);
            tmp_cmp_expr_right_13 = tmp_class_creation_13__bases_orig;
            tmp_condition_result_52 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            if (tmp_condition_result_52 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto try_except_handler_40;
            }
            if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
                goto branch_yes_39;
            } else {
                goto branch_no_39;
            }
        }
        branch_yes_39:;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dictset_value = tmp_class_creation_13__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__13_IGeventWillPatchEvent_300, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_40;
        }
        branch_no_39:;
        {
            PyObject *tmp_assign_source_115;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_value_26;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_kwargs_value_26;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_value_47 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_48 = mod_consts[113];
            tmp_args_value_26 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_48);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_48 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_48);
            tmp_tuple_element_48 = locals_gevent$events$$$class__13_IGeventWillPatchEvent_300;
            PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_48);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_26 = tmp_class_creation_13__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 300;
            tmp_assign_source_115 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_26, tmp_kwargs_value_26);
            Py_DECREF(tmp_args_value_26);
            if (tmp_assign_source_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto try_except_handler_40;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_115;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_114 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_114);
        goto try_return_handler_40;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        Py_DECREF(locals_gevent$events$$$class__13_IGeventWillPatchEvent_300);
        locals_gevent$events$$$class__13_IGeventWillPatchEvent_300 = NULL;
        goto try_return_handler_39;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__13_IGeventWillPatchEvent_300);
        locals_gevent$events$$$class__13_IGeventWillPatchEvent_300 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto try_except_handler_39;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 300;
        goto try_except_handler_38;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_114);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_13__bases_orig);
    Py_DECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_13__bases);
    Py_DECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_dircall_arg1_14;
        tmp_dircall_arg1_14 = mod_consts[115];
        Py_INCREF(tmp_dircall_arg1_14);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
            tmp_assign_source_116 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__bases == NULL);
        tmp_class_creation_14__bases = tmp_assign_source_116;
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_117;
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_metaclass_value_14;
        nuitka_bool tmp_condition_result_53;
        int tmp_truth_name_14;
        PyObject *tmp_type_arg_27;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_bases_value_14;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_creation_14__bases);
        if (tmp_truth_name_14 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_41;
        }
        tmp_condition_result_53 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_expression_value_79 = tmp_class_creation_14__bases;
        tmp_subscript_value_14 = mod_consts[46];
        tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_79, tmp_subscript_value_14, 0);
        if (tmp_type_arg_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_41;
        }
        tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
        Py_DECREF(tmp_type_arg_27);
        if (tmp_metaclass_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_41;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_14);
        condexpr_end_14:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_bases_value_14 = tmp_class_creation_14__bases;
        tmp_assign_source_118 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
        Py_DECREF(tmp_metaclass_value_14);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_118;
    }
    {
        bool tmp_condition_result_54;
        PyObject *tmp_expression_value_80;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_80 = tmp_class_creation_14__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_41;
        }
        tmp_condition_result_54 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_args_value_27;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_kwargs_value_27;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_81 = tmp_class_creation_14__metaclass;
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[60]);
        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_41;
        }
        tmp_tuple_element_49 = mod_consts[116];
        tmp_args_value_27 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_tuple_element_49 = tmp_class_creation_14__bases;
        PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_value_27 = tmp_class_creation_14__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 309;
        tmp_assign_source_119 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_27, tmp_kwargs_value_27);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_value_27);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_119;
    }
    {
        bool tmp_condition_result_55;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_expression_value_82;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_value_82 = tmp_class_creation_14__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_41;
        }
        tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        assert(!(tmp_res == -1));
        tmp_condition_result_55 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_name_value_20;
        PyObject *tmp_default_value_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_mod_expr_left_14 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_83 = tmp_class_creation_14__metaclass;
        tmp_name_value_20 = mod_consts[14];
        tmp_default_value_14 = mod_consts[64];
        tmp_tuple_element_50 = BUILTIN_GETATTR(tstate, tmp_expression_value_83, tmp_name_value_20, tmp_default_value_14);
        if (tmp_tuple_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_41;
        }
        tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_84;
            PyObject *tmp_type_arg_28;
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_28 = tmp_class_creation_14__prepared;
            tmp_expression_value_84 = BUILTIN_TYPE1(tmp_type_arg_28);
            assert(!(tmp_expression_value_84 == NULL));
            tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[14]);
            Py_DECREF(tmp_expression_value_84);
            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_14);
        goto try_except_handler_41;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        Py_DECREF(tmp_mod_expr_right_14);
        if (tmp_raise_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_41;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 309;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_41;
    }
    branch_no_41:;
    goto branch_end_40;
    branch_no_40:;
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_120;
    }
    branch_end_40:;
    {
        PyObject *tmp_assign_source_121;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_gevent$events$$$class__14_DoNotPatch_309 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__14_DoNotPatch_309, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__14_DoNotPatch_309, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__14_DoNotPatch_309, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_43;
        }
        {
            nuitka_bool tmp_condition_result_56;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_cmp_expr_left_14 = tmp_class_creation_14__bases;
            tmp_cmp_expr_right_14 = mod_consts[115];
            tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto try_except_handler_43;
            }
            if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
                goto branch_yes_42;
            } else {
                goto branch_no_42;
            }
        }
        branch_yes_42:;
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__14_DoNotPatch_309, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_43;
        }
        branch_no_42:;
        {
            PyObject *tmp_assign_source_122;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_28;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_value_49 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_51 = mod_consts[116];
            tmp_args_value_28 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_tuple_element_51 = tmp_class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = locals_gevent$events$$$class__14_DoNotPatch_309;
            PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_28 = tmp_class_creation_14__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 309;
            tmp_assign_source_122 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_28, tmp_kwargs_value_28);
            Py_DECREF(tmp_args_value_28);
            if (tmp_assign_source_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto try_except_handler_43;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_122;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_121 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_121);
        goto try_return_handler_43;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        Py_DECREF(locals_gevent$events$$$class__14_DoNotPatch_309);
        locals_gevent$events$$$class__14_DoNotPatch_309 = NULL;
        goto try_return_handler_42;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__14_DoNotPatch_309);
        locals_gevent$events$$$class__14_DoNotPatch_309 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto try_except_handler_42;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 309;
        goto try_except_handler_41;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_121);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_14__bases);
    Py_DECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_tuple_element_52;
        tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_tuple_element_52 == NULL)) {
            tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
        }

        if (tmp_tuple_element_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_44;
        }
        tmp_assign_source_123 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_123, 0, tmp_tuple_element_52);
        assert(tmp_class_creation_15__bases_orig == NULL);
        tmp_class_creation_15__bases_orig = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_dircall_arg1_15;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dircall_arg1_15 = tmp_class_creation_15__bases_orig;
        Py_INCREF(tmp_dircall_arg1_15);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
            tmp_assign_source_124 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_15__bases == NULL);
        tmp_class_creation_15__bases = tmp_assign_source_124;
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_125;
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_metaclass_value_15;
        nuitka_bool tmp_condition_result_57;
        int tmp_truth_name_15;
        PyObject *tmp_type_arg_29;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_bases_value_15;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_creation_15__bases);
        if (tmp_truth_name_15 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_44;
        }
        tmp_condition_result_57 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_expression_value_85 = tmp_class_creation_15__bases;
        tmp_subscript_value_15 = mod_consts[46];
        tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_85, tmp_subscript_value_15, 0);
        if (tmp_type_arg_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_44;
        }
        tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
        Py_DECREF(tmp_type_arg_29);
        if (tmp_metaclass_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_44;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_15);
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_bases_value_15 = tmp_class_creation_15__bases;
        tmp_assign_source_126 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
        Py_DECREF(tmp_metaclass_value_15);
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_126;
    }
    {
        bool tmp_condition_result_58;
        PyObject *tmp_expression_value_86;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_86 = tmp_class_creation_15__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_44;
        }
        tmp_condition_result_58 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_58 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_value_29;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_kwargs_value_29;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_87 = tmp_class_creation_15__metaclass;
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[60]);
        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_44;
        }
        tmp_tuple_element_53 = mod_consts[118];
        tmp_args_value_29 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_tuple_element_53 = tmp_class_creation_15__bases;
        PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_kwargs_value_29 = tmp_class_creation_15__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 317;
        tmp_assign_source_127 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_29, tmp_kwargs_value_29);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_value_29);
        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_127;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(tmp_class_creation_15__prepared);
        tmp_expression_value_88 = tmp_class_creation_15__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_44;
        }
        tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_59 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_raise_value_15;
        PyObject *tmp_mod_expr_left_15;
        PyObject *tmp_mod_expr_right_15;
        PyObject *tmp_tuple_element_54;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_name_value_21;
        PyObject *tmp_default_value_15;
        tmp_raise_type_15 = PyExc_TypeError;
        tmp_mod_expr_left_15 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_89 = tmp_class_creation_15__metaclass;
        tmp_name_value_21 = mod_consts[14];
        tmp_default_value_15 = mod_consts[64];
        tmp_tuple_element_54 = BUILTIN_GETATTR(tstate, tmp_expression_value_89, tmp_name_value_21, tmp_default_value_15);
        if (tmp_tuple_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_44;
        }
        tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_90;
            PyObject *tmp_type_arg_30;
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_type_arg_30 = tmp_class_creation_15__prepared;
            tmp_expression_value_90 = BUILTIN_TYPE1(tmp_type_arg_30);
            assert(!(tmp_expression_value_90 == NULL));
            tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[14]);
            Py_DECREF(tmp_expression_value_90);
            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_54);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_15);
        goto try_except_handler_44;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
        Py_DECREF(tmp_mod_expr_right_15);
        if (tmp_raise_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_44;
        }
        exception_type = tmp_raise_type_15;
        Py_INCREF(tmp_raise_type_15);
        exception_value = tmp_raise_value_15;
        exception_lineno = 317;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_44;
    }
    branch_no_44:;
    goto branch_end_43;
    branch_no_43:;
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_128;
    }
    branch_end_43:;
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_51;
        PyObject *tmp_called_value_52;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_44;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_44;
        }
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 316;
        tmp_called_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_9);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_44;
        }
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_gevent$events$$$class__15_GeventWillPatchEvent_317 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__15_GeventWillPatchEvent_317, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_46;
        }
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__15_GeventWillPatchEvent_317, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_46;
        }
        tmp_dictset_value = mod_consts[118];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__15_GeventWillPatchEvent_317, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_46;
        }
        {
            nuitka_bool tmp_condition_result_60;
            PyObject *tmp_cmp_expr_left_15;
            PyObject *tmp_cmp_expr_right_15;
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_cmp_expr_left_15 = tmp_class_creation_15__bases;
            CHECK_OBJECT(tmp_class_creation_15__bases_orig);
            tmp_cmp_expr_right_15 = tmp_class_creation_15__bases_orig;
            tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
            if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto try_except_handler_46;
            }
            if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
                goto branch_yes_45;
            } else {
                goto branch_no_45;
            }
        }
        branch_yes_45:;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dictset_value = tmp_class_creation_15__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__15_GeventWillPatchEvent_317, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_46;
        }
        branch_no_45:;
        {
            PyObject *tmp_assign_source_130;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_30;
            CHECK_OBJECT(tmp_class_creation_15__metaclass);
            tmp_called_value_53 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_55 = mod_consts[118];
            tmp_args_value_30 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_tuple_element_55 = tmp_class_creation_15__bases;
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = locals_gevent$events$$$class__15_GeventWillPatchEvent_317;
            PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_value_30 = tmp_class_creation_15__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 317;
            tmp_assign_source_130 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_30, tmp_kwargs_value_30);
            Py_DECREF(tmp_args_value_30);
            if (tmp_assign_source_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto try_except_handler_46;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_130;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_args_element_value_10 = outline_14_var___class__;
        Py_INCREF(tmp_args_element_value_10);
        goto try_return_handler_46;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_46:;
        Py_DECREF(locals_gevent$events$$$class__15_GeventWillPatchEvent_317);
        locals_gevent$events$$$class__15_GeventWillPatchEvent_317 = NULL;
        goto try_return_handler_45;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__15_GeventWillPatchEvent_317);
        locals_gevent$events$$$class__15_GeventWillPatchEvent_317 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto try_except_handler_45;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_45 = exception_type;
        exception_keeper_value_45 = exception_value;
        exception_keeper_tb_45 = exception_tb;
        exception_keeper_lineno_45 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;
        exception_lineno = exception_keeper_lineno_45;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 317;
        goto try_except_handler_44;
        outline_result_15:;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 316;
        tmp_assign_source_129 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_44;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_129);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_15__bases_orig);
    Py_DECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_15__bases);
    Py_DECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__metaclass);
    Py_DECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_tuple_element_56;
        tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_tuple_element_56 == NULL)) {
            tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_tuple_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_47;
        }
        tmp_assign_source_131 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_131, 0, tmp_tuple_element_56);
        assert(tmp_class_creation_16__bases_orig == NULL);
        tmp_class_creation_16__bases_orig = tmp_assign_source_131;
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_dircall_arg1_16;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dircall_arg1_16 = tmp_class_creation_16__bases_orig;
        Py_INCREF(tmp_dircall_arg1_16);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
            tmp_assign_source_132 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_47;
        }
        assert(tmp_class_creation_16__bases == NULL);
        tmp_class_creation_16__bases = tmp_assign_source_132;
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_133;
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_metaclass_value_16;
        nuitka_bool tmp_condition_result_61;
        int tmp_truth_name_16;
        PyObject *tmp_type_arg_31;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_bases_value_16;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_creation_16__bases);
        if (tmp_truth_name_16 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_47;
        }
        tmp_condition_result_61 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_expression_value_91 = tmp_class_creation_16__bases;
        tmp_subscript_value_16 = mod_consts[46];
        tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_91, tmp_subscript_value_16, 0);
        if (tmp_type_arg_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_47;
        }
        tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
        Py_DECREF(tmp_type_arg_31);
        if (tmp_metaclass_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_47;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_16);
        condexpr_end_16:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_bases_value_16 = tmp_class_creation_16__bases;
        tmp_assign_source_134 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
        Py_DECREF(tmp_metaclass_value_16);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_47;
        }
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_134;
    }
    {
        bool tmp_condition_result_62;
        PyObject *tmp_expression_value_92;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_92 = tmp_class_creation_16__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_92, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_47;
        }
        tmp_condition_result_62 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_62 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_args_value_31;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_kwargs_value_31;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_93 = tmp_class_creation_16__metaclass;
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[60]);
        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_47;
        }
        tmp_tuple_element_57 = mod_consts[120];
        tmp_args_value_31 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_tuple_element_57 = tmp_class_creation_16__bases;
        PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_kwargs_value_31 = tmp_class_creation_16__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 322;
        tmp_assign_source_135 = CALL_FUNCTION(tstate, tmp_called_value_54, tmp_args_value_31, tmp_kwargs_value_31);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_value_31);
        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_47;
        }
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_135;
    }
    {
        bool tmp_condition_result_63;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(tmp_class_creation_16__prepared);
        tmp_expression_value_94 = tmp_class_creation_16__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_94, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_47;
        }
        tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_63 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_raise_type_16;
        PyObject *tmp_raise_value_16;
        PyObject *tmp_mod_expr_left_16;
        PyObject *tmp_mod_expr_right_16;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_name_value_22;
        PyObject *tmp_default_value_16;
        tmp_raise_type_16 = PyExc_TypeError;
        tmp_mod_expr_left_16 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_95 = tmp_class_creation_16__metaclass;
        tmp_name_value_22 = mod_consts[14];
        tmp_default_value_16 = mod_consts[64];
        tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_95, tmp_name_value_22, tmp_default_value_16);
        if (tmp_tuple_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_47;
        }
        tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_96;
            PyObject *tmp_type_arg_32;
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_type_arg_32 = tmp_class_creation_16__prepared;
            tmp_expression_value_96 = BUILTIN_TYPE1(tmp_type_arg_32);
            assert(!(tmp_expression_value_96 == NULL));
            tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[14]);
            Py_DECREF(tmp_expression_value_96);
            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_16);
        goto try_except_handler_47;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
        Py_DECREF(tmp_mod_expr_right_16);
        if (tmp_raise_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_47;
        }
        exception_type = tmp_raise_type_16;
        Py_INCREF(tmp_raise_type_16);
        exception_value = tmp_raise_value_16;
        exception_lineno = 322;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_47;
    }
    branch_no_47:;
    goto branch_end_46;
    branch_no_46:;
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_136;
    }
    branch_end_46:;
    {
        PyObject *tmp_assign_source_137;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_gevent$events$$$class__16_IGeventDidPatchEvent_322 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__16_IGeventDidPatchEvent_322, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_49;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__16_IGeventDidPatchEvent_322, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_49;
        }
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__16_IGeventDidPatchEvent_322, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_49;
        }
        {
            nuitka_bool tmp_condition_result_64;
            PyObject *tmp_cmp_expr_left_16;
            PyObject *tmp_cmp_expr_right_16;
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_cmp_expr_left_16 = tmp_class_creation_16__bases;
            CHECK_OBJECT(tmp_class_creation_16__bases_orig);
            tmp_cmp_expr_right_16 = tmp_class_creation_16__bases_orig;
            tmp_condition_result_64 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
            if (tmp_condition_result_64 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;

                goto try_except_handler_49;
            }
            if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
                goto branch_yes_48;
            } else {
                goto branch_no_48;
            }
        }
        branch_yes_48:;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dictset_value = tmp_class_creation_16__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__16_IGeventDidPatchEvent_322, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_49;
        }
        branch_no_48:;
        {
            PyObject *tmp_assign_source_138;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_kwargs_value_32;
            CHECK_OBJECT(tmp_class_creation_16__metaclass);
            tmp_called_value_55 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_59 = mod_consts[120];
            tmp_args_value_32 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_tuple_element_59 = tmp_class_creation_16__bases;
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_59);
            tmp_tuple_element_59 = locals_gevent$events$$$class__16_IGeventDidPatchEvent_322;
            PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_value_32 = tmp_class_creation_16__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 322;
            tmp_assign_source_138 = CALL_FUNCTION(tstate, tmp_called_value_55, tmp_args_value_32, tmp_kwargs_value_32);
            Py_DECREF(tmp_args_value_32);
            if (tmp_assign_source_138 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;

                goto try_except_handler_49;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_138;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_assign_source_137 = outline_15_var___class__;
        Py_INCREF(tmp_assign_source_137);
        goto try_return_handler_49;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_49:;
        Py_DECREF(locals_gevent$events$$$class__16_IGeventDidPatchEvent_322);
        locals_gevent$events$$$class__16_IGeventDidPatchEvent_322 = NULL;
        goto try_return_handler_48;
        // Exception handler code:
        try_except_handler_49:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__16_IGeventDidPatchEvent_322);
        locals_gevent$events$$$class__16_IGeventDidPatchEvent_322 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto try_except_handler_48;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_48;
        exception_value = exception_keeper_value_48;
        exception_tb = exception_keeper_tb_48;
        exception_lineno = exception_keeper_lineno_48;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 322;
        goto try_except_handler_47;
        outline_result_16:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_137);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_class_creation_16__bases_orig);
    Py_DECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_16__bases);
    Py_DECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__metaclass);
    Py_DECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_tuple_element_60;
        tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_tuple_element_60 == NULL)) {
            tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
        }

        if (tmp_tuple_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_50;
        }
        tmp_assign_source_139 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_139, 0, tmp_tuple_element_60);
        assert(tmp_class_creation_17__bases_orig == NULL);
        tmp_class_creation_17__bases_orig = tmp_assign_source_139;
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_dircall_arg1_17;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dircall_arg1_17 = tmp_class_creation_17__bases_orig;
        Py_INCREF(tmp_dircall_arg1_17);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
            tmp_assign_source_140 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_50;
        }
        assert(tmp_class_creation_17__bases == NULL);
        tmp_class_creation_17__bases = tmp_assign_source_140;
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__class_decl_dict == NULL);
        tmp_class_creation_17__class_decl_dict = tmp_assign_source_141;
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_metaclass_value_17;
        nuitka_bool tmp_condition_result_65;
        int tmp_truth_name_17;
        PyObject *tmp_type_arg_33;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_bases_value_17;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_creation_17__bases);
        if (tmp_truth_name_17 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_50;
        }
        tmp_condition_result_65 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_expression_value_97 = tmp_class_creation_17__bases;
        tmp_subscript_value_17 = mod_consts[46];
        tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_97, tmp_subscript_value_17, 0);
        if (tmp_type_arg_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_50;
        }
        tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
        Py_DECREF(tmp_type_arg_33);
        if (tmp_metaclass_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_50;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_17);
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_bases_value_17 = tmp_class_creation_17__bases;
        tmp_assign_source_142 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
        Py_DECREF(tmp_metaclass_value_17);
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_50;
        }
        assert(tmp_class_creation_17__metaclass == NULL);
        tmp_class_creation_17__metaclass = tmp_assign_source_142;
    }
    {
        bool tmp_condition_result_66;
        PyObject *tmp_expression_value_98;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_98 = tmp_class_creation_17__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_50;
        }
        tmp_condition_result_66 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_66 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_value_33;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_kwargs_value_33;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_99 = tmp_class_creation_17__metaclass;
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[60]);
        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_50;
        }
        tmp_tuple_element_61 = mod_consts[122];
        tmp_args_value_33 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_61);
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_tuple_element_61 = tmp_class_creation_17__bases;
        PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_61);
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_kwargs_value_33 = tmp_class_creation_17__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 328;
        tmp_assign_source_143 = CALL_FUNCTION(tstate, tmp_called_value_56, tmp_args_value_33, tmp_kwargs_value_33);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_value_33);
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_50;
        }
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_143;
    }
    {
        bool tmp_condition_result_67;
        PyObject *tmp_operand_value_17;
        PyObject *tmp_expression_value_100;
        CHECK_OBJECT(tmp_class_creation_17__prepared);
        tmp_expression_value_100 = tmp_class_creation_17__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_50;
        }
        tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
        assert(!(tmp_res == -1));
        tmp_condition_result_67 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_67 != false) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        PyObject *tmp_raise_type_17;
        PyObject *tmp_raise_value_17;
        PyObject *tmp_mod_expr_left_17;
        PyObject *tmp_mod_expr_right_17;
        PyObject *tmp_tuple_element_62;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_name_value_23;
        PyObject *tmp_default_value_17;
        tmp_raise_type_17 = PyExc_TypeError;
        tmp_mod_expr_left_17 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_101 = tmp_class_creation_17__metaclass;
        tmp_name_value_23 = mod_consts[14];
        tmp_default_value_17 = mod_consts[64];
        tmp_tuple_element_62 = BUILTIN_GETATTR(tstate, tmp_expression_value_101, tmp_name_value_23, tmp_default_value_17);
        if (tmp_tuple_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_50;
        }
        tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_102;
            PyObject *tmp_type_arg_34;
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_type_arg_34 = tmp_class_creation_17__prepared;
            tmp_expression_value_102 = BUILTIN_TYPE1(tmp_type_arg_34);
            assert(!(tmp_expression_value_102 == NULL));
            tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[14]);
            Py_DECREF(tmp_expression_value_102);
            if (tmp_tuple_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_62);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_mod_expr_right_17);
        goto try_except_handler_50;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
        Py_DECREF(tmp_mod_expr_right_17);
        if (tmp_raise_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_50;
        }
        exception_type = tmp_raise_type_17;
        Py_INCREF(tmp_raise_type_17);
        exception_value = tmp_raise_value_17;
        exception_lineno = 328;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_50;
    }
    branch_no_50:;
    goto branch_end_49;
    branch_no_49:;
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_144;
    }
    branch_end_49:;
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_57;
        PyObject *tmp_called_value_58;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto try_except_handler_50;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto try_except_handler_50;
        }
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 327;
        tmp_called_value_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_11);
        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto try_except_handler_50;
        }
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_set_locals_17 = tmp_class_creation_17__prepared;
            locals_gevent$events$$$class__17_GeventDidPatchEvent_328 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__17_GeventDidPatchEvent_328, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_52;
        }
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__17_GeventDidPatchEvent_328, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_52;
        }
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__17_GeventDidPatchEvent_328, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_52;
        }
        {
            nuitka_bool tmp_condition_result_68;
            PyObject *tmp_cmp_expr_left_17;
            PyObject *tmp_cmp_expr_right_17;
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_cmp_expr_left_17 = tmp_class_creation_17__bases;
            CHECK_OBJECT(tmp_class_creation_17__bases_orig);
            tmp_cmp_expr_right_17 = tmp_class_creation_17__bases_orig;
            tmp_condition_result_68 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
            if (tmp_condition_result_68 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto try_except_handler_52;
            }
            if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
                goto branch_yes_51;
            } else {
                goto branch_no_51;
            }
        }
        branch_yes_51:;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dictset_value = tmp_class_creation_17__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__17_GeventDidPatchEvent_328, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_52;
        }
        branch_no_51:;
        {
            PyObject *tmp_assign_source_146;
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_value_34;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_kwargs_value_34;
            CHECK_OBJECT(tmp_class_creation_17__metaclass);
            tmp_called_value_59 = tmp_class_creation_17__metaclass;
            tmp_tuple_element_63 = mod_consts[122];
            tmp_args_value_34 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_tuple_element_63 = tmp_class_creation_17__bases;
            PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_63);
            tmp_tuple_element_63 = locals_gevent$events$$$class__17_GeventDidPatchEvent_328;
            PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
            tmp_kwargs_value_34 = tmp_class_creation_17__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 328;
            tmp_assign_source_146 = CALL_FUNCTION(tstate, tmp_called_value_59, tmp_args_value_34, tmp_kwargs_value_34);
            Py_DECREF(tmp_args_value_34);
            if (tmp_assign_source_146 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto try_except_handler_52;
            }
            assert(outline_16_var___class__ == NULL);
            outline_16_var___class__ = tmp_assign_source_146;
        }
        CHECK_OBJECT(outline_16_var___class__);
        tmp_args_element_value_12 = outline_16_var___class__;
        Py_INCREF(tmp_args_element_value_12);
        goto try_return_handler_52;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_52:;
        Py_DECREF(locals_gevent$events$$$class__17_GeventDidPatchEvent_328);
        locals_gevent$events$$$class__17_GeventDidPatchEvent_328 = NULL;
        goto try_return_handler_51;
        // Exception handler code:
        try_except_handler_52:;
        exception_keeper_type_50 = exception_type;
        exception_keeper_value_50 = exception_value;
        exception_keeper_tb_50 = exception_tb;
        exception_keeper_lineno_50 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__17_GeventDidPatchEvent_328);
        locals_gevent$events$$$class__17_GeventDidPatchEvent_328 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_50;
        exception_value = exception_keeper_value_50;
        exception_tb = exception_keeper_tb_50;
        exception_lineno = exception_keeper_lineno_50;

        goto try_except_handler_51;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_51:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_51:;
        exception_keeper_type_51 = exception_type;
        exception_keeper_value_51 = exception_value;
        exception_keeper_tb_51 = exception_tb;
        exception_keeper_lineno_51 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_51;
        exception_value = exception_keeper_value_51;
        exception_tb = exception_keeper_tb_51;
        exception_lineno = exception_keeper_lineno_51;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 328;
        goto try_except_handler_50;
        outline_result_17:;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 327;
        tmp_assign_source_145 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto try_except_handler_50;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_145);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    Py_XDECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_52;
    exception_value = exception_keeper_value_52;
    exception_tb = exception_keeper_tb_52;
    exception_lineno = exception_keeper_lineno_52;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_class_creation_17__bases_orig);
    Py_DECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_17__bases);
    Py_DECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    Py_DECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_17__metaclass);
    Py_DECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_17__prepared);
    Py_DECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_tuple_element_64;
        tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_tuple_element_64 == NULL)) {
            tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_tuple_element_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_53;
        }
        tmp_assign_source_147 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_147, 0, tmp_tuple_element_64);
        assert(tmp_class_creation_18__bases_orig == NULL);
        tmp_class_creation_18__bases_orig = tmp_assign_source_147;
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_dircall_arg1_18;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dircall_arg1_18 = tmp_class_creation_18__bases_orig;
        Py_INCREF(tmp_dircall_arg1_18);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_18};
            tmp_assign_source_148 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_53;
        }
        assert(tmp_class_creation_18__bases == NULL);
        tmp_class_creation_18__bases = tmp_assign_source_148;
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__class_decl_dict == NULL);
        tmp_class_creation_18__class_decl_dict = tmp_assign_source_149;
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_metaclass_value_18;
        nuitka_bool tmp_condition_result_69;
        int tmp_truth_name_18;
        PyObject *tmp_type_arg_35;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_bases_value_18;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_creation_18__bases);
        if (tmp_truth_name_18 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_53;
        }
        tmp_condition_result_69 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_expression_value_103 = tmp_class_creation_18__bases;
        tmp_subscript_value_18 = mod_consts[46];
        tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_103, tmp_subscript_value_18, 0);
        if (tmp_type_arg_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_53;
        }
        tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
        Py_DECREF(tmp_type_arg_35);
        if (tmp_metaclass_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_53;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_18);
        condexpr_end_18:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_bases_value_18 = tmp_class_creation_18__bases;
        tmp_assign_source_150 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
        Py_DECREF(tmp_metaclass_value_18);
        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_53;
        }
        assert(tmp_class_creation_18__metaclass == NULL);
        tmp_class_creation_18__metaclass = tmp_assign_source_150;
    }
    {
        bool tmp_condition_result_70;
        PyObject *tmp_expression_value_104;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_104 = tmp_class_creation_18__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_104, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_53;
        }
        tmp_condition_result_70 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_70 != false) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_args_value_35;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_kwargs_value_35;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_105 = tmp_class_creation_18__metaclass;
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[60]);
        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_53;
        }
        tmp_tuple_element_65 = mod_consts[124];
        tmp_args_value_35 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_65);
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_tuple_element_65 = tmp_class_creation_18__bases;
        PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_65);
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_kwargs_value_35 = tmp_class_creation_18__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 333;
        tmp_assign_source_151 = CALL_FUNCTION(tstate, tmp_called_value_60, tmp_args_value_35, tmp_kwargs_value_35);
        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_value_35);
        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_53;
        }
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_151;
    }
    {
        bool tmp_condition_result_71;
        PyObject *tmp_operand_value_18;
        PyObject *tmp_expression_value_106;
        CHECK_OBJECT(tmp_class_creation_18__prepared);
        tmp_expression_value_106 = tmp_class_creation_18__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_53;
        }
        tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_71 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_71 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    {
        PyObject *tmp_raise_type_18;
        PyObject *tmp_raise_value_18;
        PyObject *tmp_mod_expr_left_18;
        PyObject *tmp_mod_expr_right_18;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_name_value_24;
        PyObject *tmp_default_value_18;
        tmp_raise_type_18 = PyExc_TypeError;
        tmp_mod_expr_left_18 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_107 = tmp_class_creation_18__metaclass;
        tmp_name_value_24 = mod_consts[14];
        tmp_default_value_18 = mod_consts[64];
        tmp_tuple_element_66 = BUILTIN_GETATTR(tstate, tmp_expression_value_107, tmp_name_value_24, tmp_default_value_18);
        if (tmp_tuple_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_53;
        }
        tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_108;
            PyObject *tmp_type_arg_36;
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_66);
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_type_arg_36 = tmp_class_creation_18__prepared;
            tmp_expression_value_108 = BUILTIN_TYPE1(tmp_type_arg_36);
            assert(!(tmp_expression_value_108 == NULL));
            tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[14]);
            Py_DECREF(tmp_expression_value_108);
            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_66);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_18);
        goto try_except_handler_53;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
        Py_DECREF(tmp_mod_expr_right_18);
        if (tmp_raise_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_53;
        }
        exception_type = tmp_raise_type_18;
        Py_INCREF(tmp_raise_type_18);
        exception_value = tmp_raise_value_18;
        exception_lineno = 333;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_53;
    }
    branch_no_53:;
    goto branch_end_52;
    branch_no_52:;
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_152;
    }
    branch_end_52:;
    {
        PyObject *tmp_assign_source_153;
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_set_locals_18 = tmp_class_creation_18__prepared;
            locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333 = tmp_set_locals_18;
            Py_INCREF(tmp_set_locals_18);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_55;
        }
        tmp_dictset_value = mod_consts[125];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_55;
        }
        tmp_dictset_value = mod_consts[124];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_55;
        }
        frame_b1b0953a36cfadc6b45155c1a1ad9470_13 = MAKE_CLASS_FRAME(tstate, codeobj_b1b0953a36cfadc6b45155c1a1ad9470, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b1b0953a36cfadc6b45155c1a1ad9470_13);
        assert(Py_REFCNT(frame_b1b0953a36cfadc6b45155c1a1ad9470_13) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_61;
            tmp_called_value_61 = PyObject_GetItem(locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333, mod_consts[51]);

            if (tmp_called_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_61 == NULL)) {
                        tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_61 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 340;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_value_61);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_b1b0953a36cfadc6b45155c1a1ad9470_13->m_frame.f_lineno = 340;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_61, mod_consts[126]);

            Py_DECREF(tmp_called_value_61);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_value_62;
            tmp_called_value_62 = PyObject_GetItem(locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333, mod_consts[51]);

            if (tmp_called_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_62 == NULL)) {
                        tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_62 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 343;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_value_62);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_b1b0953a36cfadc6b45155c1a1ad9470_13->m_frame.f_lineno = 343;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_62, mod_consts[127]);

            Py_DECREF(tmp_called_value_62);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_12;
        frame_exception_exit_13:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b1b0953a36cfadc6b45155c1a1ad9470_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b1b0953a36cfadc6b45155c1a1ad9470_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b1b0953a36cfadc6b45155c1a1ad9470_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b1b0953a36cfadc6b45155c1a1ad9470_13,
            type_description_2,
            outline_17_var___class__
        );



        assertFrameObject(frame_b1b0953a36cfadc6b45155c1a1ad9470_13);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_12;
        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_55;
        skip_nested_handling_12:;
        {
            nuitka_bool tmp_condition_result_72;
            PyObject *tmp_cmp_expr_left_18;
            PyObject *tmp_cmp_expr_right_18;
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_cmp_expr_left_18 = tmp_class_creation_18__bases;
            CHECK_OBJECT(tmp_class_creation_18__bases_orig);
            tmp_cmp_expr_right_18 = tmp_class_creation_18__bases_orig;
            tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
            if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto try_except_handler_55;
            }
            if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
                goto branch_yes_54;
            } else {
                goto branch_no_54;
            }
        }
        branch_yes_54:;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dictset_value = tmp_class_creation_18__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_55;
        }
        branch_no_54:;
        {
            PyObject *tmp_assign_source_154;
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_value_36;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_kwargs_value_36;
            CHECK_OBJECT(tmp_class_creation_18__metaclass);
            tmp_called_value_63 = tmp_class_creation_18__metaclass;
            tmp_tuple_element_67 = mod_consts[124];
            tmp_args_value_36 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_tuple_element_67 = tmp_class_creation_18__bases;
            PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_67);
            tmp_tuple_element_67 = locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333;
            PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
            tmp_kwargs_value_36 = tmp_class_creation_18__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 333;
            tmp_assign_source_154 = CALL_FUNCTION(tstate, tmp_called_value_63, tmp_args_value_36, tmp_kwargs_value_36);
            Py_DECREF(tmp_args_value_36);
            if (tmp_assign_source_154 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto try_except_handler_55;
            }
            assert(outline_17_var___class__ == NULL);
            outline_17_var___class__ = tmp_assign_source_154;
        }
        CHECK_OBJECT(outline_17_var___class__);
        tmp_assign_source_153 = outline_17_var___class__;
        Py_INCREF(tmp_assign_source_153);
        goto try_return_handler_55;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_55:;
        Py_DECREF(locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333);
        locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333 = NULL;
        goto try_return_handler_54;
        // Exception handler code:
        try_except_handler_55:;
        exception_keeper_type_53 = exception_type;
        exception_keeper_value_53 = exception_value;
        exception_keeper_tb_53 = exception_tb;
        exception_keeper_lineno_53 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333);
        locals_gevent$events$$$class__18_IGeventWillPatchModuleEvent_333 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_53;
        exception_value = exception_keeper_value_53;
        exception_tb = exception_keeper_tb_53;
        exception_lineno = exception_keeper_lineno_53;

        goto try_except_handler_54;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_54:;
        CHECK_OBJECT(outline_17_var___class__);
        Py_DECREF(outline_17_var___class__);
        outline_17_var___class__ = NULL;
        goto outline_result_18;
        // Exception handler code:
        try_except_handler_54:;
        exception_keeper_type_54 = exception_type;
        exception_keeper_value_54 = exception_value;
        exception_keeper_tb_54 = exception_tb;
        exception_keeper_lineno_54 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_54;
        exception_value = exception_keeper_value_54;
        exception_tb = exception_keeper_tb_54;
        exception_lineno = exception_keeper_lineno_54;

        goto outline_exception_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_18:;
        exception_lineno = 333;
        goto try_except_handler_53;
        outline_result_18:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_153);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    Py_XDECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_55;
    exception_value = exception_keeper_value_55;
    exception_tb = exception_keeper_tb_55;
    exception_lineno = exception_keeper_lineno_55;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_class_creation_18__bases_orig);
    Py_DECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_18__bases);
    Py_DECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
    Py_DECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_18__metaclass);
    Py_DECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_18__prepared);
    Py_DECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_tuple_element_68;
        tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_tuple_element_68 == NULL)) {
            tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_tuple_element_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_56;
        }
        tmp_assign_source_155 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_155, 0, tmp_tuple_element_68);
        assert(tmp_class_creation_19__bases_orig == NULL);
        tmp_class_creation_19__bases_orig = tmp_assign_source_155;
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_dircall_arg1_19;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dircall_arg1_19 = tmp_class_creation_19__bases_orig;
        Py_INCREF(tmp_dircall_arg1_19);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_19};
            tmp_assign_source_156 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_56;
        }
        assert(tmp_class_creation_19__bases == NULL);
        tmp_class_creation_19__bases = tmp_assign_source_156;
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__class_decl_dict == NULL);
        tmp_class_creation_19__class_decl_dict = tmp_assign_source_157;
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_metaclass_value_19;
        nuitka_bool tmp_condition_result_73;
        int tmp_truth_name_19;
        PyObject *tmp_type_arg_37;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_bases_value_19;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_creation_19__bases);
        if (tmp_truth_name_19 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_56;
        }
        tmp_condition_result_73 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_19;
        } else {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_expression_value_109 = tmp_class_creation_19__bases;
        tmp_subscript_value_19 = mod_consts[46];
        tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_109, tmp_subscript_value_19, 0);
        if (tmp_type_arg_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_56;
        }
        tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
        Py_DECREF(tmp_type_arg_37);
        if (tmp_metaclass_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_56;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_19);
        condexpr_end_19:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_bases_value_19 = tmp_class_creation_19__bases;
        tmp_assign_source_158 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
        Py_DECREF(tmp_metaclass_value_19);
        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_56;
        }
        assert(tmp_class_creation_19__metaclass == NULL);
        tmp_class_creation_19__metaclass = tmp_assign_source_158;
    }
    {
        bool tmp_condition_result_74;
        PyObject *tmp_expression_value_110;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_110 = tmp_class_creation_19__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_110, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_56;
        }
        tmp_condition_result_74 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_74 != false) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_args_value_37;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_kwargs_value_37;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_111 = tmp_class_creation_19__metaclass;
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[60]);
        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_56;
        }
        tmp_tuple_element_69 = mod_consts[21];
        tmp_args_value_37 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_69);
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_tuple_element_69 = tmp_class_creation_19__bases;
        PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_69);
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_kwargs_value_37 = tmp_class_creation_19__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 347;
        tmp_assign_source_159 = CALL_FUNCTION(tstate, tmp_called_value_64, tmp_args_value_37, tmp_kwargs_value_37);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_value_37);
        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_56;
        }
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_159;
    }
    {
        bool tmp_condition_result_75;
        PyObject *tmp_operand_value_19;
        PyObject *tmp_expression_value_112;
        CHECK_OBJECT(tmp_class_creation_19__prepared);
        tmp_expression_value_112 = tmp_class_creation_19__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_112, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_56;
        }
        tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_75 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_75 != false) {
            goto branch_yes_56;
        } else {
            goto branch_no_56;
        }
    }
    branch_yes_56:;
    {
        PyObject *tmp_raise_type_19;
        PyObject *tmp_raise_value_19;
        PyObject *tmp_mod_expr_left_19;
        PyObject *tmp_mod_expr_right_19;
        PyObject *tmp_tuple_element_70;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_name_value_25;
        PyObject *tmp_default_value_19;
        tmp_raise_type_19 = PyExc_TypeError;
        tmp_mod_expr_left_19 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_113 = tmp_class_creation_19__metaclass;
        tmp_name_value_25 = mod_consts[14];
        tmp_default_value_19 = mod_consts[64];
        tmp_tuple_element_70 = BUILTIN_GETATTR(tstate, tmp_expression_value_113, tmp_name_value_25, tmp_default_value_19);
        if (tmp_tuple_element_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_56;
        }
        tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_114;
            PyObject *tmp_type_arg_38;
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_70);
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_type_arg_38 = tmp_class_creation_19__prepared;
            tmp_expression_value_114 = BUILTIN_TYPE1(tmp_type_arg_38);
            assert(!(tmp_expression_value_114 == NULL));
            tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[14]);
            Py_DECREF(tmp_expression_value_114);
            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_70);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_mod_expr_right_19);
        goto try_except_handler_56;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
        Py_DECREF(tmp_mod_expr_right_19);
        if (tmp_raise_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_56;
        }
        exception_type = tmp_raise_type_19;
        Py_INCREF(tmp_raise_type_19);
        exception_value = tmp_raise_value_19;
        exception_lineno = 347;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_56;
    }
    branch_no_56:;
    goto branch_end_55;
    branch_no_55:;
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_160;
    }
    branch_end_55:;
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_called_value_65;
        PyObject *tmp_called_value_66;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto try_except_handler_56;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto try_except_handler_56;
        }
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 346;
        tmp_called_value_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_13);
        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto try_except_handler_56;
        }
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_set_locals_19 = tmp_class_creation_19__prepared;
            locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347 = tmp_set_locals_19;
            Py_INCREF(tmp_set_locals_19);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_58;
        }
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_58;
        }
        tmp_dictset_value = mod_consts[21];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_58;
        }
        frame_060eef5a6c2377246155d0afeecdc887_14 = MAKE_CLASS_FRAME(tstate, codeobj_060eef5a6c2377246155d0afeecdc887, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_060eef5a6c2377246155d0afeecdc887_14);
        assert(Py_REFCNT(frame_060eef5a6c2377246155d0afeecdc887_14) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_2 = "o";
            goto frame_exception_exit_14;
        }


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__10___init__();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_2 = "o";
            goto frame_exception_exit_14;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_13;
        frame_exception_exit_14:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_060eef5a6c2377246155d0afeecdc887_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_060eef5a6c2377246155d0afeecdc887_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_060eef5a6c2377246155d0afeecdc887_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_060eef5a6c2377246155d0afeecdc887_14,
            type_description_2,
            outline_18_var___class__
        );



        assertFrameObject(frame_060eef5a6c2377246155d0afeecdc887_14);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_13;
        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_58;
        skip_nested_handling_13:;
        {
            nuitka_bool tmp_condition_result_76;
            PyObject *tmp_cmp_expr_left_19;
            PyObject *tmp_cmp_expr_right_19;
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_cmp_expr_left_19 = tmp_class_creation_19__bases;
            CHECK_OBJECT(tmp_class_creation_19__bases_orig);
            tmp_cmp_expr_right_19 = tmp_class_creation_19__bases_orig;
            tmp_condition_result_76 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
            if (tmp_condition_result_76 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;

                goto try_except_handler_58;
            }
            if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
                goto branch_yes_57;
            } else {
                goto branch_no_57;
            }
        }
        branch_yes_57:;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dictset_value = tmp_class_creation_19__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_58;
        }
        branch_no_57:;
        {
            PyObject *tmp_assign_source_162;
            PyObject *tmp_called_value_67;
            PyObject *tmp_args_value_38;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_kwargs_value_38;
            CHECK_OBJECT(tmp_class_creation_19__metaclass);
            tmp_called_value_67 = tmp_class_creation_19__metaclass;
            tmp_tuple_element_71 = mod_consts[21];
            tmp_args_value_38 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_tuple_element_71 = tmp_class_creation_19__bases;
            PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_71);
            tmp_tuple_element_71 = locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347;
            PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
            tmp_kwargs_value_38 = tmp_class_creation_19__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 347;
            tmp_assign_source_162 = CALL_FUNCTION(tstate, tmp_called_value_67, tmp_args_value_38, tmp_kwargs_value_38);
            Py_DECREF(tmp_args_value_38);
            if (tmp_assign_source_162 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;

                goto try_except_handler_58;
            }
            assert(outline_18_var___class__ == NULL);
            outline_18_var___class__ = tmp_assign_source_162;
        }
        CHECK_OBJECT(outline_18_var___class__);
        tmp_args_element_value_14 = outline_18_var___class__;
        Py_INCREF(tmp_args_element_value_14);
        goto try_return_handler_58;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_58:;
        Py_DECREF(locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347);
        locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347 = NULL;
        goto try_return_handler_57;
        // Exception handler code:
        try_except_handler_58:;
        exception_keeper_type_56 = exception_type;
        exception_keeper_value_56 = exception_value;
        exception_keeper_tb_56 = exception_tb;
        exception_keeper_lineno_56 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347);
        locals_gevent$events$$$class__19_GeventWillPatchModuleEvent_347 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_56;
        exception_value = exception_keeper_value_56;
        exception_tb = exception_keeper_tb_56;
        exception_lineno = exception_keeper_lineno_56;

        goto try_except_handler_57;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_57:;
        CHECK_OBJECT(outline_18_var___class__);
        Py_DECREF(outline_18_var___class__);
        outline_18_var___class__ = NULL;
        goto outline_result_19;
        // Exception handler code:
        try_except_handler_57:;
        exception_keeper_type_57 = exception_type;
        exception_keeper_value_57 = exception_value;
        exception_keeper_tb_57 = exception_tb;
        exception_keeper_lineno_57 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_57;
        exception_value = exception_keeper_value_57;
        exception_tb = exception_keeper_tb_57;
        exception_lineno = exception_keeper_lineno_57;

        goto outline_exception_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_19:;
        exception_lineno = 347;
        goto try_except_handler_56;
        outline_result_19:;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 346;
        tmp_assign_source_161 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_65);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto try_except_handler_56;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_161);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    Py_XDECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_58;
    exception_value = exception_keeper_value_58;
    exception_tb = exception_keeper_tb_58;
    exception_lineno = exception_keeper_lineno_58;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_class_creation_19__bases_orig);
    Py_DECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_19__bases);
    Py_DECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
    Py_DECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_19__metaclass);
    Py_DECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_19__prepared);
    Py_DECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_tuple_element_72;
        tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_tuple_element_72 == NULL)) {
            tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
        }

        if (tmp_tuple_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_59;
        }
        tmp_assign_source_163 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_163, 0, tmp_tuple_element_72);
        assert(tmp_class_creation_20__bases_orig == NULL);
        tmp_class_creation_20__bases_orig = tmp_assign_source_163;
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_dircall_arg1_20;
        CHECK_OBJECT(tmp_class_creation_20__bases_orig);
        tmp_dircall_arg1_20 = tmp_class_creation_20__bases_orig;
        Py_INCREF(tmp_dircall_arg1_20);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_20};
            tmp_assign_source_164 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_59;
        }
        assert(tmp_class_creation_20__bases == NULL);
        tmp_class_creation_20__bases = tmp_assign_source_164;
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__class_decl_dict == NULL);
        tmp_class_creation_20__class_decl_dict = tmp_assign_source_165;
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_metaclass_value_20;
        nuitka_bool tmp_condition_result_77;
        int tmp_truth_name_20;
        PyObject *tmp_type_arg_39;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_bases_value_20;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_creation_20__bases);
        if (tmp_truth_name_20 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_59;
        }
        tmp_condition_result_77 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_expression_value_115 = tmp_class_creation_20__bases;
        tmp_subscript_value_20 = mod_consts[46];
        tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_115, tmp_subscript_value_20, 0);
        if (tmp_type_arg_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_59;
        }
        tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_39);
        Py_DECREF(tmp_type_arg_39);
        if (tmp_metaclass_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_59;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        tmp_metaclass_value_20 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_20);
        condexpr_end_20:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_bases_value_20 = tmp_class_creation_20__bases;
        tmp_assign_source_166 = SELECT_METACLASS(tstate, tmp_metaclass_value_20, tmp_bases_value_20);
        Py_DECREF(tmp_metaclass_value_20);
        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_59;
        }
        assert(tmp_class_creation_20__metaclass == NULL);
        tmp_class_creation_20__metaclass = tmp_assign_source_166;
    }
    {
        bool tmp_condition_result_78;
        PyObject *tmp_expression_value_116;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_116 = tmp_class_creation_20__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_116, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_59;
        }
        tmp_condition_result_78 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_78 != false) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_args_value_39;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_kwargs_value_39;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_117 = tmp_class_creation_20__metaclass;
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[60]);
        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_59;
        }
        tmp_tuple_element_73 = mod_consts[131];
        tmp_args_value_39 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_73);
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_tuple_element_73 = tmp_class_creation_20__bases;
        PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_73);
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_kwargs_value_39 = tmp_class_creation_20__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 362;
        tmp_assign_source_167 = CALL_FUNCTION(tstate, tmp_called_value_68, tmp_args_value_39, tmp_kwargs_value_39);
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_value_39);
        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_59;
        }
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_167;
    }
    {
        bool tmp_condition_result_79;
        PyObject *tmp_operand_value_20;
        PyObject *tmp_expression_value_118;
        CHECK_OBJECT(tmp_class_creation_20__prepared);
        tmp_expression_value_118 = tmp_class_creation_20__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_118, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_59;
        }
        tmp_operand_value_20 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
        assert(!(tmp_res == -1));
        tmp_condition_result_79 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_79 != false) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
    }
    branch_yes_59:;
    {
        PyObject *tmp_raise_type_20;
        PyObject *tmp_raise_value_20;
        PyObject *tmp_mod_expr_left_20;
        PyObject *tmp_mod_expr_right_20;
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_name_value_26;
        PyObject *tmp_default_value_20;
        tmp_raise_type_20 = PyExc_TypeError;
        tmp_mod_expr_left_20 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_119 = tmp_class_creation_20__metaclass;
        tmp_name_value_26 = mod_consts[14];
        tmp_default_value_20 = mod_consts[64];
        tmp_tuple_element_74 = BUILTIN_GETATTR(tstate, tmp_expression_value_119, tmp_name_value_26, tmp_default_value_20);
        if (tmp_tuple_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_59;
        }
        tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_120;
            PyObject *tmp_type_arg_40;
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_type_arg_40 = tmp_class_creation_20__prepared;
            tmp_expression_value_120 = BUILTIN_TYPE1(tmp_type_arg_40);
            assert(!(tmp_expression_value_120 == NULL));
            tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[14]);
            Py_DECREF(tmp_expression_value_120);
            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_74);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_mod_expr_right_20);
        goto try_except_handler_59;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_raise_value_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
        Py_DECREF(tmp_mod_expr_right_20);
        if (tmp_raise_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_59;
        }
        exception_type = tmp_raise_type_20;
        Py_INCREF(tmp_raise_type_20);
        exception_value = tmp_raise_value_20;
        exception_lineno = 362;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_59;
    }
    branch_no_59:;
    goto branch_end_58;
    branch_no_58:;
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_168;
    }
    branch_end_58:;
    {
        PyObject *tmp_assign_source_169;
        {
            PyObject *tmp_set_locals_20;
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_set_locals_20 = tmp_class_creation_20__prepared;
            locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362 = tmp_set_locals_20;
            Py_INCREF(tmp_set_locals_20);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_61;
        }
        tmp_dictset_value = mod_consts[132];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_61;
        }
        tmp_dictset_value = mod_consts[131];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_61;
        }
        frame_221db5a267b413d793b1777d660cb63c_15 = MAKE_CLASS_FRAME(tstate, codeobj_221db5a267b413d793b1777d660cb63c, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_221db5a267b413d793b1777d660cb63c_15);
        assert(Py_REFCNT(frame_221db5a267b413d793b1777d660cb63c_15) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_69;
            tmp_called_value_69 = PyObject_GetItem(locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362, mod_consts[51]);

            if (tmp_called_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_69 == NULL)) {
                        tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_69 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 368;
                        type_description_2 = "o";
                        goto frame_exception_exit_15;
                    }
                    Py_INCREF(tmp_called_value_69);
                } else {
                    goto frame_exception_exit_15;
                }
            }

            frame_221db5a267b413d793b1777d660cb63c_15->m_frame.f_lineno = 368;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_69, mod_consts[126]);

            Py_DECREF(tmp_called_value_69);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_14;
        frame_exception_exit_15:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_221db5a267b413d793b1777d660cb63c_15, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_221db5a267b413d793b1777d660cb63c_15->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_221db5a267b413d793b1777d660cb63c_15, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_221db5a267b413d793b1777d660cb63c_15,
            type_description_2,
            outline_19_var___class__
        );



        assertFrameObject(frame_221db5a267b413d793b1777d660cb63c_15);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_14;
        frame_no_exception_14:;
        goto skip_nested_handling_14;
        nested_frame_exit_14:;

        goto try_except_handler_61;
        skip_nested_handling_14:;
        {
            nuitka_bool tmp_condition_result_80;
            PyObject *tmp_cmp_expr_left_20;
            PyObject *tmp_cmp_expr_right_20;
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_cmp_expr_left_20 = tmp_class_creation_20__bases;
            CHECK_OBJECT(tmp_class_creation_20__bases_orig);
            tmp_cmp_expr_right_20 = tmp_class_creation_20__bases_orig;
            tmp_condition_result_80 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
            if (tmp_condition_result_80 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto try_except_handler_61;
            }
            if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
                goto branch_yes_60;
            } else {
                goto branch_no_60;
            }
        }
        branch_yes_60:;
        CHECK_OBJECT(tmp_class_creation_20__bases_orig);
        tmp_dictset_value = tmp_class_creation_20__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_61;
        }
        branch_no_60:;
        {
            PyObject *tmp_assign_source_170;
            PyObject *tmp_called_value_70;
            PyObject *tmp_args_value_40;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_kwargs_value_40;
            CHECK_OBJECT(tmp_class_creation_20__metaclass);
            tmp_called_value_70 = tmp_class_creation_20__metaclass;
            tmp_tuple_element_75 = mod_consts[131];
            tmp_args_value_40 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_75);
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_tuple_element_75 = tmp_class_creation_20__bases;
            PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_75);
            tmp_tuple_element_75 = locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362;
            PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_75);
            CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
            tmp_kwargs_value_40 = tmp_class_creation_20__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 362;
            tmp_assign_source_170 = CALL_FUNCTION(tstate, tmp_called_value_70, tmp_args_value_40, tmp_kwargs_value_40);
            Py_DECREF(tmp_args_value_40);
            if (tmp_assign_source_170 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto try_except_handler_61;
            }
            assert(outline_19_var___class__ == NULL);
            outline_19_var___class__ = tmp_assign_source_170;
        }
        CHECK_OBJECT(outline_19_var___class__);
        tmp_assign_source_169 = outline_19_var___class__;
        Py_INCREF(tmp_assign_source_169);
        goto try_return_handler_61;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_61:;
        Py_DECREF(locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362);
        locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362 = NULL;
        goto try_return_handler_60;
        // Exception handler code:
        try_except_handler_61:;
        exception_keeper_type_59 = exception_type;
        exception_keeper_value_59 = exception_value;
        exception_keeper_tb_59 = exception_tb;
        exception_keeper_lineno_59 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362);
        locals_gevent$events$$$class__20_IGeventDidPatchModuleEvent_362 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_59;
        exception_value = exception_keeper_value_59;
        exception_tb = exception_keeper_tb_59;
        exception_lineno = exception_keeper_lineno_59;

        goto try_except_handler_60;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_60:;
        CHECK_OBJECT(outline_19_var___class__);
        Py_DECREF(outline_19_var___class__);
        outline_19_var___class__ = NULL;
        goto outline_result_20;
        // Exception handler code:
        try_except_handler_60:;
        exception_keeper_type_60 = exception_type;
        exception_keeper_value_60 = exception_value;
        exception_keeper_tb_60 = exception_tb;
        exception_keeper_lineno_60 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_60;
        exception_value = exception_keeper_value_60;
        exception_tb = exception_keeper_tb_60;
        exception_lineno = exception_keeper_lineno_60;

        goto outline_exception_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_20:;
        exception_lineno = 362;
        goto try_except_handler_59;
        outline_result_20:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_169);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_20__bases_orig);
    tmp_class_creation_20__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    Py_XDECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_61;
    exception_value = exception_keeper_value_61;
    exception_tb = exception_keeper_tb_61;
    exception_lineno = exception_keeper_lineno_61;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_class_creation_20__bases_orig);
    Py_DECREF(tmp_class_creation_20__bases_orig);
    tmp_class_creation_20__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_20__bases);
    Py_DECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
    Py_DECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_20__metaclass);
    Py_DECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_20__prepared);
    Py_DECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_tuple_element_76;
        tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_tuple_element_76 == NULL)) {
            tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        if (tmp_tuple_element_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_62;
        }
        tmp_assign_source_171 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_171, 0, tmp_tuple_element_76);
        assert(tmp_class_creation_21__bases_orig == NULL);
        tmp_class_creation_21__bases_orig = tmp_assign_source_171;
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_dircall_arg1_21;
        CHECK_OBJECT(tmp_class_creation_21__bases_orig);
        tmp_dircall_arg1_21 = tmp_class_creation_21__bases_orig;
        Py_INCREF(tmp_dircall_arg1_21);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_21};
            tmp_assign_source_172 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_62;
        }
        assert(tmp_class_creation_21__bases == NULL);
        tmp_class_creation_21__bases = tmp_assign_source_172;
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__class_decl_dict == NULL);
        tmp_class_creation_21__class_decl_dict = tmp_assign_source_173;
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_metaclass_value_21;
        nuitka_bool tmp_condition_result_81;
        int tmp_truth_name_21;
        PyObject *tmp_type_arg_41;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_bases_value_21;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_truth_name_21 = CHECK_IF_TRUE(tmp_class_creation_21__bases);
        if (tmp_truth_name_21 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_62;
        }
        tmp_condition_result_81 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_21;
        } else {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_expression_value_121 = tmp_class_creation_21__bases;
        tmp_subscript_value_21 = mod_consts[46];
        tmp_type_arg_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_121, tmp_subscript_value_21, 0);
        if (tmp_type_arg_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_62;
        }
        tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_41);
        Py_DECREF(tmp_type_arg_41);
        if (tmp_metaclass_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_62;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        tmp_metaclass_value_21 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_21);
        condexpr_end_21:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_bases_value_21 = tmp_class_creation_21__bases;
        tmp_assign_source_174 = SELECT_METACLASS(tstate, tmp_metaclass_value_21, tmp_bases_value_21);
        Py_DECREF(tmp_metaclass_value_21);
        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_62;
        }
        assert(tmp_class_creation_21__metaclass == NULL);
        tmp_class_creation_21__metaclass = tmp_assign_source_174;
    }
    {
        bool tmp_condition_result_82;
        PyObject *tmp_expression_value_122;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_122 = tmp_class_creation_21__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_122, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_62;
        }
        tmp_condition_result_82 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_82 != false) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
    }
    branch_yes_61:;
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_args_value_41;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_kwargs_value_41;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_123 = tmp_class_creation_21__metaclass;
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[60]);
        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_62;
        }
        tmp_tuple_element_77 = mod_consts[24];
        tmp_args_value_41 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_77);
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_tuple_element_77 = tmp_class_creation_21__bases;
        PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_77);
        CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
        tmp_kwargs_value_41 = tmp_class_creation_21__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 373;
        tmp_assign_source_175 = CALL_FUNCTION(tstate, tmp_called_value_71, tmp_args_value_41, tmp_kwargs_value_41);
        Py_DECREF(tmp_called_value_71);
        Py_DECREF(tmp_args_value_41);
        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_62;
        }
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_175;
    }
    {
        bool tmp_condition_result_83;
        PyObject *tmp_operand_value_21;
        PyObject *tmp_expression_value_124;
        CHECK_OBJECT(tmp_class_creation_21__prepared);
        tmp_expression_value_124 = tmp_class_creation_21__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_124, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_62;
        }
        tmp_operand_value_21 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_83 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_83 != false) {
            goto branch_yes_62;
        } else {
            goto branch_no_62;
        }
    }
    branch_yes_62:;
    {
        PyObject *tmp_raise_type_21;
        PyObject *tmp_raise_value_21;
        PyObject *tmp_mod_expr_left_21;
        PyObject *tmp_mod_expr_right_21;
        PyObject *tmp_tuple_element_78;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_name_value_27;
        PyObject *tmp_default_value_21;
        tmp_raise_type_21 = PyExc_TypeError;
        tmp_mod_expr_left_21 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_125 = tmp_class_creation_21__metaclass;
        tmp_name_value_27 = mod_consts[14];
        tmp_default_value_21 = mod_consts[64];
        tmp_tuple_element_78 = BUILTIN_GETATTR(tstate, tmp_expression_value_125, tmp_name_value_27, tmp_default_value_21);
        if (tmp_tuple_element_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_62;
        }
        tmp_mod_expr_right_21 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_126;
            PyObject *tmp_type_arg_42;
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 0, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_type_arg_42 = tmp_class_creation_21__prepared;
            tmp_expression_value_126 = BUILTIN_TYPE1(tmp_type_arg_42);
            assert(!(tmp_expression_value_126 == NULL));
            tmp_tuple_element_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[14]);
            Py_DECREF(tmp_expression_value_126);
            if (tmp_tuple_element_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 1, tmp_tuple_element_78);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_mod_expr_right_21);
        goto try_except_handler_62;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_raise_value_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
        Py_DECREF(tmp_mod_expr_right_21);
        if (tmp_raise_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_62;
        }
        exception_type = tmp_raise_type_21;
        Py_INCREF(tmp_raise_type_21);
        exception_value = tmp_raise_value_21;
        exception_lineno = 373;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_62;
    }
    branch_no_62:;
    goto branch_end_61;
    branch_no_61:;
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_176;
    }
    branch_end_61:;
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_called_value_72;
        PyObject *tmp_called_value_73;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_62;
        }
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_62;
        }
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 372;
        tmp_called_value_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_15);
        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_62;
        }
        {
            PyObject *tmp_set_locals_21;
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_set_locals_21 = tmp_class_creation_21__prepared;
            locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373 = tmp_set_locals_21;
            Py_INCREF(tmp_set_locals_21);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_64;
        }
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_64;
        }
        tmp_dictset_value = mod_consts[24];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_64;
        }
        frame_29be3c6119cdb0f6b702319526330203_16 = MAKE_CLASS_FRAME(tstate, codeobj_29be3c6119cdb0f6b702319526330203, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_29be3c6119cdb0f6b702319526330203_16);
        assert(Py_REFCNT(frame_29be3c6119cdb0f6b702319526330203_16) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[134];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_2 = "o";
            goto frame_exception_exit_16;
        }


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__11___init__();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_2 = "o";
            goto frame_exception_exit_16;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_15;
        frame_exception_exit_16:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_29be3c6119cdb0f6b702319526330203_16, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_29be3c6119cdb0f6b702319526330203_16->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_29be3c6119cdb0f6b702319526330203_16, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_29be3c6119cdb0f6b702319526330203_16,
            type_description_2,
            outline_20_var___class__
        );



        assertFrameObject(frame_29be3c6119cdb0f6b702319526330203_16);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_15;
        frame_no_exception_15:;
        goto skip_nested_handling_15;
        nested_frame_exit_15:;

        goto try_except_handler_64;
        skip_nested_handling_15:;
        {
            nuitka_bool tmp_condition_result_84;
            PyObject *tmp_cmp_expr_left_21;
            PyObject *tmp_cmp_expr_right_21;
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_cmp_expr_left_21 = tmp_class_creation_21__bases;
            CHECK_OBJECT(tmp_class_creation_21__bases_orig);
            tmp_cmp_expr_right_21 = tmp_class_creation_21__bases_orig;
            tmp_condition_result_84 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
            if (tmp_condition_result_84 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto try_except_handler_64;
            }
            if (tmp_condition_result_84 == NUITKA_BOOL_TRUE) {
                goto branch_yes_63;
            } else {
                goto branch_no_63;
            }
        }
        branch_yes_63:;
        CHECK_OBJECT(tmp_class_creation_21__bases_orig);
        tmp_dictset_value = tmp_class_creation_21__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto try_except_handler_64;
        }
        branch_no_63:;
        {
            PyObject *tmp_assign_source_178;
            PyObject *tmp_called_value_74;
            PyObject *tmp_args_value_42;
            PyObject *tmp_tuple_element_79;
            PyObject *tmp_kwargs_value_42;
            CHECK_OBJECT(tmp_class_creation_21__metaclass);
            tmp_called_value_74 = tmp_class_creation_21__metaclass;
            tmp_tuple_element_79 = mod_consts[24];
            tmp_args_value_42 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_79);
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_tuple_element_79 = tmp_class_creation_21__bases;
            PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_79);
            tmp_tuple_element_79 = locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373;
            PyTuple_SET_ITEM0(tmp_args_value_42, 2, tmp_tuple_element_79);
            CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
            tmp_kwargs_value_42 = tmp_class_creation_21__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 373;
            tmp_assign_source_178 = CALL_FUNCTION(tstate, tmp_called_value_74, tmp_args_value_42, tmp_kwargs_value_42);
            Py_DECREF(tmp_args_value_42);
            if (tmp_assign_source_178 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto try_except_handler_64;
            }
            assert(outline_20_var___class__ == NULL);
            outline_20_var___class__ = tmp_assign_source_178;
        }
        CHECK_OBJECT(outline_20_var___class__);
        tmp_args_element_value_16 = outline_20_var___class__;
        Py_INCREF(tmp_args_element_value_16);
        goto try_return_handler_64;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_64:;
        Py_DECREF(locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373);
        locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373 = NULL;
        goto try_return_handler_63;
        // Exception handler code:
        try_except_handler_64:;
        exception_keeper_type_62 = exception_type;
        exception_keeper_value_62 = exception_value;
        exception_keeper_tb_62 = exception_tb;
        exception_keeper_lineno_62 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373);
        locals_gevent$events$$$class__21_GeventDidPatchModuleEvent_373 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_62;
        exception_value = exception_keeper_value_62;
        exception_tb = exception_keeper_tb_62;
        exception_lineno = exception_keeper_lineno_62;

        goto try_except_handler_63;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_63:;
        CHECK_OBJECT(outline_20_var___class__);
        Py_DECREF(outline_20_var___class__);
        outline_20_var___class__ = NULL;
        goto outline_result_21;
        // Exception handler code:
        try_except_handler_63:;
        exception_keeper_type_63 = exception_type;
        exception_keeper_value_63 = exception_value;
        exception_keeper_tb_63 = exception_tb;
        exception_keeper_lineno_63 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_63;
        exception_value = exception_keeper_value_63;
        exception_tb = exception_keeper_tb_63;
        exception_lineno = exception_keeper_lineno_63;

        goto outline_exception_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_21:;
        exception_lineno = 373;
        goto try_except_handler_62;
        outline_result_21:;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 372;
        tmp_assign_source_177 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_62;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_177);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_64 = exception_type;
    exception_keeper_value_64 = exception_value;
    exception_keeper_tb_64 = exception_tb;
    exception_keeper_lineno_64 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_21__bases_orig);
    tmp_class_creation_21__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    Py_XDECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_64;
    exception_value = exception_keeper_value_64;
    exception_tb = exception_keeper_tb_64;
    exception_lineno = exception_keeper_lineno_64;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_class_creation_21__bases_orig);
    Py_DECREF(tmp_class_creation_21__bases_orig);
    tmp_class_creation_21__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_21__bases);
    Py_DECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
    Py_DECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_21__metaclass);
    Py_DECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_21__prepared);
    Py_DECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_tuple_element_80;
        tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_tuple_element_80 == NULL)) {
            tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_tuple_element_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_65;
        }
        tmp_assign_source_179 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_179, 0, tmp_tuple_element_80);
        assert(tmp_class_creation_22__bases_orig == NULL);
        tmp_class_creation_22__bases_orig = tmp_assign_source_179;
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_dircall_arg1_22;
        CHECK_OBJECT(tmp_class_creation_22__bases_orig);
        tmp_dircall_arg1_22 = tmp_class_creation_22__bases_orig;
        Py_INCREF(tmp_dircall_arg1_22);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_22};
            tmp_assign_source_180 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_65;
        }
        assert(tmp_class_creation_22__bases == NULL);
        tmp_class_creation_22__bases = tmp_assign_source_180;
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__class_decl_dict == NULL);
        tmp_class_creation_22__class_decl_dict = tmp_assign_source_181;
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_metaclass_value_22;
        nuitka_bool tmp_condition_result_85;
        int tmp_truth_name_22;
        PyObject *tmp_type_arg_43;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_bases_value_22;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_truth_name_22 = CHECK_IF_TRUE(tmp_class_creation_22__bases);
        if (tmp_truth_name_22 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_65;
        }
        tmp_condition_result_85 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_22;
        } else {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_expression_value_127 = tmp_class_creation_22__bases;
        tmp_subscript_value_22 = mod_consts[46];
        tmp_type_arg_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_127, tmp_subscript_value_22, 0);
        if (tmp_type_arg_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_65;
        }
        tmp_metaclass_value_22 = BUILTIN_TYPE1(tmp_type_arg_43);
        Py_DECREF(tmp_type_arg_43);
        if (tmp_metaclass_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_65;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        tmp_metaclass_value_22 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_22);
        condexpr_end_22:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_bases_value_22 = tmp_class_creation_22__bases;
        tmp_assign_source_182 = SELECT_METACLASS(tstate, tmp_metaclass_value_22, tmp_bases_value_22);
        Py_DECREF(tmp_metaclass_value_22);
        if (tmp_assign_source_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_65;
        }
        assert(tmp_class_creation_22__metaclass == NULL);
        tmp_class_creation_22__metaclass = tmp_assign_source_182;
    }
    {
        bool tmp_condition_result_86;
        PyObject *tmp_expression_value_128;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_128 = tmp_class_creation_22__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_128, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_65;
        }
        tmp_condition_result_86 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_86 != false) {
            goto branch_yes_64;
        } else {
            goto branch_no_64;
        }
    }
    branch_yes_64:;
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_args_value_43;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_kwargs_value_43;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_129 = tmp_class_creation_22__metaclass;
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[60]);
        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_65;
        }
        tmp_tuple_element_81 = mod_consts[136];
        tmp_args_value_43 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_81);
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_tuple_element_81 = tmp_class_creation_22__bases;
        PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_81);
        CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
        tmp_kwargs_value_43 = tmp_class_creation_22__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 389;
        tmp_assign_source_183 = CALL_FUNCTION(tstate, tmp_called_value_75, tmp_args_value_43, tmp_kwargs_value_43);
        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_args_value_43);
        if (tmp_assign_source_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_65;
        }
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_183;
    }
    {
        bool tmp_condition_result_87;
        PyObject *tmp_operand_value_22;
        PyObject *tmp_expression_value_130;
        CHECK_OBJECT(tmp_class_creation_22__prepared);
        tmp_expression_value_130 = tmp_class_creation_22__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_130, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_65;
        }
        tmp_operand_value_22 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_87 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_87 != false) {
            goto branch_yes_65;
        } else {
            goto branch_no_65;
        }
    }
    branch_yes_65:;
    {
        PyObject *tmp_raise_type_22;
        PyObject *tmp_raise_value_22;
        PyObject *tmp_mod_expr_left_22;
        PyObject *tmp_mod_expr_right_22;
        PyObject *tmp_tuple_element_82;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_name_value_28;
        PyObject *tmp_default_value_22;
        tmp_raise_type_22 = PyExc_TypeError;
        tmp_mod_expr_left_22 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_131 = tmp_class_creation_22__metaclass;
        tmp_name_value_28 = mod_consts[14];
        tmp_default_value_22 = mod_consts[64];
        tmp_tuple_element_82 = BUILTIN_GETATTR(tstate, tmp_expression_value_131, tmp_name_value_28, tmp_default_value_22);
        if (tmp_tuple_element_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_65;
        }
        tmp_mod_expr_right_22 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_132;
            PyObject *tmp_type_arg_44;
            PyTuple_SET_ITEM(tmp_mod_expr_right_22, 0, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_type_arg_44 = tmp_class_creation_22__prepared;
            tmp_expression_value_132 = BUILTIN_TYPE1(tmp_type_arg_44);
            assert(!(tmp_expression_value_132 == NULL));
            tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[14]);
            Py_DECREF(tmp_expression_value_132);
            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_22, 1, tmp_tuple_element_82);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_mod_expr_right_22);
        goto try_except_handler_65;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_raise_value_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
        Py_DECREF(tmp_mod_expr_right_22);
        if (tmp_raise_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_65;
        }
        exception_type = tmp_raise_type_22;
        Py_INCREF(tmp_raise_type_22);
        exception_value = tmp_raise_value_22;
        exception_lineno = 389;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_65;
    }
    branch_no_65:;
    goto branch_end_64;
    branch_no_64:;
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_184;
    }
    branch_end_64:;
    {
        PyObject *tmp_assign_source_185;
        {
            PyObject *tmp_set_locals_22;
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_set_locals_22 = tmp_class_creation_22__prepared;
            locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389 = tmp_set_locals_22;
            Py_INCREF(tmp_set_locals_22);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_67;
        }
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_67;
        }
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_67;
        }
        frame_a1c1703403d724fa8d8da82d4499ea72_17 = MAKE_CLASS_FRAME(tstate, codeobj_a1c1703403d724fa8d8da82d4499ea72, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_a1c1703403d724fa8d8da82d4499ea72_17);
        assert(Py_REFCNT(frame_a1c1703403d724fa8d8da82d4499ea72_17) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_76;
            tmp_called_value_76 = PyObject_GetItem(locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389, mod_consts[51]);

            if (tmp_called_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_76 == NULL)) {
                        tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_76 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 411;
                        type_description_2 = "o";
                        goto frame_exception_exit_17;
                    }
                    Py_INCREF(tmp_called_value_76);
                } else {
                    goto frame_exception_exit_17;
                }
            }

            frame_a1c1703403d724fa8d8da82d4499ea72_17->m_frame.f_lineno = 411;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_76, mod_consts[138]);

            Py_DECREF(tmp_called_value_76);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }
        {
            PyObject *tmp_called_value_77;
            tmp_called_value_77 = PyObject_GetItem(locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389, mod_consts[51]);

            if (tmp_called_value_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_77 == NULL)) {
                        tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_77 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 416;
                        type_description_2 = "o";
                        goto frame_exception_exit_17;
                    }
                    Py_INCREF(tmp_called_value_77);
                } else {
                    goto frame_exception_exit_17;
                }
            }

            frame_a1c1703403d724fa8d8da82d4499ea72_17->m_frame.f_lineno = 416;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_77, mod_consts[139]);

            Py_DECREF(tmp_called_value_77);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__12_will_patch_module();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389, mod_consts[142], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_2 = "o";
            goto frame_exception_exit_17;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_16;
        frame_exception_exit_17:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a1c1703403d724fa8d8da82d4499ea72_17, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a1c1703403d724fa8d8da82d4499ea72_17->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a1c1703403d724fa8d8da82d4499ea72_17, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a1c1703403d724fa8d8da82d4499ea72_17,
            type_description_2,
            outline_21_var___class__
        );



        assertFrameObject(frame_a1c1703403d724fa8d8da82d4499ea72_17);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_16;
        frame_no_exception_16:;
        goto skip_nested_handling_16;
        nested_frame_exit_16:;

        goto try_except_handler_67;
        skip_nested_handling_16:;
        {
            nuitka_bool tmp_condition_result_88;
            PyObject *tmp_cmp_expr_left_22;
            PyObject *tmp_cmp_expr_right_22;
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_cmp_expr_left_22 = tmp_class_creation_22__bases;
            CHECK_OBJECT(tmp_class_creation_22__bases_orig);
            tmp_cmp_expr_right_22 = tmp_class_creation_22__bases_orig;
            tmp_condition_result_88 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
            if (tmp_condition_result_88 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;

                goto try_except_handler_67;
            }
            if (tmp_condition_result_88 == NUITKA_BOOL_TRUE) {
                goto branch_yes_66;
            } else {
                goto branch_no_66;
            }
        }
        branch_yes_66:;
        CHECK_OBJECT(tmp_class_creation_22__bases_orig);
        tmp_dictset_value = tmp_class_creation_22__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_67;
        }
        branch_no_66:;
        {
            PyObject *tmp_assign_source_186;
            PyObject *tmp_called_value_78;
            PyObject *tmp_args_value_44;
            PyObject *tmp_tuple_element_83;
            PyObject *tmp_kwargs_value_44;
            CHECK_OBJECT(tmp_class_creation_22__metaclass);
            tmp_called_value_78 = tmp_class_creation_22__metaclass;
            tmp_tuple_element_83 = mod_consts[136];
            tmp_args_value_44 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_83);
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_tuple_element_83 = tmp_class_creation_22__bases;
            PyTuple_SET_ITEM0(tmp_args_value_44, 1, tmp_tuple_element_83);
            tmp_tuple_element_83 = locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389;
            PyTuple_SET_ITEM0(tmp_args_value_44, 2, tmp_tuple_element_83);
            CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
            tmp_kwargs_value_44 = tmp_class_creation_22__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 389;
            tmp_assign_source_186 = CALL_FUNCTION(tstate, tmp_called_value_78, tmp_args_value_44, tmp_kwargs_value_44);
            Py_DECREF(tmp_args_value_44);
            if (tmp_assign_source_186 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;

                goto try_except_handler_67;
            }
            assert(outline_21_var___class__ == NULL);
            outline_21_var___class__ = tmp_assign_source_186;
        }
        CHECK_OBJECT(outline_21_var___class__);
        tmp_assign_source_185 = outline_21_var___class__;
        Py_INCREF(tmp_assign_source_185);
        goto try_return_handler_67;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_67:;
        Py_DECREF(locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389);
        locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389 = NULL;
        goto try_return_handler_66;
        // Exception handler code:
        try_except_handler_67:;
        exception_keeper_type_65 = exception_type;
        exception_keeper_value_65 = exception_value;
        exception_keeper_tb_65 = exception_tb;
        exception_keeper_lineno_65 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389);
        locals_gevent$events$$$class__22_IGeventWillPatchAllEvent_389 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_65;
        exception_value = exception_keeper_value_65;
        exception_tb = exception_keeper_tb_65;
        exception_lineno = exception_keeper_lineno_65;

        goto try_except_handler_66;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_66:;
        CHECK_OBJECT(outline_21_var___class__);
        Py_DECREF(outline_21_var___class__);
        outline_21_var___class__ = NULL;
        goto outline_result_22;
        // Exception handler code:
        try_except_handler_66:;
        exception_keeper_type_66 = exception_type;
        exception_keeper_value_66 = exception_value;
        exception_keeper_tb_66 = exception_tb;
        exception_keeper_lineno_66 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_66;
        exception_value = exception_keeper_value_66;
        exception_tb = exception_keeper_tb_66;
        exception_lineno = exception_keeper_lineno_66;

        goto outline_exception_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_22:;
        exception_lineno = 389;
        goto try_except_handler_65;
        outline_result_22:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_185);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_67 = exception_type;
    exception_keeper_value_67 = exception_value;
    exception_keeper_tb_67 = exception_tb;
    exception_keeper_lineno_67 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_22__bases_orig);
    tmp_class_creation_22__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    Py_XDECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_67;
    exception_value = exception_keeper_value_67;
    exception_tb = exception_keeper_tb_67;
    exception_lineno = exception_keeper_lineno_67;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_class_creation_22__bases_orig);
    Py_DECREF(tmp_class_creation_22__bases_orig);
    tmp_class_creation_22__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_22__bases);
    Py_DECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
    Py_DECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_22__metaclass);
    Py_DECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_22__prepared);
    Py_DECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_dircall_arg1_23;
        tmp_dircall_arg1_23 = mod_consts[76];
        Py_INCREF(tmp_dircall_arg1_23);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_23};
            tmp_assign_source_187 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_68;
        }
        assert(tmp_class_creation_23__bases == NULL);
        tmp_class_creation_23__bases = tmp_assign_source_187;
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__class_decl_dict == NULL);
        tmp_class_creation_23__class_decl_dict = tmp_assign_source_188;
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_metaclass_value_23;
        nuitka_bool tmp_condition_result_89;
        int tmp_truth_name_23;
        PyObject *tmp_type_arg_45;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_bases_value_23;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_truth_name_23 = CHECK_IF_TRUE(tmp_class_creation_23__bases);
        if (tmp_truth_name_23 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_68;
        }
        tmp_condition_result_89 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_89 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_23;
        } else {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_expression_value_133 = tmp_class_creation_23__bases;
        tmp_subscript_value_23 = mod_consts[46];
        tmp_type_arg_45 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_133, tmp_subscript_value_23, 0);
        if (tmp_type_arg_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_68;
        }
        tmp_metaclass_value_23 = BUILTIN_TYPE1(tmp_type_arg_45);
        Py_DECREF(tmp_type_arg_45);
        if (tmp_metaclass_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_68;
        }
        goto condexpr_end_23;
        condexpr_false_23:;
        tmp_metaclass_value_23 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_23);
        condexpr_end_23:;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_bases_value_23 = tmp_class_creation_23__bases;
        tmp_assign_source_189 = SELECT_METACLASS(tstate, tmp_metaclass_value_23, tmp_bases_value_23);
        Py_DECREF(tmp_metaclass_value_23);
        if (tmp_assign_source_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_68;
        }
        assert(tmp_class_creation_23__metaclass == NULL);
        tmp_class_creation_23__metaclass = tmp_assign_source_189;
    }
    {
        bool tmp_condition_result_90;
        PyObject *tmp_expression_value_134;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_134 = tmp_class_creation_23__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_134, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_68;
        }
        tmp_condition_result_90 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_90 != false) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
    }
    branch_yes_67:;
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_args_value_45;
        PyObject *tmp_tuple_element_84;
        PyObject *tmp_kwargs_value_45;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_135 = tmp_class_creation_23__metaclass;
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[60]);
        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_68;
        }
        tmp_tuple_element_84 = mod_consts[25];
        tmp_args_value_45 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_45, 0, tmp_tuple_element_84);
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_tuple_element_84 = tmp_class_creation_23__bases;
        PyTuple_SET_ITEM0(tmp_args_value_45, 1, tmp_tuple_element_84);
        CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
        tmp_kwargs_value_45 = tmp_class_creation_23__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 426;
        tmp_assign_source_190 = CALL_FUNCTION(tstate, tmp_called_value_79, tmp_args_value_45, tmp_kwargs_value_45);
        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_args_value_45);
        if (tmp_assign_source_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_68;
        }
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_190;
    }
    {
        bool tmp_condition_result_91;
        PyObject *tmp_operand_value_23;
        PyObject *tmp_expression_value_136;
        CHECK_OBJECT(tmp_class_creation_23__prepared);
        tmp_expression_value_136 = tmp_class_creation_23__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_136, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_68;
        }
        tmp_operand_value_23 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_23);
        assert(!(tmp_res == -1));
        tmp_condition_result_91 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_91 != false) {
            goto branch_yes_68;
        } else {
            goto branch_no_68;
        }
    }
    branch_yes_68:;
    {
        PyObject *tmp_raise_type_23;
        PyObject *tmp_raise_value_23;
        PyObject *tmp_mod_expr_left_23;
        PyObject *tmp_mod_expr_right_23;
        PyObject *tmp_tuple_element_85;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_name_value_29;
        PyObject *tmp_default_value_23;
        tmp_raise_type_23 = PyExc_TypeError;
        tmp_mod_expr_left_23 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_137 = tmp_class_creation_23__metaclass;
        tmp_name_value_29 = mod_consts[14];
        tmp_default_value_23 = mod_consts[64];
        tmp_tuple_element_85 = BUILTIN_GETATTR(tstate, tmp_expression_value_137, tmp_name_value_29, tmp_default_value_23);
        if (tmp_tuple_element_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_68;
        }
        tmp_mod_expr_right_23 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_138;
            PyObject *tmp_type_arg_46;
            PyTuple_SET_ITEM(tmp_mod_expr_right_23, 0, tmp_tuple_element_85);
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_type_arg_46 = tmp_class_creation_23__prepared;
            tmp_expression_value_138 = BUILTIN_TYPE1(tmp_type_arg_46);
            assert(!(tmp_expression_value_138 == NULL));
            tmp_tuple_element_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[14]);
            Py_DECREF(tmp_expression_value_138);
            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_23, 1, tmp_tuple_element_85);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_mod_expr_right_23);
        goto try_except_handler_68;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_raise_value_23 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_23, tmp_mod_expr_right_23);
        Py_DECREF(tmp_mod_expr_right_23);
        if (tmp_raise_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_68;
        }
        exception_type = tmp_raise_type_23;
        Py_INCREF(tmp_raise_type_23);
        exception_value = tmp_raise_value_23;
        exception_lineno = 426;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_68;
    }
    branch_no_68:;
    goto branch_end_67;
    branch_no_67:;
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_191;
    }
    branch_end_67:;
    {
        PyObject *tmp_assign_source_192;
        {
            PyObject *tmp_set_locals_23;
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_set_locals_23 = tmp_class_creation_23__prepared;
            locals_gevent$events$$$class__23__PatchAllMixin_426 = tmp_set_locals_23;
            Py_INCREF(tmp_set_locals_23);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__23__PatchAllMixin_426, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_70;
        }
        tmp_dictset_value = mod_consts[25];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__23__PatchAllMixin_426, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_70;
        }
        frame_b4a0d0aee67f686c4383e69e34ef51f9_18 = MAKE_CLASS_FRAME(tstate, codeobj_b4a0d0aee67f686c4383e69e34ef51f9, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b4a0d0aee67f686c4383e69e34ef51f9_18);
        assert(Py_REFCNT(frame_b4a0d0aee67f686c4383e69e34ef51f9_18) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__13___init__();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__23__PatchAllMixin_426, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_2 = "o";
            goto frame_exception_exit_18;
        }
        {
            nuitka_bool tmp_condition_result_92;
            PyObject *tmp_called_value_80;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_called_value_81;
            PyObject *tmp_args_element_value_18;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_gevent$events$$$class__23__PatchAllMixin_426, mod_consts[145]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }
            tmp_condition_result_92 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_92 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_24;
            } else {
                goto condexpr_false_24;
            }
            condexpr_true_24:;
            tmp_called_value_80 = PyObject_GetItem(locals_gevent$events$$$class__23__PatchAllMixin_426, mod_consts[145]);

            if (unlikely(tmp_called_value_80 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[145]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 432;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }

            if (tmp_called_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }


            tmp_args_element_value_17 = MAKE_FUNCTION_gevent$events$$$function__14_patch_all_arguments();

            frame_b4a0d0aee67f686c4383e69e34ef51f9_18->m_frame.f_lineno = 432;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_80, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }
            goto condexpr_end_24;
            condexpr_false_24:;
            tmp_called_value_81 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_18 = MAKE_FUNCTION_gevent$events$$$function__14_patch_all_arguments();

            frame_b4a0d0aee67f686c4383e69e34ef51f9_18->m_frame.f_lineno = 432;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_81, tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }
            condexpr_end_24:;
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__23__PatchAllMixin_426, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }
        }
        {
            nuitka_bool tmp_condition_result_93;
            PyObject *tmp_called_value_82;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_value_83;
            PyObject *tmp_args_element_value_20;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_gevent$events$$$class__23__PatchAllMixin_426, mod_consts[145]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }
            tmp_condition_result_93 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_93 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_25;
            } else {
                goto condexpr_false_25;
            }
            condexpr_true_25:;
            tmp_called_value_82 = PyObject_GetItem(locals_gevent$events$$$class__23__PatchAllMixin_426, mod_consts[145]);

            if (unlikely(tmp_called_value_82 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[145]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 436;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }

            if (tmp_called_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }


            tmp_args_element_value_19 = MAKE_FUNCTION_gevent$events$$$function__15_patch_all_kwargs();

            frame_b4a0d0aee67f686c4383e69e34ef51f9_18->m_frame.f_lineno = 436;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }
            goto condexpr_end_25;
            condexpr_false_25:;
            tmp_called_value_83 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_20 = MAKE_FUNCTION_gevent$events$$$function__15_patch_all_kwargs();

            frame_b4a0d0aee67f686c4383e69e34ef51f9_18->m_frame.f_lineno = 436;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_83, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }
            condexpr_end_25:;
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__23__PatchAllMixin_426, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__16___repr__();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__23__PatchAllMixin_426, mod_consts[96], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_2 = "o";
            goto frame_exception_exit_18;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_17;
        frame_exception_exit_18:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b4a0d0aee67f686c4383e69e34ef51f9_18, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b4a0d0aee67f686c4383e69e34ef51f9_18->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b4a0d0aee67f686c4383e69e34ef51f9_18, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b4a0d0aee67f686c4383e69e34ef51f9_18,
            type_description_2,
            outline_22_var___class__
        );



        assertFrameObject(frame_b4a0d0aee67f686c4383e69e34ef51f9_18);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_17;
        frame_no_exception_17:;
        goto skip_nested_handling_17;
        nested_frame_exit_17:;

        goto try_except_handler_70;
        skip_nested_handling_17:;
        {
            nuitka_bool tmp_condition_result_94;
            PyObject *tmp_cmp_expr_left_23;
            PyObject *tmp_cmp_expr_right_23;
            CHECK_OBJECT(tmp_class_creation_23__bases);
            tmp_cmp_expr_left_23 = tmp_class_creation_23__bases;
            tmp_cmp_expr_right_23 = mod_consts[76];
            tmp_condition_result_94 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
            if (tmp_condition_result_94 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;

                goto try_except_handler_70;
            }
            if (tmp_condition_result_94 == NUITKA_BOOL_TRUE) {
                goto branch_yes_69;
            } else {
                goto branch_no_69;
            }
        }
        branch_yes_69:;
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__23__PatchAllMixin_426, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_70;
        }
        branch_no_69:;
        {
            PyObject *tmp_assign_source_193;
            PyObject *tmp_called_value_84;
            PyObject *tmp_args_value_46;
            PyObject *tmp_tuple_element_86;
            PyObject *tmp_kwargs_value_46;
            CHECK_OBJECT(tmp_class_creation_23__metaclass);
            tmp_called_value_84 = tmp_class_creation_23__metaclass;
            tmp_tuple_element_86 = mod_consts[25];
            tmp_args_value_46 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_46, 0, tmp_tuple_element_86);
            CHECK_OBJECT(tmp_class_creation_23__bases);
            tmp_tuple_element_86 = tmp_class_creation_23__bases;
            PyTuple_SET_ITEM0(tmp_args_value_46, 1, tmp_tuple_element_86);
            tmp_tuple_element_86 = locals_gevent$events$$$class__23__PatchAllMixin_426;
            PyTuple_SET_ITEM0(tmp_args_value_46, 2, tmp_tuple_element_86);
            CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
            tmp_kwargs_value_46 = tmp_class_creation_23__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 426;
            tmp_assign_source_193 = CALL_FUNCTION(tstate, tmp_called_value_84, tmp_args_value_46, tmp_kwargs_value_46);
            Py_DECREF(tmp_args_value_46);
            if (tmp_assign_source_193 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;

                goto try_except_handler_70;
            }
            assert(outline_22_var___class__ == NULL);
            outline_22_var___class__ = tmp_assign_source_193;
        }
        CHECK_OBJECT(outline_22_var___class__);
        tmp_assign_source_192 = outline_22_var___class__;
        Py_INCREF(tmp_assign_source_192);
        goto try_return_handler_70;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_70:;
        Py_DECREF(locals_gevent$events$$$class__23__PatchAllMixin_426);
        locals_gevent$events$$$class__23__PatchAllMixin_426 = NULL;
        goto try_return_handler_69;
        // Exception handler code:
        try_except_handler_70:;
        exception_keeper_type_68 = exception_type;
        exception_keeper_value_68 = exception_value;
        exception_keeper_tb_68 = exception_tb;
        exception_keeper_lineno_68 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__23__PatchAllMixin_426);
        locals_gevent$events$$$class__23__PatchAllMixin_426 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_68;
        exception_value = exception_keeper_value_68;
        exception_tb = exception_keeper_tb_68;
        exception_lineno = exception_keeper_lineno_68;

        goto try_except_handler_69;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_69:;
        CHECK_OBJECT(outline_22_var___class__);
        Py_DECREF(outline_22_var___class__);
        outline_22_var___class__ = NULL;
        goto outline_result_23;
        // Exception handler code:
        try_except_handler_69:;
        exception_keeper_type_69 = exception_type;
        exception_keeper_value_69 = exception_value;
        exception_keeper_tb_69 = exception_tb;
        exception_keeper_lineno_69 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_69;
        exception_value = exception_keeper_value_69;
        exception_tb = exception_keeper_tb_69;
        exception_lineno = exception_keeper_lineno_69;

        goto outline_exception_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_23:;
        exception_lineno = 426;
        goto try_except_handler_68;
        outline_result_23:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_192);
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_70 = exception_type;
    exception_keeper_value_70 = exception_value;
    exception_keeper_tb_70 = exception_tb;
    exception_keeper_lineno_70 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_23__bases);
    tmp_class_creation_23__bases = NULL;
    Py_XDECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_70;
    exception_value = exception_keeper_value_70;
    exception_tb = exception_keeper_tb_70;
    exception_lineno = exception_keeper_lineno_70;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_class_creation_23__bases);
    Py_DECREF(tmp_class_creation_23__bases);
    tmp_class_creation_23__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
    Py_DECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_23__metaclass);
    Py_DECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_23__prepared);
    Py_DECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_tuple_element_87;
        tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_tuple_element_87 == NULL)) {
            tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_tuple_element_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_71;
        }
        tmp_assign_source_194 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_194, 0, tmp_tuple_element_87);
        tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_tuple_element_87 == NULL)) {
            tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_tuple_element_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto tuple_build_exception_24;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_194, 1, tmp_tuple_element_87);
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_assign_source_194);
        goto try_except_handler_71;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        assert(tmp_class_creation_24__bases_orig == NULL);
        tmp_class_creation_24__bases_orig = tmp_assign_source_194;
    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_dircall_arg1_24;
        CHECK_OBJECT(tmp_class_creation_24__bases_orig);
        tmp_dircall_arg1_24 = tmp_class_creation_24__bases_orig;
        Py_INCREF(tmp_dircall_arg1_24);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_24};
            tmp_assign_source_195 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_71;
        }
        assert(tmp_class_creation_24__bases == NULL);
        tmp_class_creation_24__bases = tmp_assign_source_195;
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__class_decl_dict == NULL);
        tmp_class_creation_24__class_decl_dict = tmp_assign_source_196;
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_metaclass_value_24;
        nuitka_bool tmp_condition_result_95;
        int tmp_truth_name_24;
        PyObject *tmp_type_arg_47;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_bases_value_24;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_truth_name_24 = CHECK_IF_TRUE(tmp_class_creation_24__bases);
        if (tmp_truth_name_24 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_71;
        }
        tmp_condition_result_95 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_95 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_26;
        } else {
            goto condexpr_false_26;
        }
        condexpr_true_26:;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_expression_value_139 = tmp_class_creation_24__bases;
        tmp_subscript_value_24 = mod_consts[46];
        tmp_type_arg_47 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_139, tmp_subscript_value_24, 0);
        if (tmp_type_arg_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_71;
        }
        tmp_metaclass_value_24 = BUILTIN_TYPE1(tmp_type_arg_47);
        Py_DECREF(tmp_type_arg_47);
        if (tmp_metaclass_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_71;
        }
        goto condexpr_end_26;
        condexpr_false_26:;
        tmp_metaclass_value_24 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_24);
        condexpr_end_26:;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_bases_value_24 = tmp_class_creation_24__bases;
        tmp_assign_source_197 = SELECT_METACLASS(tstate, tmp_metaclass_value_24, tmp_bases_value_24);
        Py_DECREF(tmp_metaclass_value_24);
        if (tmp_assign_source_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_71;
        }
        assert(tmp_class_creation_24__metaclass == NULL);
        tmp_class_creation_24__metaclass = tmp_assign_source_197;
    }
    {
        bool tmp_condition_result_96;
        PyObject *tmp_expression_value_140;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_140 = tmp_class_creation_24__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_140, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_71;
        }
        tmp_condition_result_96 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_96 != false) {
            goto branch_yes_70;
        } else {
            goto branch_no_70;
        }
    }
    branch_yes_70:;
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_args_value_47;
        PyObject *tmp_tuple_element_88;
        PyObject *tmp_kwargs_value_47;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_141 = tmp_class_creation_24__metaclass;
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[60]);
        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_71;
        }
        tmp_tuple_element_88 = mod_consts[149];
        tmp_args_value_47 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_47, 0, tmp_tuple_element_88);
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_tuple_element_88 = tmp_class_creation_24__bases;
        PyTuple_SET_ITEM0(tmp_args_value_47, 1, tmp_tuple_element_88);
        CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
        tmp_kwargs_value_47 = tmp_class_creation_24__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 446;
        tmp_assign_source_198 = CALL_FUNCTION(tstate, tmp_called_value_85, tmp_args_value_47, tmp_kwargs_value_47);
        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_args_value_47);
        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_71;
        }
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_198;
    }
    {
        bool tmp_condition_result_97;
        PyObject *tmp_operand_value_24;
        PyObject *tmp_expression_value_142;
        CHECK_OBJECT(tmp_class_creation_24__prepared);
        tmp_expression_value_142 = tmp_class_creation_24__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_142, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_71;
        }
        tmp_operand_value_24 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_97 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_97 != false) {
            goto branch_yes_71;
        } else {
            goto branch_no_71;
        }
    }
    branch_yes_71:;
    {
        PyObject *tmp_raise_type_24;
        PyObject *tmp_raise_value_24;
        PyObject *tmp_mod_expr_left_24;
        PyObject *tmp_mod_expr_right_24;
        PyObject *tmp_tuple_element_89;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_name_value_30;
        PyObject *tmp_default_value_24;
        tmp_raise_type_24 = PyExc_TypeError;
        tmp_mod_expr_left_24 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_143 = tmp_class_creation_24__metaclass;
        tmp_name_value_30 = mod_consts[14];
        tmp_default_value_24 = mod_consts[64];
        tmp_tuple_element_89 = BUILTIN_GETATTR(tstate, tmp_expression_value_143, tmp_name_value_30, tmp_default_value_24);
        if (tmp_tuple_element_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_71;
        }
        tmp_mod_expr_right_24 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_144;
            PyObject *tmp_type_arg_48;
            PyTuple_SET_ITEM(tmp_mod_expr_right_24, 0, tmp_tuple_element_89);
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_type_arg_48 = tmp_class_creation_24__prepared;
            tmp_expression_value_144 = BUILTIN_TYPE1(tmp_type_arg_48);
            assert(!(tmp_expression_value_144 == NULL));
            tmp_tuple_element_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[14]);
            Py_DECREF(tmp_expression_value_144);
            if (tmp_tuple_element_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_24, 1, tmp_tuple_element_89);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_mod_expr_right_24);
        goto try_except_handler_71;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_raise_value_24 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_24, tmp_mod_expr_right_24);
        Py_DECREF(tmp_mod_expr_right_24);
        if (tmp_raise_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_71;
        }
        exception_type = tmp_raise_type_24;
        Py_INCREF(tmp_raise_type_24);
        exception_value = tmp_raise_value_24;
        exception_lineno = 446;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_71;
    }
    branch_no_71:;
    goto branch_end_70;
    branch_no_70:;
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_199;
    }
    branch_end_70:;
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_called_value_86;
        PyObject *tmp_called_value_87;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto try_except_handler_71;
        }
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto try_except_handler_71;
        }
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 445;
        tmp_called_value_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_87, tmp_args_element_value_21);
        if (tmp_called_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto try_except_handler_71;
        }
        {
            PyObject *tmp_set_locals_24;
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_set_locals_24 = tmp_class_creation_24__prepared;
            locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446 = tmp_set_locals_24;
            Py_INCREF(tmp_set_locals_24);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_73;
        }
        tmp_dictset_value = mod_consts[150];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_73;
        }
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_73;
        }
        frame_eeb4d1dda7d601427d1aba1be3059e45_19 = MAKE_CLASS_FRAME(tstate, codeobj_eeb4d1dda7d601427d1aba1be3059e45, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_eeb4d1dda7d601427d1aba1be3059e45_19);
        assert(Py_REFCNT(frame_eeb4d1dda7d601427d1aba1be3059e45_19) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[151];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_2 = "o";
            goto frame_exception_exit_19;
        }


        tmp_dictset_value = MAKE_FUNCTION_gevent$events$$$function__17_will_patch_module();

        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446, mod_consts[142], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_2 = "o";
            goto frame_exception_exit_19;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_18;
        frame_exception_exit_19:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_eeb4d1dda7d601427d1aba1be3059e45_19, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_eeb4d1dda7d601427d1aba1be3059e45_19->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_eeb4d1dda7d601427d1aba1be3059e45_19, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_eeb4d1dda7d601427d1aba1be3059e45_19,
            type_description_2,
            outline_23_var___class__
        );



        assertFrameObject(frame_eeb4d1dda7d601427d1aba1be3059e45_19);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_18;
        frame_no_exception_18:;
        goto skip_nested_handling_18;
        nested_frame_exit_18:;

        goto try_except_handler_73;
        skip_nested_handling_18:;
        {
            nuitka_bool tmp_condition_result_98;
            PyObject *tmp_cmp_expr_left_24;
            PyObject *tmp_cmp_expr_right_24;
            CHECK_OBJECT(tmp_class_creation_24__bases);
            tmp_cmp_expr_left_24 = tmp_class_creation_24__bases;
            CHECK_OBJECT(tmp_class_creation_24__bases_orig);
            tmp_cmp_expr_right_24 = tmp_class_creation_24__bases_orig;
            tmp_condition_result_98 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
            if (tmp_condition_result_98 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto try_except_handler_73;
            }
            if (tmp_condition_result_98 == NUITKA_BOOL_TRUE) {
                goto branch_yes_72;
            } else {
                goto branch_no_72;
            }
        }
        branch_yes_72:;
        CHECK_OBJECT(tmp_class_creation_24__bases_orig);
        tmp_dictset_value = tmp_class_creation_24__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_73;
        }
        branch_no_72:;
        {
            PyObject *tmp_assign_source_201;
            PyObject *tmp_called_value_88;
            PyObject *tmp_args_value_48;
            PyObject *tmp_tuple_element_90;
            PyObject *tmp_kwargs_value_48;
            CHECK_OBJECT(tmp_class_creation_24__metaclass);
            tmp_called_value_88 = tmp_class_creation_24__metaclass;
            tmp_tuple_element_90 = mod_consts[149];
            tmp_args_value_48 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_48, 0, tmp_tuple_element_90);
            CHECK_OBJECT(tmp_class_creation_24__bases);
            tmp_tuple_element_90 = tmp_class_creation_24__bases;
            PyTuple_SET_ITEM0(tmp_args_value_48, 1, tmp_tuple_element_90);
            tmp_tuple_element_90 = locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446;
            PyTuple_SET_ITEM0(tmp_args_value_48, 2, tmp_tuple_element_90);
            CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
            tmp_kwargs_value_48 = tmp_class_creation_24__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 446;
            tmp_assign_source_201 = CALL_FUNCTION(tstate, tmp_called_value_88, tmp_args_value_48, tmp_kwargs_value_48);
            Py_DECREF(tmp_args_value_48);
            if (tmp_assign_source_201 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto try_except_handler_73;
            }
            assert(outline_23_var___class__ == NULL);
            outline_23_var___class__ = tmp_assign_source_201;
        }
        CHECK_OBJECT(outline_23_var___class__);
        tmp_args_element_value_22 = outline_23_var___class__;
        Py_INCREF(tmp_args_element_value_22);
        goto try_return_handler_73;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_73:;
        Py_DECREF(locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446);
        locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446 = NULL;
        goto try_return_handler_72;
        // Exception handler code:
        try_except_handler_73:;
        exception_keeper_type_71 = exception_type;
        exception_keeper_value_71 = exception_value;
        exception_keeper_tb_71 = exception_tb;
        exception_keeper_lineno_71 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446);
        locals_gevent$events$$$class__24_GeventWillPatchAllEvent_446 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_71;
        exception_value = exception_keeper_value_71;
        exception_tb = exception_keeper_tb_71;
        exception_lineno = exception_keeper_lineno_71;

        goto try_except_handler_72;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_72:;
        CHECK_OBJECT(outline_23_var___class__);
        Py_DECREF(outline_23_var___class__);
        outline_23_var___class__ = NULL;
        goto outline_result_24;
        // Exception handler code:
        try_except_handler_72:;
        exception_keeper_type_72 = exception_type;
        exception_keeper_value_72 = exception_value;
        exception_keeper_tb_72 = exception_tb;
        exception_keeper_lineno_72 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_72;
        exception_value = exception_keeper_value_72;
        exception_tb = exception_keeper_tb_72;
        exception_lineno = exception_keeper_lineno_72;

        goto outline_exception_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_24:;
        exception_lineno = 446;
        goto try_except_handler_71;
        outline_result_24:;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 445;
        tmp_assign_source_200 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_assign_source_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto try_except_handler_71;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_200);
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_71:;
    exception_keeper_type_73 = exception_type;
    exception_keeper_value_73 = exception_value;
    exception_keeper_tb_73 = exception_tb;
    exception_keeper_lineno_73 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_24__bases_orig);
    tmp_class_creation_24__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_24__bases);
    tmp_class_creation_24__bases = NULL;
    Py_XDECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_73;
    exception_value = exception_keeper_value_73;
    exception_tb = exception_keeper_tb_73;
    exception_lineno = exception_keeper_lineno_73;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_class_creation_24__bases_orig);
    Py_DECREF(tmp_class_creation_24__bases_orig);
    tmp_class_creation_24__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_24__bases);
    Py_DECREF(tmp_class_creation_24__bases);
    tmp_class_creation_24__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
    Py_DECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_24__metaclass);
    Py_DECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_24__prepared);
    Py_DECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_tuple_element_91;
        tmp_tuple_element_91 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_tuple_element_91 == NULL)) {
            tmp_tuple_element_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
        }

        if (tmp_tuple_element_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_74;
        }
        tmp_assign_source_202 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_202, 0, tmp_tuple_element_91);
        assert(tmp_class_creation_25__bases_orig == NULL);
        tmp_class_creation_25__bases_orig = tmp_assign_source_202;
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_dircall_arg1_25;
        CHECK_OBJECT(tmp_class_creation_25__bases_orig);
        tmp_dircall_arg1_25 = tmp_class_creation_25__bases_orig;
        Py_INCREF(tmp_dircall_arg1_25);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_25};
            tmp_assign_source_203 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_74;
        }
        assert(tmp_class_creation_25__bases == NULL);
        tmp_class_creation_25__bases = tmp_assign_source_203;
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_25__class_decl_dict == NULL);
        tmp_class_creation_25__class_decl_dict = tmp_assign_source_204;
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_metaclass_value_25;
        nuitka_bool tmp_condition_result_99;
        int tmp_truth_name_25;
        PyObject *tmp_type_arg_49;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_bases_value_25;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_truth_name_25 = CHECK_IF_TRUE(tmp_class_creation_25__bases);
        if (tmp_truth_name_25 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_74;
        }
        tmp_condition_result_99 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_99 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_27;
        } else {
            goto condexpr_false_27;
        }
        condexpr_true_27:;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_expression_value_145 = tmp_class_creation_25__bases;
        tmp_subscript_value_25 = mod_consts[46];
        tmp_type_arg_49 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_145, tmp_subscript_value_25, 0);
        if (tmp_type_arg_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_74;
        }
        tmp_metaclass_value_25 = BUILTIN_TYPE1(tmp_type_arg_49);
        Py_DECREF(tmp_type_arg_49);
        if (tmp_metaclass_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_74;
        }
        goto condexpr_end_27;
        condexpr_false_27:;
        tmp_metaclass_value_25 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_25);
        condexpr_end_27:;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_bases_value_25 = tmp_class_creation_25__bases;
        tmp_assign_source_205 = SELECT_METACLASS(tstate, tmp_metaclass_value_25, tmp_bases_value_25);
        Py_DECREF(tmp_metaclass_value_25);
        if (tmp_assign_source_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_74;
        }
        assert(tmp_class_creation_25__metaclass == NULL);
        tmp_class_creation_25__metaclass = tmp_assign_source_205;
    }
    {
        bool tmp_condition_result_100;
        PyObject *tmp_expression_value_146;
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_146 = tmp_class_creation_25__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_146, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_74;
        }
        tmp_condition_result_100 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_100 != false) {
            goto branch_yes_73;
        } else {
            goto branch_no_73;
        }
    }
    branch_yes_73:;
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_args_value_49;
        PyObject *tmp_tuple_element_92;
        PyObject *tmp_kwargs_value_49;
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_147 = tmp_class_creation_25__metaclass;
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[60]);
        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_74;
        }
        tmp_tuple_element_92 = mod_consts[153];
        tmp_args_value_49 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_49, 0, tmp_tuple_element_92);
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_tuple_element_92 = tmp_class_creation_25__bases;
        PyTuple_SET_ITEM0(tmp_args_value_49, 1, tmp_tuple_element_92);
        CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
        tmp_kwargs_value_49 = tmp_class_creation_25__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 458;
        tmp_assign_source_206 = CALL_FUNCTION(tstate, tmp_called_value_89, tmp_args_value_49, tmp_kwargs_value_49);
        Py_DECREF(tmp_called_value_89);
        Py_DECREF(tmp_args_value_49);
        if (tmp_assign_source_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_74;
        }
        assert(tmp_class_creation_25__prepared == NULL);
        tmp_class_creation_25__prepared = tmp_assign_source_206;
    }
    {
        bool tmp_condition_result_101;
        PyObject *tmp_operand_value_25;
        PyObject *tmp_expression_value_148;
        CHECK_OBJECT(tmp_class_creation_25__prepared);
        tmp_expression_value_148 = tmp_class_creation_25__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_148, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_74;
        }
        tmp_operand_value_25 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_101 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_101 != false) {
            goto branch_yes_74;
        } else {
            goto branch_no_74;
        }
    }
    branch_yes_74:;
    {
        PyObject *tmp_raise_type_25;
        PyObject *tmp_raise_value_25;
        PyObject *tmp_mod_expr_left_25;
        PyObject *tmp_mod_expr_right_25;
        PyObject *tmp_tuple_element_93;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_name_value_31;
        PyObject *tmp_default_value_25;
        tmp_raise_type_25 = PyExc_TypeError;
        tmp_mod_expr_left_25 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_149 = tmp_class_creation_25__metaclass;
        tmp_name_value_31 = mod_consts[14];
        tmp_default_value_25 = mod_consts[64];
        tmp_tuple_element_93 = BUILTIN_GETATTR(tstate, tmp_expression_value_149, tmp_name_value_31, tmp_default_value_25);
        if (tmp_tuple_element_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_74;
        }
        tmp_mod_expr_right_25 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_150;
            PyObject *tmp_type_arg_50;
            PyTuple_SET_ITEM(tmp_mod_expr_right_25, 0, tmp_tuple_element_93);
            CHECK_OBJECT(tmp_class_creation_25__prepared);
            tmp_type_arg_50 = tmp_class_creation_25__prepared;
            tmp_expression_value_150 = BUILTIN_TYPE1(tmp_type_arg_50);
            assert(!(tmp_expression_value_150 == NULL));
            tmp_tuple_element_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[14]);
            Py_DECREF(tmp_expression_value_150);
            if (tmp_tuple_element_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_25, 1, tmp_tuple_element_93);
        }
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_mod_expr_right_25);
        goto try_except_handler_74;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_raise_value_25 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_25, tmp_mod_expr_right_25);
        Py_DECREF(tmp_mod_expr_right_25);
        if (tmp_raise_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_74;
        }
        exception_type = tmp_raise_type_25;
        Py_INCREF(tmp_raise_type_25);
        exception_value = tmp_raise_value_25;
        exception_lineno = 458;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_74;
    }
    branch_no_74:;
    goto branch_end_73;
    branch_no_73:;
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_25__prepared == NULL);
        tmp_class_creation_25__prepared = tmp_assign_source_207;
    }
    branch_end_73:;
    {
        PyObject *tmp_assign_source_208;
        {
            PyObject *tmp_set_locals_25;
            CHECK_OBJECT(tmp_class_creation_25__prepared);
            tmp_set_locals_25 = tmp_class_creation_25__prepared;
            locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458 = tmp_set_locals_25;
            Py_INCREF(tmp_set_locals_25);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_76;
        }
        tmp_dictset_value = mod_consts[154];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_76;
        }
        tmp_dictset_value = mod_consts[153];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_76;
        }
        frame_a0230443a066f9f97b05ba4fd03b02a4_20 = MAKE_CLASS_FRAME(tstate, codeobj_a0230443a066f9f97b05ba4fd03b02a4, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_a0230443a066f9f97b05ba4fd03b02a4_20);
        assert(Py_REFCNT(frame_a0230443a066f9f97b05ba4fd03b02a4_20) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_90;
            tmp_called_value_90 = PyObject_GetItem(locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458, mod_consts[51]);

            if (tmp_called_value_90 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_90 == NULL)) {
                        tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_90 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 468;
                        type_description_2 = "o";
                        goto frame_exception_exit_20;
                    }
                    Py_INCREF(tmp_called_value_90);
                } else {
                    goto frame_exception_exit_20;
                }
            }

            frame_a0230443a066f9f97b05ba4fd03b02a4_20->m_frame.f_lineno = 468;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_90, mod_consts[138]);

            Py_DECREF(tmp_called_value_90);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 468;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 468;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
        }
        {
            PyObject *tmp_called_value_91;
            tmp_called_value_91 = PyObject_GetItem(locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458, mod_consts[51]);

            if (tmp_called_value_91 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_91 == NULL)) {
                        tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_called_value_91 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 473;
                        type_description_2 = "o";
                        goto frame_exception_exit_20;
                    }
                    Py_INCREF(tmp_called_value_91);
                } else {
                    goto frame_exception_exit_20;
                }
            }

            frame_a0230443a066f9f97b05ba4fd03b02a4_20->m_frame.f_lineno = 473;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_91, mod_consts[139]);

            Py_DECREF(tmp_called_value_91);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
            tmp_res = PyObject_SetItem(locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_19;
        frame_exception_exit_20:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a0230443a066f9f97b05ba4fd03b02a4_20, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a0230443a066f9f97b05ba4fd03b02a4_20->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a0230443a066f9f97b05ba4fd03b02a4_20, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a0230443a066f9f97b05ba4fd03b02a4_20,
            type_description_2,
            outline_24_var___class__
        );



        assertFrameObject(frame_a0230443a066f9f97b05ba4fd03b02a4_20);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_19;
        frame_no_exception_19:;
        goto skip_nested_handling_19;
        nested_frame_exit_19:;

        goto try_except_handler_76;
        skip_nested_handling_19:;
        {
            nuitka_bool tmp_condition_result_102;
            PyObject *tmp_cmp_expr_left_25;
            PyObject *tmp_cmp_expr_right_25;
            CHECK_OBJECT(tmp_class_creation_25__bases);
            tmp_cmp_expr_left_25 = tmp_class_creation_25__bases;
            CHECK_OBJECT(tmp_class_creation_25__bases_orig);
            tmp_cmp_expr_right_25 = tmp_class_creation_25__bases_orig;
            tmp_condition_result_102 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
            if (tmp_condition_result_102 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;

                goto try_except_handler_76;
            }
            if (tmp_condition_result_102 == NUITKA_BOOL_TRUE) {
                goto branch_yes_75;
            } else {
                goto branch_no_75;
            }
        }
        branch_yes_75:;
        CHECK_OBJECT(tmp_class_creation_25__bases_orig);
        tmp_dictset_value = tmp_class_creation_25__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto try_except_handler_76;
        }
        branch_no_75:;
        {
            PyObject *tmp_assign_source_209;
            PyObject *tmp_called_value_92;
            PyObject *tmp_args_value_50;
            PyObject *tmp_tuple_element_94;
            PyObject *tmp_kwargs_value_50;
            CHECK_OBJECT(tmp_class_creation_25__metaclass);
            tmp_called_value_92 = tmp_class_creation_25__metaclass;
            tmp_tuple_element_94 = mod_consts[153];
            tmp_args_value_50 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_50, 0, tmp_tuple_element_94);
            CHECK_OBJECT(tmp_class_creation_25__bases);
            tmp_tuple_element_94 = tmp_class_creation_25__bases;
            PyTuple_SET_ITEM0(tmp_args_value_50, 1, tmp_tuple_element_94);
            tmp_tuple_element_94 = locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458;
            PyTuple_SET_ITEM0(tmp_args_value_50, 2, tmp_tuple_element_94);
            CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
            tmp_kwargs_value_50 = tmp_class_creation_25__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 458;
            tmp_assign_source_209 = CALL_FUNCTION(tstate, tmp_called_value_92, tmp_args_value_50, tmp_kwargs_value_50);
            Py_DECREF(tmp_args_value_50);
            if (tmp_assign_source_209 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;

                goto try_except_handler_76;
            }
            assert(outline_24_var___class__ == NULL);
            outline_24_var___class__ = tmp_assign_source_209;
        }
        CHECK_OBJECT(outline_24_var___class__);
        tmp_assign_source_208 = outline_24_var___class__;
        Py_INCREF(tmp_assign_source_208);
        goto try_return_handler_76;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_76:;
        Py_DECREF(locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458);
        locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458 = NULL;
        goto try_return_handler_75;
        // Exception handler code:
        try_except_handler_76:;
        exception_keeper_type_74 = exception_type;
        exception_keeper_value_74 = exception_value;
        exception_keeper_tb_74 = exception_tb;
        exception_keeper_lineno_74 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458);
        locals_gevent$events$$$class__25_IGeventDidPatchBuiltinModulesEvent_458 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_74;
        exception_value = exception_keeper_value_74;
        exception_tb = exception_keeper_tb_74;
        exception_lineno = exception_keeper_lineno_74;

        goto try_except_handler_75;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_75:;
        CHECK_OBJECT(outline_24_var___class__);
        Py_DECREF(outline_24_var___class__);
        outline_24_var___class__ = NULL;
        goto outline_result_25;
        // Exception handler code:
        try_except_handler_75:;
        exception_keeper_type_75 = exception_type;
        exception_keeper_value_75 = exception_value;
        exception_keeper_tb_75 = exception_tb;
        exception_keeper_lineno_75 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_75;
        exception_value = exception_keeper_value_75;
        exception_tb = exception_keeper_tb_75;
        exception_lineno = exception_keeper_lineno_75;

        goto outline_exception_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_25:;
        exception_lineno = 458;
        goto try_except_handler_74;
        outline_result_25:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_208);
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_74:;
    exception_keeper_type_76 = exception_type;
    exception_keeper_value_76 = exception_value;
    exception_keeper_tb_76 = exception_tb;
    exception_keeper_lineno_76 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_25__bases_orig);
    tmp_class_creation_25__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_25__bases);
    tmp_class_creation_25__bases = NULL;
    Py_XDECREF(tmp_class_creation_25__class_decl_dict);
    tmp_class_creation_25__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_25__metaclass);
    tmp_class_creation_25__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_25__prepared);
    tmp_class_creation_25__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_76;
    exception_value = exception_keeper_value_76;
    exception_tb = exception_keeper_tb_76;
    exception_lineno = exception_keeper_lineno_76;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_class_creation_25__bases_orig);
    Py_DECREF(tmp_class_creation_25__bases_orig);
    tmp_class_creation_25__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_25__bases);
    Py_DECREF(tmp_class_creation_25__bases);
    tmp_class_creation_25__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
    Py_DECREF(tmp_class_creation_25__class_decl_dict);
    tmp_class_creation_25__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_25__metaclass);
    Py_DECREF(tmp_class_creation_25__metaclass);
    tmp_class_creation_25__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_25__prepared);
    Py_DECREF(tmp_class_creation_25__prepared);
    tmp_class_creation_25__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_tuple_element_95;
        tmp_tuple_element_95 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_tuple_element_95 == NULL)) {
            tmp_tuple_element_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_tuple_element_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_77;
        }
        tmp_assign_source_210 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_210, 0, tmp_tuple_element_95);
        tmp_tuple_element_95 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_tuple_element_95 == NULL)) {
            tmp_tuple_element_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        if (tmp_tuple_element_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto tuple_build_exception_27;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_210, 1, tmp_tuple_element_95);
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_assign_source_210);
        goto try_except_handler_77;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        assert(tmp_class_creation_26__bases_orig == NULL);
        tmp_class_creation_26__bases_orig = tmp_assign_source_210;
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_dircall_arg1_26;
        CHECK_OBJECT(tmp_class_creation_26__bases_orig);
        tmp_dircall_arg1_26 = tmp_class_creation_26__bases_orig;
        Py_INCREF(tmp_dircall_arg1_26);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_26};
            tmp_assign_source_211 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_77;
        }
        assert(tmp_class_creation_26__bases == NULL);
        tmp_class_creation_26__bases = tmp_assign_source_211;
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_26__class_decl_dict == NULL);
        tmp_class_creation_26__class_decl_dict = tmp_assign_source_212;
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_metaclass_value_26;
        nuitka_bool tmp_condition_result_103;
        int tmp_truth_name_26;
        PyObject *tmp_type_arg_51;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_bases_value_26;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_truth_name_26 = CHECK_IF_TRUE(tmp_class_creation_26__bases);
        if (tmp_truth_name_26 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_77;
        }
        tmp_condition_result_103 = tmp_truth_name_26 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_103 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_28;
        } else {
            goto condexpr_false_28;
        }
        condexpr_true_28:;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_expression_value_151 = tmp_class_creation_26__bases;
        tmp_subscript_value_26 = mod_consts[46];
        tmp_type_arg_51 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_151, tmp_subscript_value_26, 0);
        if (tmp_type_arg_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_77;
        }
        tmp_metaclass_value_26 = BUILTIN_TYPE1(tmp_type_arg_51);
        Py_DECREF(tmp_type_arg_51);
        if (tmp_metaclass_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_77;
        }
        goto condexpr_end_28;
        condexpr_false_28:;
        tmp_metaclass_value_26 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_26);
        condexpr_end_28:;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_bases_value_26 = tmp_class_creation_26__bases;
        tmp_assign_source_213 = SELECT_METACLASS(tstate, tmp_metaclass_value_26, tmp_bases_value_26);
        Py_DECREF(tmp_metaclass_value_26);
        if (tmp_assign_source_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_77;
        }
        assert(tmp_class_creation_26__metaclass == NULL);
        tmp_class_creation_26__metaclass = tmp_assign_source_213;
    }
    {
        bool tmp_condition_result_104;
        PyObject *tmp_expression_value_152;
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_152 = tmp_class_creation_26__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_152, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_77;
        }
        tmp_condition_result_104 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_104 != false) {
            goto branch_yes_76;
        } else {
            goto branch_no_76;
        }
    }
    branch_yes_76:;
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_called_value_93;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_args_value_51;
        PyObject *tmp_tuple_element_96;
        PyObject *tmp_kwargs_value_51;
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_153 = tmp_class_creation_26__metaclass;
        tmp_called_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[60]);
        if (tmp_called_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_77;
        }
        tmp_tuple_element_96 = mod_consts[155];
        tmp_args_value_51 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_51, 0, tmp_tuple_element_96);
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_tuple_element_96 = tmp_class_creation_26__bases;
        PyTuple_SET_ITEM0(tmp_args_value_51, 1, tmp_tuple_element_96);
        CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
        tmp_kwargs_value_51 = tmp_class_creation_26__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 479;
        tmp_assign_source_214 = CALL_FUNCTION(tstate, tmp_called_value_93, tmp_args_value_51, tmp_kwargs_value_51);
        Py_DECREF(tmp_called_value_93);
        Py_DECREF(tmp_args_value_51);
        if (tmp_assign_source_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_77;
        }
        assert(tmp_class_creation_26__prepared == NULL);
        tmp_class_creation_26__prepared = tmp_assign_source_214;
    }
    {
        bool tmp_condition_result_105;
        PyObject *tmp_operand_value_26;
        PyObject *tmp_expression_value_154;
        CHECK_OBJECT(tmp_class_creation_26__prepared);
        tmp_expression_value_154 = tmp_class_creation_26__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_154, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_77;
        }
        tmp_operand_value_26 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_26);
        assert(!(tmp_res == -1));
        tmp_condition_result_105 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_105 != false) {
            goto branch_yes_77;
        } else {
            goto branch_no_77;
        }
    }
    branch_yes_77:;
    {
        PyObject *tmp_raise_type_26;
        PyObject *tmp_raise_value_26;
        PyObject *tmp_mod_expr_left_26;
        PyObject *tmp_mod_expr_right_26;
        PyObject *tmp_tuple_element_97;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_name_value_32;
        PyObject *tmp_default_value_26;
        tmp_raise_type_26 = PyExc_TypeError;
        tmp_mod_expr_left_26 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_155 = tmp_class_creation_26__metaclass;
        tmp_name_value_32 = mod_consts[14];
        tmp_default_value_26 = mod_consts[64];
        tmp_tuple_element_97 = BUILTIN_GETATTR(tstate, tmp_expression_value_155, tmp_name_value_32, tmp_default_value_26);
        if (tmp_tuple_element_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_77;
        }
        tmp_mod_expr_right_26 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_156;
            PyObject *tmp_type_arg_52;
            PyTuple_SET_ITEM(tmp_mod_expr_right_26, 0, tmp_tuple_element_97);
            CHECK_OBJECT(tmp_class_creation_26__prepared);
            tmp_type_arg_52 = tmp_class_creation_26__prepared;
            tmp_expression_value_156 = BUILTIN_TYPE1(tmp_type_arg_52);
            assert(!(tmp_expression_value_156 == NULL));
            tmp_tuple_element_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[14]);
            Py_DECREF(tmp_expression_value_156);
            if (tmp_tuple_element_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_26, 1, tmp_tuple_element_97);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_28:;
        Py_DECREF(tmp_mod_expr_right_26);
        goto try_except_handler_77;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        tmp_raise_value_26 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_26, tmp_mod_expr_right_26);
        Py_DECREF(tmp_mod_expr_right_26);
        if (tmp_raise_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_77;
        }
        exception_type = tmp_raise_type_26;
        Py_INCREF(tmp_raise_type_26);
        exception_value = tmp_raise_value_26;
        exception_lineno = 479;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_77;
    }
    branch_no_77:;
    goto branch_end_76;
    branch_no_76:;
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_26__prepared == NULL);
        tmp_class_creation_26__prepared = tmp_assign_source_215;
    }
    branch_end_76:;
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_called_value_94;
        PyObject *tmp_called_value_95;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto try_except_handler_77;
        }
        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_23 == NULL)) {
            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto try_except_handler_77;
        }
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 478;
        tmp_called_value_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_95, tmp_args_element_value_23);
        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto try_except_handler_77;
        }
        {
            PyObject *tmp_set_locals_26;
            CHECK_OBJECT(tmp_class_creation_26__prepared);
            tmp_set_locals_26 = tmp_class_creation_26__prepared;
            locals_gevent$events$$$class__26_GeventDidPatchBuiltinModulesEvent_479 = tmp_set_locals_26;
            Py_INCREF(tmp_set_locals_26);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__26_GeventDidPatchBuiltinModulesEvent_479, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_79;
        }
        tmp_dictset_value = mod_consts[156];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__26_GeventDidPatchBuiltinModulesEvent_479, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_79;
        }
        tmp_dictset_value = mod_consts[155];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__26_GeventDidPatchBuiltinModulesEvent_479, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_79;
        }
        frame_fb2271ac7b3d5e17756df5bd10254d75_21 = MAKE_CLASS_FRAME(tstate, codeobj_fb2271ac7b3d5e17756df5bd10254d75, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_fb2271ac7b3d5e17756df5bd10254d75_21);
        assert(Py_REFCNT(frame_fb2271ac7b3d5e17756df5bd10254d75_21) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[157];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__26_GeventDidPatchBuiltinModulesEvent_479, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_2 = "o";
            goto frame_exception_exit_21;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_20;
        frame_exception_exit_21:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fb2271ac7b3d5e17756df5bd10254d75_21, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fb2271ac7b3d5e17756df5bd10254d75_21->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fb2271ac7b3d5e17756df5bd10254d75_21, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fb2271ac7b3d5e17756df5bd10254d75_21,
            type_description_2,
            outline_25_var___class__
        );



        assertFrameObject(frame_fb2271ac7b3d5e17756df5bd10254d75_21);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_20;
        frame_no_exception_20:;
        goto skip_nested_handling_20;
        nested_frame_exit_20:;

        goto try_except_handler_79;
        skip_nested_handling_20:;
        {
            nuitka_bool tmp_condition_result_106;
            PyObject *tmp_cmp_expr_left_26;
            PyObject *tmp_cmp_expr_right_26;
            CHECK_OBJECT(tmp_class_creation_26__bases);
            tmp_cmp_expr_left_26 = tmp_class_creation_26__bases;
            CHECK_OBJECT(tmp_class_creation_26__bases_orig);
            tmp_cmp_expr_right_26 = tmp_class_creation_26__bases_orig;
            tmp_condition_result_106 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
            if (tmp_condition_result_106 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;

                goto try_except_handler_79;
            }
            if (tmp_condition_result_106 == NUITKA_BOOL_TRUE) {
                goto branch_yes_78;
            } else {
                goto branch_no_78;
            }
        }
        branch_yes_78:;
        CHECK_OBJECT(tmp_class_creation_26__bases_orig);
        tmp_dictset_value = tmp_class_creation_26__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__26_GeventDidPatchBuiltinModulesEvent_479, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto try_except_handler_79;
        }
        branch_no_78:;
        {
            PyObject *tmp_assign_source_217;
            PyObject *tmp_called_value_96;
            PyObject *tmp_args_value_52;
            PyObject *tmp_tuple_element_98;
            PyObject *tmp_kwargs_value_52;
            CHECK_OBJECT(tmp_class_creation_26__metaclass);
            tmp_called_value_96 = tmp_class_creation_26__metaclass;
            tmp_tuple_element_98 = mod_consts[155];
            tmp_args_value_52 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_52, 0, tmp_tuple_element_98);
            CHECK_OBJECT(tmp_class_creation_26__bases);
            tmp_tuple_element_98 = tmp_class_creation_26__bases;
            PyTuple_SET_ITEM0(tmp_args_value_52, 1, tmp_tuple_element_98);
            tmp_tuple_element_98 = locals_gevent$events$$$class__26_GeventDidPatchBuiltinModulesEvent_479;
            PyTuple_SET_ITEM0(tmp_args_value_52, 2, tmp_tuple_element_98);
            CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
            tmp_kwargs_value_52 = tmp_class_creation_26__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 479;
            tmp_assign_source_217 = CALL_FUNCTION(tstate, tmp_called_value_96, tmp_args_value_52, tmp_kwargs_value_52);
            Py_DECREF(tmp_args_value_52);
            if (tmp_assign_source_217 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;

                goto try_except_handler_79;
            }
            assert(outline_25_var___class__ == NULL);
            outline_25_var___class__ = tmp_assign_source_217;
        }
        CHECK_OBJECT(outline_25_var___class__);
        tmp_args_element_value_24 = outline_25_var___class__;
        Py_INCREF(tmp_args_element_value_24);
        goto try_return_handler_79;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_79:;
        Py_DECREF(locals_gevent$events$$$class__26_GeventDidPatchBuiltinModulesEvent_479);
        locals_gevent$events$$$class__26_GeventDidPatchBuiltinModulesEvent_479 = NULL;
        goto try_return_handler_78;
        // Exception handler code:
        try_except_handler_79:;
        exception_keeper_type_77 = exception_type;
        exception_keeper_value_77 = exception_value;
        exception_keeper_tb_77 = exception_tb;
        exception_keeper_lineno_77 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__26_GeventDidPatchBuiltinModulesEvent_479);
        locals_gevent$events$$$class__26_GeventDidPatchBuiltinModulesEvent_479 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_77;
        exception_value = exception_keeper_value_77;
        exception_tb = exception_keeper_tb_77;
        exception_lineno = exception_keeper_lineno_77;

        goto try_except_handler_78;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_78:;
        CHECK_OBJECT(outline_25_var___class__);
        Py_DECREF(outline_25_var___class__);
        outline_25_var___class__ = NULL;
        goto outline_result_26;
        // Exception handler code:
        try_except_handler_78:;
        exception_keeper_type_78 = exception_type;
        exception_keeper_value_78 = exception_value;
        exception_keeper_tb_78 = exception_tb;
        exception_keeper_lineno_78 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_78;
        exception_value = exception_keeper_value_78;
        exception_tb = exception_keeper_tb_78;
        exception_lineno = exception_keeper_lineno_78;

        goto outline_exception_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_26:;
        exception_lineno = 479;
        goto try_except_handler_77;
        outline_result_26:;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 478;
        tmp_assign_source_216 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_94, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_assign_source_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto try_except_handler_77;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_216);
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_77:;
    exception_keeper_type_79 = exception_type;
    exception_keeper_value_79 = exception_value;
    exception_keeper_tb_79 = exception_tb;
    exception_keeper_lineno_79 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_26__bases_orig);
    tmp_class_creation_26__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_26__bases);
    tmp_class_creation_26__bases = NULL;
    Py_XDECREF(tmp_class_creation_26__class_decl_dict);
    tmp_class_creation_26__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_26__metaclass);
    tmp_class_creation_26__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_26__prepared);
    tmp_class_creation_26__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_79;
    exception_value = exception_keeper_value_79;
    exception_tb = exception_keeper_tb_79;
    exception_lineno = exception_keeper_lineno_79;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    CHECK_OBJECT(tmp_class_creation_26__bases_orig);
    Py_DECREF(tmp_class_creation_26__bases_orig);
    tmp_class_creation_26__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_26__bases);
    Py_DECREF(tmp_class_creation_26__bases);
    tmp_class_creation_26__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
    Py_DECREF(tmp_class_creation_26__class_decl_dict);
    tmp_class_creation_26__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_26__metaclass);
    Py_DECREF(tmp_class_creation_26__metaclass);
    tmp_class_creation_26__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_26__prepared);
    Py_DECREF(tmp_class_creation_26__prepared);
    tmp_class_creation_26__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_218;
        PyObject *tmp_tuple_element_99;
        tmp_tuple_element_99 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_tuple_element_99 == NULL)) {
            tmp_tuple_element_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
        }

        if (tmp_tuple_element_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_80;
        }
        tmp_assign_source_218 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_218, 0, tmp_tuple_element_99);
        assert(tmp_class_creation_27__bases_orig == NULL);
        tmp_class_creation_27__bases_orig = tmp_assign_source_218;
    }
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_dircall_arg1_27;
        CHECK_OBJECT(tmp_class_creation_27__bases_orig);
        tmp_dircall_arg1_27 = tmp_class_creation_27__bases_orig;
        Py_INCREF(tmp_dircall_arg1_27);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_27};
            tmp_assign_source_219 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_80;
        }
        assert(tmp_class_creation_27__bases == NULL);
        tmp_class_creation_27__bases = tmp_assign_source_219;
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_27__class_decl_dict == NULL);
        tmp_class_creation_27__class_decl_dict = tmp_assign_source_220;
    }
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_metaclass_value_27;
        nuitka_bool tmp_condition_result_107;
        int tmp_truth_name_27;
        PyObject *tmp_type_arg_53;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_bases_value_27;
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_truth_name_27 = CHECK_IF_TRUE(tmp_class_creation_27__bases);
        if (tmp_truth_name_27 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_80;
        }
        tmp_condition_result_107 = tmp_truth_name_27 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_107 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_29;
        } else {
            goto condexpr_false_29;
        }
        condexpr_true_29:;
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_expression_value_157 = tmp_class_creation_27__bases;
        tmp_subscript_value_27 = mod_consts[46];
        tmp_type_arg_53 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_157, tmp_subscript_value_27, 0);
        if (tmp_type_arg_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_80;
        }
        tmp_metaclass_value_27 = BUILTIN_TYPE1(tmp_type_arg_53);
        Py_DECREF(tmp_type_arg_53);
        if (tmp_metaclass_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_80;
        }
        goto condexpr_end_29;
        condexpr_false_29:;
        tmp_metaclass_value_27 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_27);
        condexpr_end_29:;
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_bases_value_27 = tmp_class_creation_27__bases;
        tmp_assign_source_221 = SELECT_METACLASS(tstate, tmp_metaclass_value_27, tmp_bases_value_27);
        Py_DECREF(tmp_metaclass_value_27);
        if (tmp_assign_source_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_80;
        }
        assert(tmp_class_creation_27__metaclass == NULL);
        tmp_class_creation_27__metaclass = tmp_assign_source_221;
    }
    {
        bool tmp_condition_result_108;
        PyObject *tmp_expression_value_158;
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_expression_value_158 = tmp_class_creation_27__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_158, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_80;
        }
        tmp_condition_result_108 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_108 != false) {
            goto branch_yes_79;
        } else {
            goto branch_no_79;
        }
    }
    branch_yes_79:;
    {
        PyObject *tmp_assign_source_222;
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_args_value_53;
        PyObject *tmp_tuple_element_100;
        PyObject *tmp_kwargs_value_53;
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_expression_value_159 = tmp_class_creation_27__metaclass;
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts[60]);
        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_80;
        }
        tmp_tuple_element_100 = mod_consts[158];
        tmp_args_value_53 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_53, 0, tmp_tuple_element_100);
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_tuple_element_100 = tmp_class_creation_27__bases;
        PyTuple_SET_ITEM0(tmp_args_value_53, 1, tmp_tuple_element_100);
        CHECK_OBJECT(tmp_class_creation_27__class_decl_dict);
        tmp_kwargs_value_53 = tmp_class_creation_27__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 488;
        tmp_assign_source_222 = CALL_FUNCTION(tstate, tmp_called_value_97, tmp_args_value_53, tmp_kwargs_value_53);
        Py_DECREF(tmp_called_value_97);
        Py_DECREF(tmp_args_value_53);
        if (tmp_assign_source_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_80;
        }
        assert(tmp_class_creation_27__prepared == NULL);
        tmp_class_creation_27__prepared = tmp_assign_source_222;
    }
    {
        bool tmp_condition_result_109;
        PyObject *tmp_operand_value_27;
        PyObject *tmp_expression_value_160;
        CHECK_OBJECT(tmp_class_creation_27__prepared);
        tmp_expression_value_160 = tmp_class_creation_27__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_160, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_80;
        }
        tmp_operand_value_27 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_109 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_109 != false) {
            goto branch_yes_80;
        } else {
            goto branch_no_80;
        }
    }
    branch_yes_80:;
    {
        PyObject *tmp_raise_type_27;
        PyObject *tmp_raise_value_27;
        PyObject *tmp_mod_expr_left_27;
        PyObject *tmp_mod_expr_right_27;
        PyObject *tmp_tuple_element_101;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_name_value_33;
        PyObject *tmp_default_value_27;
        tmp_raise_type_27 = PyExc_TypeError;
        tmp_mod_expr_left_27 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_expression_value_161 = tmp_class_creation_27__metaclass;
        tmp_name_value_33 = mod_consts[14];
        tmp_default_value_27 = mod_consts[64];
        tmp_tuple_element_101 = BUILTIN_GETATTR(tstate, tmp_expression_value_161, tmp_name_value_33, tmp_default_value_27);
        if (tmp_tuple_element_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_80;
        }
        tmp_mod_expr_right_27 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_162;
            PyObject *tmp_type_arg_54;
            PyTuple_SET_ITEM(tmp_mod_expr_right_27, 0, tmp_tuple_element_101);
            CHECK_OBJECT(tmp_class_creation_27__prepared);
            tmp_type_arg_54 = tmp_class_creation_27__prepared;
            tmp_expression_value_162 = BUILTIN_TYPE1(tmp_type_arg_54);
            assert(!(tmp_expression_value_162 == NULL));
            tmp_tuple_element_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts[14]);
            Py_DECREF(tmp_expression_value_162);
            if (tmp_tuple_element_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_27, 1, tmp_tuple_element_101);
        }
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_mod_expr_right_27);
        goto try_except_handler_80;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_raise_value_27 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_27, tmp_mod_expr_right_27);
        Py_DECREF(tmp_mod_expr_right_27);
        if (tmp_raise_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_80;
        }
        exception_type = tmp_raise_type_27;
        Py_INCREF(tmp_raise_type_27);
        exception_value = tmp_raise_value_27;
        exception_lineno = 488;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_80;
    }
    branch_no_80:;
    goto branch_end_79;
    branch_no_79:;
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_27__prepared == NULL);
        tmp_class_creation_27__prepared = tmp_assign_source_223;
    }
    branch_end_79:;
    {
        PyObject *tmp_assign_source_224;
        {
            PyObject *tmp_set_locals_27;
            CHECK_OBJECT(tmp_class_creation_27__prepared);
            tmp_set_locals_27 = tmp_class_creation_27__prepared;
            locals_gevent$events$$$class__27_IGeventDidPatchAllEvent_488 = tmp_set_locals_27;
            Py_INCREF(tmp_set_locals_27);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__27_IGeventDidPatchAllEvent_488, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_82;
        }
        tmp_dictset_value = mod_consts[159];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__27_IGeventDidPatchAllEvent_488, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_82;
        }
        tmp_dictset_value = mod_consts[158];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__27_IGeventDidPatchAllEvent_488, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_82;
        }
        {
            nuitka_bool tmp_condition_result_110;
            PyObject *tmp_cmp_expr_left_27;
            PyObject *tmp_cmp_expr_right_27;
            CHECK_OBJECT(tmp_class_creation_27__bases);
            tmp_cmp_expr_left_27 = tmp_class_creation_27__bases;
            CHECK_OBJECT(tmp_class_creation_27__bases_orig);
            tmp_cmp_expr_right_27 = tmp_class_creation_27__bases_orig;
            tmp_condition_result_110 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
            if (tmp_condition_result_110 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto try_except_handler_82;
            }
            if (tmp_condition_result_110 == NUITKA_BOOL_TRUE) {
                goto branch_yes_81;
            } else {
                goto branch_no_81;
            }
        }
        branch_yes_81:;
        CHECK_OBJECT(tmp_class_creation_27__bases_orig);
        tmp_dictset_value = tmp_class_creation_27__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__27_IGeventDidPatchAllEvent_488, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto try_except_handler_82;
        }
        branch_no_81:;
        {
            PyObject *tmp_assign_source_225;
            PyObject *tmp_called_value_98;
            PyObject *tmp_args_value_54;
            PyObject *tmp_tuple_element_102;
            PyObject *tmp_kwargs_value_54;
            CHECK_OBJECT(tmp_class_creation_27__metaclass);
            tmp_called_value_98 = tmp_class_creation_27__metaclass;
            tmp_tuple_element_102 = mod_consts[158];
            tmp_args_value_54 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_54, 0, tmp_tuple_element_102);
            CHECK_OBJECT(tmp_class_creation_27__bases);
            tmp_tuple_element_102 = tmp_class_creation_27__bases;
            PyTuple_SET_ITEM0(tmp_args_value_54, 1, tmp_tuple_element_102);
            tmp_tuple_element_102 = locals_gevent$events$$$class__27_IGeventDidPatchAllEvent_488;
            PyTuple_SET_ITEM0(tmp_args_value_54, 2, tmp_tuple_element_102);
            CHECK_OBJECT(tmp_class_creation_27__class_decl_dict);
            tmp_kwargs_value_54 = tmp_class_creation_27__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 488;
            tmp_assign_source_225 = CALL_FUNCTION(tstate, tmp_called_value_98, tmp_args_value_54, tmp_kwargs_value_54);
            Py_DECREF(tmp_args_value_54);
            if (tmp_assign_source_225 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto try_except_handler_82;
            }
            assert(outline_26_var___class__ == NULL);
            outline_26_var___class__ = tmp_assign_source_225;
        }
        CHECK_OBJECT(outline_26_var___class__);
        tmp_assign_source_224 = outline_26_var___class__;
        Py_INCREF(tmp_assign_source_224);
        goto try_return_handler_82;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_82:;
        Py_DECREF(locals_gevent$events$$$class__27_IGeventDidPatchAllEvent_488);
        locals_gevent$events$$$class__27_IGeventDidPatchAllEvent_488 = NULL;
        goto try_return_handler_81;
        // Exception handler code:
        try_except_handler_82:;
        exception_keeper_type_80 = exception_type;
        exception_keeper_value_80 = exception_value;
        exception_keeper_tb_80 = exception_tb;
        exception_keeper_lineno_80 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__27_IGeventDidPatchAllEvent_488);
        locals_gevent$events$$$class__27_IGeventDidPatchAllEvent_488 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_80;
        exception_value = exception_keeper_value_80;
        exception_tb = exception_keeper_tb_80;
        exception_lineno = exception_keeper_lineno_80;

        goto try_except_handler_81;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_81:;
        CHECK_OBJECT(outline_26_var___class__);
        Py_DECREF(outline_26_var___class__);
        outline_26_var___class__ = NULL;
        goto outline_result_27;
        // Exception handler code:
        try_except_handler_81:;
        exception_keeper_type_81 = exception_type;
        exception_keeper_value_81 = exception_value;
        exception_keeper_tb_81 = exception_tb;
        exception_keeper_lineno_81 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_81;
        exception_value = exception_keeper_value_81;
        exception_tb = exception_keeper_tb_81;
        exception_lineno = exception_keeper_lineno_81;

        goto outline_exception_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_27:;
        exception_lineno = 488;
        goto try_except_handler_80;
        outline_result_27:;
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_224);
    }
    goto try_end_28;
    // Exception handler code:
    try_except_handler_80:;
    exception_keeper_type_82 = exception_type;
    exception_keeper_value_82 = exception_value;
    exception_keeper_tb_82 = exception_tb;
    exception_keeper_lineno_82 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_27__bases_orig);
    tmp_class_creation_27__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_27__bases);
    tmp_class_creation_27__bases = NULL;
    Py_XDECREF(tmp_class_creation_27__class_decl_dict);
    tmp_class_creation_27__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_27__metaclass);
    tmp_class_creation_27__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_27__prepared);
    tmp_class_creation_27__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_82;
    exception_value = exception_keeper_value_82;
    exception_tb = exception_keeper_tb_82;
    exception_lineno = exception_keeper_lineno_82;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    CHECK_OBJECT(tmp_class_creation_27__bases_orig);
    Py_DECREF(tmp_class_creation_27__bases_orig);
    tmp_class_creation_27__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_27__bases);
    Py_DECREF(tmp_class_creation_27__bases);
    tmp_class_creation_27__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_27__class_decl_dict);
    Py_DECREF(tmp_class_creation_27__class_decl_dict);
    tmp_class_creation_27__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_27__metaclass);
    Py_DECREF(tmp_class_creation_27__metaclass);
    tmp_class_creation_27__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_27__prepared);
    Py_DECREF(tmp_class_creation_27__prepared);
    tmp_class_creation_27__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_226;
        PyObject *tmp_tuple_element_103;
        tmp_tuple_element_103 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_tuple_element_103 == NULL)) {
            tmp_tuple_element_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_tuple_element_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_83;
        }
        tmp_assign_source_226 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_226, 0, tmp_tuple_element_103);
        tmp_tuple_element_103 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_tuple_element_103 == NULL)) {
            tmp_tuple_element_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        if (tmp_tuple_element_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto tuple_build_exception_30;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_226, 1, tmp_tuple_element_103);
        goto tuple_build_noexception_30;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_30:;
        Py_DECREF(tmp_assign_source_226);
        goto try_except_handler_83;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_30:;
        assert(tmp_class_creation_28__bases_orig == NULL);
        tmp_class_creation_28__bases_orig = tmp_assign_source_226;
    }
    {
        PyObject *tmp_assign_source_227;
        PyObject *tmp_dircall_arg1_28;
        CHECK_OBJECT(tmp_class_creation_28__bases_orig);
        tmp_dircall_arg1_28 = tmp_class_creation_28__bases_orig;
        Py_INCREF(tmp_dircall_arg1_28);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_28};
            tmp_assign_source_227 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_83;
        }
        assert(tmp_class_creation_28__bases == NULL);
        tmp_class_creation_28__bases = tmp_assign_source_227;
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_28__class_decl_dict == NULL);
        tmp_class_creation_28__class_decl_dict = tmp_assign_source_228;
    }
    {
        PyObject *tmp_assign_source_229;
        PyObject *tmp_metaclass_value_28;
        nuitka_bool tmp_condition_result_111;
        int tmp_truth_name_28;
        PyObject *tmp_type_arg_55;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_bases_value_28;
        CHECK_OBJECT(tmp_class_creation_28__bases);
        tmp_truth_name_28 = CHECK_IF_TRUE(tmp_class_creation_28__bases);
        if (tmp_truth_name_28 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_83;
        }
        tmp_condition_result_111 = tmp_truth_name_28 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_111 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_30;
        } else {
            goto condexpr_false_30;
        }
        condexpr_true_30:;
        CHECK_OBJECT(tmp_class_creation_28__bases);
        tmp_expression_value_163 = tmp_class_creation_28__bases;
        tmp_subscript_value_28 = mod_consts[46];
        tmp_type_arg_55 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_163, tmp_subscript_value_28, 0);
        if (tmp_type_arg_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_83;
        }
        tmp_metaclass_value_28 = BUILTIN_TYPE1(tmp_type_arg_55);
        Py_DECREF(tmp_type_arg_55);
        if (tmp_metaclass_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_83;
        }
        goto condexpr_end_30;
        condexpr_false_30:;
        tmp_metaclass_value_28 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_28);
        condexpr_end_30:;
        CHECK_OBJECT(tmp_class_creation_28__bases);
        tmp_bases_value_28 = tmp_class_creation_28__bases;
        tmp_assign_source_229 = SELECT_METACLASS(tstate, tmp_metaclass_value_28, tmp_bases_value_28);
        Py_DECREF(tmp_metaclass_value_28);
        if (tmp_assign_source_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_83;
        }
        assert(tmp_class_creation_28__metaclass == NULL);
        tmp_class_creation_28__metaclass = tmp_assign_source_229;
    }
    {
        bool tmp_condition_result_112;
        PyObject *tmp_expression_value_164;
        CHECK_OBJECT(tmp_class_creation_28__metaclass);
        tmp_expression_value_164 = tmp_class_creation_28__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_164, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_83;
        }
        tmp_condition_result_112 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_112 != false) {
            goto branch_yes_82;
        } else {
            goto branch_no_82;
        }
    }
    branch_yes_82:;
    {
        PyObject *tmp_assign_source_230;
        PyObject *tmp_called_value_99;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_args_value_55;
        PyObject *tmp_tuple_element_104;
        PyObject *tmp_kwargs_value_55;
        CHECK_OBJECT(tmp_class_creation_28__metaclass);
        tmp_expression_value_165 = tmp_class_creation_28__metaclass;
        tmp_called_value_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts[60]);
        if (tmp_called_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_83;
        }
        tmp_tuple_element_104 = mod_consts[160];
        tmp_args_value_55 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_55, 0, tmp_tuple_element_104);
        CHECK_OBJECT(tmp_class_creation_28__bases);
        tmp_tuple_element_104 = tmp_class_creation_28__bases;
        PyTuple_SET_ITEM0(tmp_args_value_55, 1, tmp_tuple_element_104);
        CHECK_OBJECT(tmp_class_creation_28__class_decl_dict);
        tmp_kwargs_value_55 = tmp_class_creation_28__class_decl_dict;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 497;
        tmp_assign_source_230 = CALL_FUNCTION(tstate, tmp_called_value_99, tmp_args_value_55, tmp_kwargs_value_55);
        Py_DECREF(tmp_called_value_99);
        Py_DECREF(tmp_args_value_55);
        if (tmp_assign_source_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_83;
        }
        assert(tmp_class_creation_28__prepared == NULL);
        tmp_class_creation_28__prepared = tmp_assign_source_230;
    }
    {
        bool tmp_condition_result_113;
        PyObject *tmp_operand_value_28;
        PyObject *tmp_expression_value_166;
        CHECK_OBJECT(tmp_class_creation_28__prepared);
        tmp_expression_value_166 = tmp_class_creation_28__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_166, mod_consts[62]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_83;
        }
        tmp_operand_value_28 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_113 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_113 != false) {
            goto branch_yes_83;
        } else {
            goto branch_no_83;
        }
    }
    branch_yes_83:;
    {
        PyObject *tmp_raise_type_28;
        PyObject *tmp_raise_value_28;
        PyObject *tmp_mod_expr_left_28;
        PyObject *tmp_mod_expr_right_28;
        PyObject *tmp_tuple_element_105;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_name_value_34;
        PyObject *tmp_default_value_28;
        tmp_raise_type_28 = PyExc_TypeError;
        tmp_mod_expr_left_28 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_28__metaclass);
        tmp_expression_value_167 = tmp_class_creation_28__metaclass;
        tmp_name_value_34 = mod_consts[14];
        tmp_default_value_28 = mod_consts[64];
        tmp_tuple_element_105 = BUILTIN_GETATTR(tstate, tmp_expression_value_167, tmp_name_value_34, tmp_default_value_28);
        if (tmp_tuple_element_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_83;
        }
        tmp_mod_expr_right_28 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_168;
            PyObject *tmp_type_arg_56;
            PyTuple_SET_ITEM(tmp_mod_expr_right_28, 0, tmp_tuple_element_105);
            CHECK_OBJECT(tmp_class_creation_28__prepared);
            tmp_type_arg_56 = tmp_class_creation_28__prepared;
            tmp_expression_value_168 = BUILTIN_TYPE1(tmp_type_arg_56);
            assert(!(tmp_expression_value_168 == NULL));
            tmp_tuple_element_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts[14]);
            Py_DECREF(tmp_expression_value_168);
            if (tmp_tuple_element_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_28, 1, tmp_tuple_element_105);
        }
        goto tuple_build_noexception_31;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_31:;
        Py_DECREF(tmp_mod_expr_right_28);
        goto try_except_handler_83;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_31:;
        tmp_raise_value_28 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_28, tmp_mod_expr_right_28);
        Py_DECREF(tmp_mod_expr_right_28);
        if (tmp_raise_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_83;
        }
        exception_type = tmp_raise_type_28;
        Py_INCREF(tmp_raise_type_28);
        exception_value = tmp_raise_value_28;
        exception_lineno = 497;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_83;
    }
    branch_no_83:;
    goto branch_end_82;
    branch_no_82:;
    {
        PyObject *tmp_assign_source_231;
        tmp_assign_source_231 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_28__prepared == NULL);
        tmp_class_creation_28__prepared = tmp_assign_source_231;
    }
    branch_end_82:;
    {
        PyObject *tmp_assign_source_232;
        PyObject *tmp_called_value_100;
        PyObject *tmp_called_value_101;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto try_except_handler_83;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto try_except_handler_83;
        }
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 496;
        tmp_called_value_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_101, tmp_args_element_value_25);
        if (tmp_called_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto try_except_handler_83;
        }
        {
            PyObject *tmp_set_locals_28;
            CHECK_OBJECT(tmp_class_creation_28__prepared);
            tmp_set_locals_28 = tmp_class_creation_28__prepared;
            locals_gevent$events$$$class__28_GeventDidPatchAllEvent_497 = tmp_set_locals_28;
            Py_INCREF(tmp_set_locals_28);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__28_GeventDidPatchAllEvent_497, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_85;
        }
        tmp_dictset_value = mod_consts[161];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__28_GeventDidPatchAllEvent_497, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_85;
        }
        tmp_dictset_value = mod_consts[160];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__28_GeventDidPatchAllEvent_497, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_85;
        }
        frame_761fe7b79e226f358ec45d698f419347_22 = MAKE_CLASS_FRAME(tstate, codeobj_761fe7b79e226f358ec45d698f419347, module_gevent$events, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_761fe7b79e226f358ec45d698f419347_22);
        assert(Py_REFCNT(frame_761fe7b79e226f358ec45d698f419347_22) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[162];
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__28_GeventDidPatchAllEvent_497, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_2 = "o";
            goto frame_exception_exit_22;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_21;
        frame_exception_exit_22:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_761fe7b79e226f358ec45d698f419347_22, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_761fe7b79e226f358ec45d698f419347_22->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_761fe7b79e226f358ec45d698f419347_22, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_761fe7b79e226f358ec45d698f419347_22,
            type_description_2,
            outline_27_var___class__
        );



        assertFrameObject(frame_761fe7b79e226f358ec45d698f419347_22);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_21;
        frame_no_exception_21:;
        goto skip_nested_handling_21;
        nested_frame_exit_21:;

        goto try_except_handler_85;
        skip_nested_handling_21:;
        {
            nuitka_bool tmp_condition_result_114;
            PyObject *tmp_cmp_expr_left_28;
            PyObject *tmp_cmp_expr_right_28;
            CHECK_OBJECT(tmp_class_creation_28__bases);
            tmp_cmp_expr_left_28 = tmp_class_creation_28__bases;
            CHECK_OBJECT(tmp_class_creation_28__bases_orig);
            tmp_cmp_expr_right_28 = tmp_class_creation_28__bases_orig;
            tmp_condition_result_114 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
            if (tmp_condition_result_114 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;

                goto try_except_handler_85;
            }
            if (tmp_condition_result_114 == NUITKA_BOOL_TRUE) {
                goto branch_yes_84;
            } else {
                goto branch_no_84;
            }
        }
        branch_yes_84:;
        CHECK_OBJECT(tmp_class_creation_28__bases_orig);
        tmp_dictset_value = tmp_class_creation_28__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$events$$$class__28_GeventDidPatchAllEvent_497, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_85;
        }
        branch_no_84:;
        {
            PyObject *tmp_assign_source_233;
            PyObject *tmp_called_value_102;
            PyObject *tmp_args_value_56;
            PyObject *tmp_tuple_element_106;
            PyObject *tmp_kwargs_value_56;
            CHECK_OBJECT(tmp_class_creation_28__metaclass);
            tmp_called_value_102 = tmp_class_creation_28__metaclass;
            tmp_tuple_element_106 = mod_consts[160];
            tmp_args_value_56 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_56, 0, tmp_tuple_element_106);
            CHECK_OBJECT(tmp_class_creation_28__bases);
            tmp_tuple_element_106 = tmp_class_creation_28__bases;
            PyTuple_SET_ITEM0(tmp_args_value_56, 1, tmp_tuple_element_106);
            tmp_tuple_element_106 = locals_gevent$events$$$class__28_GeventDidPatchAllEvent_497;
            PyTuple_SET_ITEM0(tmp_args_value_56, 2, tmp_tuple_element_106);
            CHECK_OBJECT(tmp_class_creation_28__class_decl_dict);
            tmp_kwargs_value_56 = tmp_class_creation_28__class_decl_dict;
            frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 497;
            tmp_assign_source_233 = CALL_FUNCTION(tstate, tmp_called_value_102, tmp_args_value_56, tmp_kwargs_value_56);
            Py_DECREF(tmp_args_value_56);
            if (tmp_assign_source_233 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;

                goto try_except_handler_85;
            }
            assert(outline_27_var___class__ == NULL);
            outline_27_var___class__ = tmp_assign_source_233;
        }
        CHECK_OBJECT(outline_27_var___class__);
        tmp_args_element_value_26 = outline_27_var___class__;
        Py_INCREF(tmp_args_element_value_26);
        goto try_return_handler_85;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_85:;
        Py_DECREF(locals_gevent$events$$$class__28_GeventDidPatchAllEvent_497);
        locals_gevent$events$$$class__28_GeventDidPatchAllEvent_497 = NULL;
        goto try_return_handler_84;
        // Exception handler code:
        try_except_handler_85:;
        exception_keeper_type_83 = exception_type;
        exception_keeper_value_83 = exception_value;
        exception_keeper_tb_83 = exception_tb;
        exception_keeper_lineno_83 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$events$$$class__28_GeventDidPatchAllEvent_497);
        locals_gevent$events$$$class__28_GeventDidPatchAllEvent_497 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_83;
        exception_value = exception_keeper_value_83;
        exception_tb = exception_keeper_tb_83;
        exception_lineno = exception_keeper_lineno_83;

        goto try_except_handler_84;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_84:;
        CHECK_OBJECT(outline_27_var___class__);
        Py_DECREF(outline_27_var___class__);
        outline_27_var___class__ = NULL;
        goto outline_result_28;
        // Exception handler code:
        try_except_handler_84:;
        exception_keeper_type_84 = exception_type;
        exception_keeper_value_84 = exception_value;
        exception_keeper_tb_84 = exception_tb;
        exception_keeper_lineno_84 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_84;
        exception_value = exception_keeper_value_84;
        exception_tb = exception_keeper_tb_84;
        exception_lineno = exception_keeper_lineno_84;

        goto outline_exception_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_28:;
        exception_lineno = 497;
        goto try_except_handler_83;
        outline_result_28:;
        frame_e0367424e7849e1121efd21b94618a70->m_frame.f_lineno = 496;
        tmp_assign_source_232 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_100, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_assign_source_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto try_except_handler_83;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$events, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_232);
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_83:;
    exception_keeper_type_85 = exception_type;
    exception_keeper_value_85 = exception_value;
    exception_keeper_tb_85 = exception_tb;
    exception_keeper_lineno_85 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_28__bases_orig);
    tmp_class_creation_28__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_28__bases);
    tmp_class_creation_28__bases = NULL;
    Py_XDECREF(tmp_class_creation_28__class_decl_dict);
    tmp_class_creation_28__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_28__metaclass);
    tmp_class_creation_28__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_28__prepared);
    tmp_class_creation_28__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_85;
    exception_value = exception_keeper_value_85;
    exception_tb = exception_keeper_tb_85;
    exception_lineno = exception_keeper_lineno_85;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_22;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e0367424e7849e1121efd21b94618a70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0367424e7849e1121efd21b94618a70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0367424e7849e1121efd21b94618a70, exception_lineno);
    }



    assertFrameObject(frame_e0367424e7849e1121efd21b94618a70);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_22:;
    CHECK_OBJECT(tmp_class_creation_28__bases_orig);
    Py_DECREF(tmp_class_creation_28__bases_orig);
    tmp_class_creation_28__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_28__bases);
    Py_DECREF(tmp_class_creation_28__bases);
    tmp_class_creation_28__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_28__class_decl_dict);
    Py_DECREF(tmp_class_creation_28__class_decl_dict);
    tmp_class_creation_28__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_28__metaclass);
    Py_DECREF(tmp_class_creation_28__metaclass);
    tmp_class_creation_28__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_28__prepared);
    Py_DECREF(tmp_class_creation_28__prepared);
    tmp_class_creation_28__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("gevent$events", false);

    Py_INCREF(module_gevent$events);
    return module_gevent$events;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gevent$events, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("gevent$events", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
