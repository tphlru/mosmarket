/* Generated code for Python module 'chardet$mbcssm'
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

/* The "module_chardet$mbcssm" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$mbcssm;
PyDictObject *moduledict_chardet$mbcssm;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[113];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[113];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("chardet.mbcssm"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 113; i++) {
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
void checkModuleConstants_chardet$mbcssm(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 113; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_881c7b02ea188e3f155b555b505f1f7a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[110]); CHECK_OBJECT(module_filename_obj);
    codeobj_881c7b02ea188e3f155b555b505f1f7a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[111], mod_consts[111], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_chardet$mbcssm[] = {

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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_chardet$mbcssm);

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
        module_chardet$mbcssm,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_chardet$mbcssm,
        sizeof(function_table_chardet$mbcssm) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_chardet$mbcssm(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("chardet$mbcssm");

    // Store the module for future use.
    module_chardet$mbcssm = module;

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
        PRINT_STRING("chardet$mbcssm: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("chardet$mbcssm: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initchardet$mbcssm\n");

    moduledict_chardet$mbcssm = MODULE_DICT(module_chardet$mbcssm);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_chardet$mbcssm,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$mbcssm,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[112]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$mbcssm,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_chardet$mbcssm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_chardet$mbcssm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$mbcssm);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_chardet$mbcssm);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_881c7b02ea188e3f155b555b505f1f7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_881c7b02ea188e3f155b555b505f1f7a = MAKE_MODULE_FRAME(codeobj_881c7b02ea188e3f155b555b505f1f7a, module_chardet$mbcssm);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_881c7b02ea188e3f155b555b505f1f7a);
    assert(Py_REFCNT(frame_881c7b02ea188e3f155b555b505f1f7a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[7];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_chardet$mbcssm;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[8];
        tmp_level_value_1 = mod_consts[9];
        frame_881c7b02ea188e3f155b555b505f1f7a->m_frame.f_lineno = 28;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_chardet$mbcssm,
                mod_consts[10],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[10]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[12];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_chardet$mbcssm;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[13];
        tmp_level_value_2 = mod_consts[9];
        frame_881c7b02ea188e3f155b555b505f1f7a->m_frame.f_lineno = 29;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_chardet$mbcssm,
                mod_consts[14],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_TUPLE_EMPTY(24);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyTuple_SET_ITEM(tmp_assign_source_8, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 1, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_8, 3, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[17]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 4, tmp_tuple_element_1);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[17]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 5, tmp_tuple_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[17]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 6, tmp_tuple_element_1);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[17]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 7, tmp_tuple_element_1);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[17]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 8, tmp_tuple_element_1);
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[17]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 9, tmp_tuple_element_1);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[20]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 10, tmp_tuple_element_1);
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[20]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 11, tmp_tuple_element_1);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[20]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 12, tmp_tuple_element_1);
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[20]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 13, tmp_tuple_element_1);
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[20]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 14, tmp_tuple_element_1);
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[17]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 15, tmp_tuple_element_1);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[17]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 16, tmp_tuple_element_1);
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 17, tmp_tuple_element_1);
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 18, tmp_tuple_element_1);
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 19, tmp_tuple_element_1);
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 20, tmp_tuple_element_1);
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 21, tmp_tuple_element_1);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 22, tmp_tuple_element_1);
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 23, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[24];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[25];
        tmp_dict_value_1 = mod_consts[26];
        tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[27];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[28];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[29];
        tmp_dict_value_1 = mod_consts[30];
        tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_10);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[31];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_24;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[17]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = MAKE_TUPLE_EMPTY(70);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_expression_value_89;
            PyTuple_SET_ITEM(tmp_assign_source_12, 0, tmp_tuple_element_2);
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_12, 2, tmp_tuple_element_2);
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 3, tmp_tuple_element_2);
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 4, tmp_tuple_element_2);
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 5, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_assign_source_12, 6, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_12, 7, tmp_tuple_element_2);
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 8, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_12, 9, tmp_tuple_element_2);
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 10, tmp_tuple_element_2);
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 11, tmp_tuple_element_2);
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 12, tmp_tuple_element_2);
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 13, tmp_tuple_element_2);
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 14, tmp_tuple_element_2);
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 15, tmp_tuple_element_2);
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 16, tmp_tuple_element_2);
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 17, tmp_tuple_element_2);
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 18, tmp_tuple_element_2);
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 19, tmp_tuple_element_2);
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[20]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 20, tmp_tuple_element_2);
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[20]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 21, tmp_tuple_element_2);
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[20]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 22, tmp_tuple_element_2);
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[20]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 23, tmp_tuple_element_2);
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[20]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 24, tmp_tuple_element_2);
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[20]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 25, tmp_tuple_element_2);
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[20]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 26, tmp_tuple_element_2);
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[20]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 27, tmp_tuple_element_2);
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[20]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 28, tmp_tuple_element_2);
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[20]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 29, tmp_tuple_element_2);
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 30, tmp_tuple_element_2);
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 31, tmp_tuple_element_2);
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 32, tmp_tuple_element_2);
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 33, tmp_tuple_element_2);
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 34, tmp_tuple_element_2);
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 35, tmp_tuple_element_2);
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 36, tmp_tuple_element_2);
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 37, tmp_tuple_element_2);
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 38, tmp_tuple_element_2);
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 39, tmp_tuple_element_2);
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 40, tmp_tuple_element_2);
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 41, tmp_tuple_element_2);
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 42, tmp_tuple_element_2);
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 43, tmp_tuple_element_2);
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 44, tmp_tuple_element_2);
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 45, tmp_tuple_element_2);
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 46, tmp_tuple_element_2);
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 47, tmp_tuple_element_2);
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 48, tmp_tuple_element_2);
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 49, tmp_tuple_element_2);
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 50, tmp_tuple_element_2);
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 51, tmp_tuple_element_2);
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 52, tmp_tuple_element_2);
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 53, tmp_tuple_element_2);
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 54, tmp_tuple_element_2);
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 55, tmp_tuple_element_2);
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 56, tmp_tuple_element_2);
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 57, tmp_tuple_element_2);
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 58, tmp_tuple_element_2);
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 59, tmp_tuple_element_2);
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 60, tmp_tuple_element_2);
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 61, tmp_tuple_element_2);
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 62, tmp_tuple_element_2);
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 63, tmp_tuple_element_2);
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 64, tmp_tuple_element_2);
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 65, tmp_tuple_element_2);
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 66, tmp_tuple_element_2);
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 67, tmp_tuple_element_2);
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 68, tmp_tuple_element_2);
            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_89 == NULL)) {
                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[18]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 69, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[24];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[25];
        tmp_dict_value_2 = mod_consts[39];
        tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[27];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[28];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[29];
        tmp_dict_value_2 = mod_consts[40];
        tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_14);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[41];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[19];
        tmp_assign_source_16 = MAKE_TUPLE_EMPTY(40);
        {
            PyObject *tmp_expression_value_90;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_expression_value_117;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_expression_value_119;
            PyObject *tmp_expression_value_120;
            PyObject *tmp_expression_value_121;
            PyObject *tmp_expression_value_122;
            PyObject *tmp_expression_value_123;
            PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_assign_source_16, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_16, 2, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_16, 3, tmp_tuple_element_3);
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[18]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 4, tmp_tuple_element_3);
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 5, tmp_tuple_element_3);
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 6, tmp_tuple_element_3);
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 7, tmp_tuple_element_3);
            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_94 == NULL)) {
                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 8, tmp_tuple_element_3);
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 9, tmp_tuple_element_3);
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 10, tmp_tuple_element_3);
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 11, tmp_tuple_element_3);
            tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_98 == NULL)) {
                tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[20]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 12, tmp_tuple_element_3);
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[20]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 13, tmp_tuple_element_3);
            tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_100 == NULL)) {
                tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[20]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 14, tmp_tuple_element_3);
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[20]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 15, tmp_tuple_element_3);
            tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_102 == NULL)) {
                tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[20]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 16, tmp_tuple_element_3);
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[20]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 17, tmp_tuple_element_3);
            tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_104 == NULL)) {
                tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[18]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 18, tmp_tuple_element_3);
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 19, tmp_tuple_element_3);
            tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_106 == NULL)) {
                tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[18]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 20, tmp_tuple_element_3);
            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_107 == NULL)) {
                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 21, tmp_tuple_element_3);
            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_108 == NULL)) {
                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 22, tmp_tuple_element_3);
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 23, tmp_tuple_element_3);
            tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_110 == NULL)) {
                tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 24, tmp_tuple_element_3);
            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_111 == NULL)) {
                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 25, tmp_tuple_element_3);
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[18]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 26, tmp_tuple_element_3);
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 27, tmp_tuple_element_3);
            tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_114 == NULL)) {
                tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 28, tmp_tuple_element_3);
            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_115 == NULL)) {
                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 29, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_16, 30, tmp_tuple_element_3);
            tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_116 == NULL)) {
                tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 31, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_16, 32, tmp_tuple_element_3);
            tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_117 == NULL)) {
                tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_117 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 33, tmp_tuple_element_3);
            tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_118 == NULL)) {
                tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 34, tmp_tuple_element_3);
            tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_119 == NULL)) {
                tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[17]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 35, tmp_tuple_element_3);
            tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_120 == NULL)) {
                tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[18]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 36, tmp_tuple_element_3);
            tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_121 == NULL)) {
                tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[18]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 37, tmp_tuple_element_3);
            tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_122 == NULL)) {
                tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[18]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 38, tmp_tuple_element_3);
            tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_123 == NULL)) {
                tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[18]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_16, 39, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_16);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[24];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[25];
        tmp_dict_value_3 = mod_consts[35];
        tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[27];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_dict_value_3 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[28];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        assert(!(tmp_dict_value_3 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[29];
        tmp_dict_value_3 = mod_consts[47];
        tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_18);
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subvalue_3 == NULL)) {
            tmp_ass_subvalue_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[48];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_124;
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[17]);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = MAKE_TUPLE_EMPTY(16);
        {
            PyObject *tmp_expression_value_125;
            PyObject *tmp_expression_value_126;
            PyObject *tmp_expression_value_127;
            PyObject *tmp_expression_value_128;
            PyObject *tmp_expression_value_129;
            PyObject *tmp_expression_value_130;
            PyObject *tmp_expression_value_131;
            PyObject *tmp_expression_value_132;
            PyObject *tmp_expression_value_133;
            PyObject *tmp_expression_value_134;
            PyObject *tmp_expression_value_135;
            PyObject *tmp_expression_value_136;
            PyObject *tmp_expression_value_137;
            PyObject *tmp_expression_value_138;
            PyTuple_SET_ITEM(tmp_assign_source_20, 0, tmp_tuple_element_4);
            tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_125 == NULL)) {
                tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[18]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_20, 2, tmp_tuple_element_4);
            tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_126 == NULL)) {
                tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[17]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 3, tmp_tuple_element_4);
            tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_127 == NULL)) {
                tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[17]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 4, tmp_tuple_element_4);
            tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_128 == NULL)) {
                tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_128 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[17]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 5, tmp_tuple_element_4);
            tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_129 == NULL)) {
                tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_129 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[17]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 6, tmp_tuple_element_4);
            tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_130 == NULL)) {
                tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[17]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 7, tmp_tuple_element_4);
            tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_131 == NULL)) {
                tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_131 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[20]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 8, tmp_tuple_element_4);
            tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_132 == NULL)) {
                tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[20]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 9, tmp_tuple_element_4);
            tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_133 == NULL)) {
                tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_133 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[20]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 10, tmp_tuple_element_4);
            tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_134 == NULL)) {
                tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[20]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 11, tmp_tuple_element_4);
            tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_135 == NULL)) {
                tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_135 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[17]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 12, tmp_tuple_element_4);
            tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_136 == NULL)) {
                tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_136 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[17]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 13, tmp_tuple_element_4);
            tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_137 == NULL)) {
                tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_137 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[18]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 14, tmp_tuple_element_4);
            tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_138 == NULL)) {
                tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_138 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[18]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_20, 15, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_assign_source_20);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[24];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[25];
        tmp_dict_value_4 = mod_consts[34];
        tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[27];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        assert(!(tmp_dict_value_4 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[28];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        assert(!(tmp_dict_value_4 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[29];
        tmp_dict_value_4 = mod_consts[54];
        tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_22);
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subvalue_4 == NULL)) {
            tmp_ass_subvalue_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_4 == NULL)) {
            tmp_ass_subscribed_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_ass_subscribed_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[55];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_139;
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[17]);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = MAKE_TUPLE_EMPTY(50);
        {
            PyObject *tmp_expression_value_140;
            PyObject *tmp_expression_value_141;
            PyObject *tmp_expression_value_142;
            PyObject *tmp_expression_value_143;
            PyObject *tmp_expression_value_144;
            PyObject *tmp_expression_value_145;
            PyObject *tmp_expression_value_146;
            PyObject *tmp_expression_value_147;
            PyObject *tmp_expression_value_148;
            PyObject *tmp_expression_value_149;
            PyObject *tmp_expression_value_150;
            PyObject *tmp_expression_value_151;
            PyObject *tmp_expression_value_152;
            PyObject *tmp_expression_value_153;
            PyObject *tmp_expression_value_154;
            PyObject *tmp_expression_value_155;
            PyObject *tmp_expression_value_156;
            PyObject *tmp_expression_value_157;
            PyObject *tmp_expression_value_158;
            PyObject *tmp_expression_value_159;
            PyObject *tmp_expression_value_160;
            PyObject *tmp_expression_value_161;
            PyObject *tmp_expression_value_162;
            PyObject *tmp_expression_value_163;
            PyObject *tmp_expression_value_164;
            PyObject *tmp_expression_value_165;
            PyObject *tmp_expression_value_166;
            PyObject *tmp_expression_value_167;
            PyObject *tmp_expression_value_168;
            PyObject *tmp_expression_value_169;
            PyObject *tmp_expression_value_170;
            PyObject *tmp_expression_value_171;
            PyObject *tmp_expression_value_172;
            PyObject *tmp_expression_value_173;
            PyObject *tmp_expression_value_174;
            PyObject *tmp_expression_value_175;
            PyObject *tmp_expression_value_176;
            PyObject *tmp_expression_value_177;
            PyObject *tmp_expression_value_178;
            PyObject *tmp_expression_value_179;
            PyObject *tmp_expression_value_180;
            PyObject *tmp_expression_value_181;
            PyObject *tmp_expression_value_182;
            PyObject *tmp_expression_value_183;
            PyObject *tmp_expression_value_184;
            PyObject *tmp_expression_value_185;
            PyTuple_SET_ITEM(tmp_assign_source_24, 0, tmp_tuple_element_5);
            tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_140 == NULL)) {
                tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_140 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 1, tmp_tuple_element_5);
            tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_141 == NULL)) {
                tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_141 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 2, tmp_tuple_element_5);
            tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_142 == NULL)) {
                tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_142 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 3, tmp_tuple_element_5);
            tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_143 == NULL)) {
                tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_143 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 4, tmp_tuple_element_5);
            tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_144 == NULL)) {
                tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_144 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 5, tmp_tuple_element_5);
            tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_145 == NULL)) {
                tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_145 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 6, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_24, 7, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_24, 8, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_assign_source_24, 9, tmp_tuple_element_5);
            tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_146 == NULL)) {
                tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_146 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts[20]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 10, tmp_tuple_element_5);
            tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_147 == NULL)) {
                tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_147 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[20]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 11, tmp_tuple_element_5);
            tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_148 == NULL)) {
                tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_148 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts[20]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 12, tmp_tuple_element_5);
            tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_149 == NULL)) {
                tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_149 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts[20]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 13, tmp_tuple_element_5);
            tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_150 == NULL)) {
                tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_150 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[20]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 14, tmp_tuple_element_5);
            tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_151 == NULL)) {
                tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_151 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts[20]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 15, tmp_tuple_element_5);
            tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_152 == NULL)) {
                tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_152 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts[20]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 16, tmp_tuple_element_5);
            tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_153 == NULL)) {
                tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_153 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[20]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 17, tmp_tuple_element_5);
            tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_154 == NULL)) {
                tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_154 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts[20]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 18, tmp_tuple_element_5);
            tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_155 == NULL)) {
                tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_155 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts[20]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 19, tmp_tuple_element_5);
            tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_156 == NULL)) {
                tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_156 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 20, tmp_tuple_element_5);
            tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_157 == NULL)) {
                tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_157 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 21, tmp_tuple_element_5);
            tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_158 == NULL)) {
                tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_158 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 22, tmp_tuple_element_5);
            tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_159 == NULL)) {
                tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_159 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 23, tmp_tuple_element_5);
            tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_160 == NULL)) {
                tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_160 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 24, tmp_tuple_element_5);
            tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_161 == NULL)) {
                tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_161 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 25, tmp_tuple_element_5);
            tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_162 == NULL)) {
                tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_162 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 26, tmp_tuple_element_5);
            tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_163 == NULL)) {
                tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_163 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 27, tmp_tuple_element_5);
            tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_164 == NULL)) {
                tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_164 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 28, tmp_tuple_element_5);
            tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_165 == NULL)) {
                tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_165 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 29, tmp_tuple_element_5);
            tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_166 == NULL)) {
                tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_166 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 30, tmp_tuple_element_5);
            tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_167 == NULL)) {
                tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_167 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 31, tmp_tuple_element_5);
            tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_168 == NULL)) {
                tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_168 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 32, tmp_tuple_element_5);
            tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_169 == NULL)) {
                tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_169 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 33, tmp_tuple_element_5);
            tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_170 == NULL)) {
                tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_170 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 34, tmp_tuple_element_5);
            tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_171 == NULL)) {
                tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_171 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 35, tmp_tuple_element_5);
            tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_172 == NULL)) {
                tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_172 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 36, tmp_tuple_element_5);
            tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_173 == NULL)) {
                tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_173 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 37, tmp_tuple_element_5);
            tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_174 == NULL)) {
                tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_174 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_174, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 38, tmp_tuple_element_5);
            tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_175 == NULL)) {
                tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_175 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 39, tmp_tuple_element_5);
            tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_176 == NULL)) {
                tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_176 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_176, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 40, tmp_tuple_element_5);
            tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_177 == NULL)) {
                tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_177 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_177, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 41, tmp_tuple_element_5);
            tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_178 == NULL)) {
                tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_178 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_178, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 42, tmp_tuple_element_5);
            tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_179 == NULL)) {
                tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_179 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_179, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 43, tmp_tuple_element_5);
            tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_180 == NULL)) {
                tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_180 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_180, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 44, tmp_tuple_element_5);
            tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_181 == NULL)) {
                tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_181 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_181, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 45, tmp_tuple_element_5);
            tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_182 == NULL)) {
                tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_182 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_182, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 46, tmp_tuple_element_5);
            tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_183 == NULL)) {
                tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_183 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_183, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 47, tmp_tuple_element_5);
            tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_184 == NULL)) {
                tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_184 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_184, mod_consts[17]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 48, tmp_tuple_element_5);
            tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_185 == NULL)) {
                tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_185 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_185, mod_consts[18]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_24, 49, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_assign_source_24);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_dict_key_5 = mod_consts[24];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[25];
        tmp_dict_value_5 = mod_consts[39];
        tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[27];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        assert(!(tmp_dict_value_5 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[28];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        assert(!(tmp_dict_value_5 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[29];
        tmp_dict_value_5 = mod_consts[61];
        tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_26);
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_ass_subvalue_5 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subvalue_5 == NULL)) {
            tmp_ass_subvalue_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_ass_subvalue_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_5 == NULL)) {
            tmp_ass_subscribed_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_ass_subscribed_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[62];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_186;
        tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_186 == NULL)) {
            tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_186, mod_consts[17]);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = MAKE_TUPLE_EMPTY(48);
        {
            PyObject *tmp_expression_value_187;
            PyObject *tmp_expression_value_188;
            PyObject *tmp_expression_value_189;
            PyObject *tmp_expression_value_190;
            PyObject *tmp_expression_value_191;
            PyObject *tmp_expression_value_192;
            PyObject *tmp_expression_value_193;
            PyObject *tmp_expression_value_194;
            PyObject *tmp_expression_value_195;
            PyObject *tmp_expression_value_196;
            PyObject *tmp_expression_value_197;
            PyObject *tmp_expression_value_198;
            PyObject *tmp_expression_value_199;
            PyObject *tmp_expression_value_200;
            PyObject *tmp_expression_value_201;
            PyObject *tmp_expression_value_202;
            PyObject *tmp_expression_value_203;
            PyObject *tmp_expression_value_204;
            PyObject *tmp_expression_value_205;
            PyObject *tmp_expression_value_206;
            PyObject *tmp_expression_value_207;
            PyObject *tmp_expression_value_208;
            PyObject *tmp_expression_value_209;
            PyObject *tmp_expression_value_210;
            PyObject *tmp_expression_value_211;
            PyObject *tmp_expression_value_212;
            PyObject *tmp_expression_value_213;
            PyObject *tmp_expression_value_214;
            PyObject *tmp_expression_value_215;
            PyObject *tmp_expression_value_216;
            PyObject *tmp_expression_value_217;
            PyObject *tmp_expression_value_218;
            PyObject *tmp_expression_value_219;
            PyObject *tmp_expression_value_220;
            PyObject *tmp_expression_value_221;
            PyObject *tmp_expression_value_222;
            PyObject *tmp_expression_value_223;
            PyObject *tmp_expression_value_224;
            PyObject *tmp_expression_value_225;
            PyObject *tmp_expression_value_226;
            PyObject *tmp_expression_value_227;
            PyObject *tmp_expression_value_228;
            PyTuple_SET_ITEM(tmp_assign_source_28, 0, tmp_tuple_element_6);
            tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_187 == NULL)) {
                tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_187 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_187, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 1, tmp_tuple_element_6);
            tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_188 == NULL)) {
                tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_188 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_188, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 2, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_28, 3, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_28, 4, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_28, 5, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_assign_source_28, 6, tmp_tuple_element_6);
            tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_189 == NULL)) {
                tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_189 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_189, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 7, tmp_tuple_element_6);
            tmp_expression_value_190 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_190 == NULL)) {
                tmp_expression_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_190 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_190, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 8, tmp_tuple_element_6);
            tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_191 == NULL)) {
                tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_191 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_191, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 9, tmp_tuple_element_6);
            tmp_expression_value_192 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_192 == NULL)) {
                tmp_expression_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_192 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_192, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 10, tmp_tuple_element_6);
            tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_193 == NULL)) {
                tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_193 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_193, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 11, tmp_tuple_element_6);
            tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_194 == NULL)) {
                tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_194 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_194, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 12, tmp_tuple_element_6);
            tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_195 == NULL)) {
                tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_195 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_195, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 13, tmp_tuple_element_6);
            tmp_expression_value_196 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_196 == NULL)) {
                tmp_expression_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_196 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_196, mod_consts[20]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 14, tmp_tuple_element_6);
            tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_197 == NULL)) {
                tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_197 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_197, mod_consts[20]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 15, tmp_tuple_element_6);
            tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_198 == NULL)) {
                tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_198 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_198, mod_consts[20]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 16, tmp_tuple_element_6);
            tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_199 == NULL)) {
                tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_199 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_199, mod_consts[20]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 17, tmp_tuple_element_6);
            tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_200 == NULL)) {
                tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_200 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_200, mod_consts[20]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 18, tmp_tuple_element_6);
            tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_201 == NULL)) {
                tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_201 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_201, mod_consts[20]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 19, tmp_tuple_element_6);
            tmp_expression_value_202 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_202 == NULL)) {
                tmp_expression_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_202 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_202, mod_consts[20]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 20, tmp_tuple_element_6);
            tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_203 == NULL)) {
                tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_203 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_203, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 21, tmp_tuple_element_6);
            tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_204 == NULL)) {
                tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_204 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_204, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 22, tmp_tuple_element_6);
            tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_205 == NULL)) {
                tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_205 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_205, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 23, tmp_tuple_element_6);
            tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_206 == NULL)) {
                tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_206 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_206, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 24, tmp_tuple_element_6);
            tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_207 == NULL)) {
                tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_207 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_207, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 25, tmp_tuple_element_6);
            tmp_expression_value_208 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_208 == NULL)) {
                tmp_expression_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_208 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_208, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 26, tmp_tuple_element_6);
            tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_209 == NULL)) {
                tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_209 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_209, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 27, tmp_tuple_element_6);
            tmp_expression_value_210 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_210 == NULL)) {
                tmp_expression_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_210 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_210, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 28, tmp_tuple_element_6);
            tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_211 == NULL)) {
                tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_211 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_211, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 29, tmp_tuple_element_6);
            tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_212 == NULL)) {
                tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_212 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_212, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 30, tmp_tuple_element_6);
            tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_213 == NULL)) {
                tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_213 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_213, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 31, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_28, 32, tmp_tuple_element_6);
            tmp_expression_value_214 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_214 == NULL)) {
                tmp_expression_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_214 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_214, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 33, tmp_tuple_element_6);
            tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_215 == NULL)) {
                tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_215 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_215, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 34, tmp_tuple_element_6);
            tmp_expression_value_216 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_216 == NULL)) {
                tmp_expression_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_216 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_216, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 35, tmp_tuple_element_6);
            tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_217 == NULL)) {
                tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_217 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_217, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 36, tmp_tuple_element_6);
            tmp_expression_value_218 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_218 == NULL)) {
                tmp_expression_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_218 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_218, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 37, tmp_tuple_element_6);
            tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_219 == NULL)) {
                tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_219 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_219, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 38, tmp_tuple_element_6);
            tmp_expression_value_220 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_220 == NULL)) {
                tmp_expression_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_220 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_220, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 39, tmp_tuple_element_6);
            tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_221 == NULL)) {
                tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_221 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_221, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 40, tmp_tuple_element_6);
            tmp_expression_value_222 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_222 == NULL)) {
                tmp_expression_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_222 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_222, mod_consts[17]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 41, tmp_tuple_element_6);
            tmp_expression_value_223 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_223 == NULL)) {
                tmp_expression_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_223 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_223, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 42, tmp_tuple_element_6);
            tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_224 == NULL)) {
                tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_224 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_224, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 43, tmp_tuple_element_6);
            tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_225 == NULL)) {
                tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_225 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_225, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 44, tmp_tuple_element_6);
            tmp_expression_value_226 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_226 == NULL)) {
                tmp_expression_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_226 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_226, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 45, tmp_tuple_element_6);
            tmp_expression_value_227 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_227 == NULL)) {
                tmp_expression_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_227 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_227, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 46, tmp_tuple_element_6);
            tmp_expression_value_228 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_228 == NULL)) {
                tmp_expression_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_228 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_228, mod_consts[18]);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 47, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_assign_source_28);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_dict_key_6 = mod_consts[24];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[25];
        tmp_dict_value_6 = mod_consts[68];
        tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[27];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        assert(!(tmp_dict_value_6 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[28];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        assert(!(tmp_dict_value_6 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[29];
        tmp_dict_value_6 = mod_consts[69];
        tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_30);
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_ass_subvalue_6 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subvalue_6 == NULL)) {
            tmp_ass_subvalue_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_ass_subvalue_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_6 == NULL)) {
            tmp_ass_subscribed_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_ass_subscribed_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[70];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_229;
        tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_229 == NULL)) {
            tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_229, mod_consts[17]);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = MAKE_TUPLE_EMPTY(48);
        {
            PyObject *tmp_expression_value_230;
            PyObject *tmp_expression_value_231;
            PyObject *tmp_expression_value_232;
            PyObject *tmp_expression_value_233;
            PyObject *tmp_expression_value_234;
            PyObject *tmp_expression_value_235;
            PyObject *tmp_expression_value_236;
            PyObject *tmp_expression_value_237;
            PyObject *tmp_expression_value_238;
            PyObject *tmp_expression_value_239;
            PyObject *tmp_expression_value_240;
            PyObject *tmp_expression_value_241;
            PyObject *tmp_expression_value_242;
            PyObject *tmp_expression_value_243;
            PyObject *tmp_expression_value_244;
            PyObject *tmp_expression_value_245;
            PyObject *tmp_expression_value_246;
            PyObject *tmp_expression_value_247;
            PyObject *tmp_expression_value_248;
            PyObject *tmp_expression_value_249;
            PyObject *tmp_expression_value_250;
            PyObject *tmp_expression_value_251;
            PyObject *tmp_expression_value_252;
            PyObject *tmp_expression_value_253;
            PyObject *tmp_expression_value_254;
            PyObject *tmp_expression_value_255;
            PyObject *tmp_expression_value_256;
            PyObject *tmp_expression_value_257;
            PyObject *tmp_expression_value_258;
            PyObject *tmp_expression_value_259;
            PyObject *tmp_expression_value_260;
            PyObject *tmp_expression_value_261;
            PyObject *tmp_expression_value_262;
            PyObject *tmp_expression_value_263;
            PyObject *tmp_expression_value_264;
            PyObject *tmp_expression_value_265;
            PyObject *tmp_expression_value_266;
            PyObject *tmp_expression_value_267;
            PyObject *tmp_expression_value_268;
            PyObject *tmp_expression_value_269;
            PyObject *tmp_expression_value_270;
            PyObject *tmp_expression_value_271;
            PyObject *tmp_expression_value_272;
            PyObject *tmp_expression_value_273;
            PyTuple_SET_ITEM(tmp_assign_source_32, 0, tmp_tuple_element_7);
            tmp_expression_value_230 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_230 == NULL)) {
                tmp_expression_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_230 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_230, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 1, tmp_tuple_element_7);
            tmp_expression_value_231 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_231 == NULL)) {
                tmp_expression_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_231 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_231, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 2, tmp_tuple_element_7);
            tmp_expression_value_232 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_232 == NULL)) {
                tmp_expression_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_232 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_232, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 3, tmp_tuple_element_7);
            tmp_expression_value_233 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_233 == NULL)) {
                tmp_expression_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_233 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_233, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 4, tmp_tuple_element_7);
            tmp_expression_value_234 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_234 == NULL)) {
                tmp_expression_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_234 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_234, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 5, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_32, 6, tmp_tuple_element_7);
            tmp_expression_value_235 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_235 == NULL)) {
                tmp_expression_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_235 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_235, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 7, tmp_tuple_element_7);
            tmp_expression_value_236 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_236 == NULL)) {
                tmp_expression_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_236 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_236, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 8, tmp_tuple_element_7);
            tmp_expression_value_237 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_237 == NULL)) {
                tmp_expression_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_237 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_237, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 9, tmp_tuple_element_7);
            tmp_expression_value_238 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_238 == NULL)) {
                tmp_expression_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_238 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_238, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 10, tmp_tuple_element_7);
            tmp_expression_value_239 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_239 == NULL)) {
                tmp_expression_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_239 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_239, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 11, tmp_tuple_element_7);
            tmp_expression_value_240 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_240 == NULL)) {
                tmp_expression_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_240 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_240, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 12, tmp_tuple_element_7);
            tmp_expression_value_241 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_241 == NULL)) {
                tmp_expression_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_241 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_241, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 13, tmp_tuple_element_7);
            tmp_expression_value_242 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_242 == NULL)) {
                tmp_expression_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_242 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_242, mod_consts[20]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 14, tmp_tuple_element_7);
            tmp_expression_value_243 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_243 == NULL)) {
                tmp_expression_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_243 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_243, mod_consts[20]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 15, tmp_tuple_element_7);
            tmp_expression_value_244 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_244 == NULL)) {
                tmp_expression_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_244 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_244, mod_consts[20]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 16, tmp_tuple_element_7);
            tmp_expression_value_245 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_245 == NULL)) {
                tmp_expression_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_245 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_245, mod_consts[20]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 17, tmp_tuple_element_7);
            tmp_expression_value_246 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_246 == NULL)) {
                tmp_expression_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_246 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_246, mod_consts[20]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 18, tmp_tuple_element_7);
            tmp_expression_value_247 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_247 == NULL)) {
                tmp_expression_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_247 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_247, mod_consts[20]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 19, tmp_tuple_element_7);
            tmp_expression_value_248 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_248 == NULL)) {
                tmp_expression_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_248 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_248, mod_consts[20]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 20, tmp_tuple_element_7);
            tmp_expression_value_249 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_249 == NULL)) {
                tmp_expression_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_249 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_249, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 21, tmp_tuple_element_7);
            tmp_expression_value_250 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_250 == NULL)) {
                tmp_expression_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_250 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_250, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 22, tmp_tuple_element_7);
            tmp_expression_value_251 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_251 == NULL)) {
                tmp_expression_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_251 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_251, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 23, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_assign_source_32, 24, tmp_tuple_element_7);
            tmp_expression_value_252 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_252 == NULL)) {
                tmp_expression_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_252 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_252, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 25, tmp_tuple_element_7);
            tmp_expression_value_253 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_253 == NULL)) {
                tmp_expression_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_253 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_253, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 26, tmp_tuple_element_7);
            tmp_expression_value_254 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_254 == NULL)) {
                tmp_expression_value_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_254 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_254, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 27, tmp_tuple_element_7);
            tmp_expression_value_255 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_255 == NULL)) {
                tmp_expression_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_255 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_255, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 28, tmp_tuple_element_7);
            tmp_expression_value_256 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_256 == NULL)) {
                tmp_expression_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_256 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_256, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 29, tmp_tuple_element_7);
            tmp_expression_value_257 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_257 == NULL)) {
                tmp_expression_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_257 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_257, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 30, tmp_tuple_element_7);
            tmp_expression_value_258 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_258 == NULL)) {
                tmp_expression_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_258 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_258, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 31, tmp_tuple_element_7);
            tmp_expression_value_259 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_259 == NULL)) {
                tmp_expression_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_259 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_259, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 32, tmp_tuple_element_7);
            tmp_expression_value_260 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_260 == NULL)) {
                tmp_expression_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_260 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_260, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 33, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_32, 34, tmp_tuple_element_7);
            tmp_expression_value_261 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_261 == NULL)) {
                tmp_expression_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_261 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_261, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 35, tmp_tuple_element_7);
            tmp_expression_value_262 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_262 == NULL)) {
                tmp_expression_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_262 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_262, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 36, tmp_tuple_element_7);
            tmp_expression_value_263 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_263 == NULL)) {
                tmp_expression_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_263 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_263, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 37, tmp_tuple_element_7);
            tmp_expression_value_264 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_264 == NULL)) {
                tmp_expression_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_264 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_264, mod_consts[20]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 38, tmp_tuple_element_7);
            tmp_expression_value_265 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_265 == NULL)) {
                tmp_expression_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_265 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_265, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 39, tmp_tuple_element_7);
            tmp_expression_value_266 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_266 == NULL)) {
                tmp_expression_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_266 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_266, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 40, tmp_tuple_element_7);
            tmp_expression_value_267 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_267 == NULL)) {
                tmp_expression_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_267 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_267, mod_consts[17]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 41, tmp_tuple_element_7);
            tmp_expression_value_268 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_268 == NULL)) {
                tmp_expression_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_268 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_268, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 42, tmp_tuple_element_7);
            tmp_expression_value_269 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_269 == NULL)) {
                tmp_expression_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_269 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_269, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 43, tmp_tuple_element_7);
            tmp_expression_value_270 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_270 == NULL)) {
                tmp_expression_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_270 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_270, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 44, tmp_tuple_element_7);
            tmp_expression_value_271 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_271 == NULL)) {
                tmp_expression_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_271 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_271, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 45, tmp_tuple_element_7);
            tmp_expression_value_272 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_272 == NULL)) {
                tmp_expression_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_272 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_272, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 46, tmp_tuple_element_7);
            tmp_expression_value_273 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_273 == NULL)) {
                tmp_expression_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_273 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_273, mod_consts[18]);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_32, 47, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_assign_source_32);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_dict_key_7 = mod_consts[24];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[25];
        tmp_dict_value_7 = mod_consts[68];
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[27];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        assert(!(tmp_dict_value_7 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[28];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        assert(!(tmp_dict_value_7 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[29];
        tmp_dict_value_7 = mod_consts[76];
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_34);
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        tmp_ass_subvalue_7 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subvalue_7 == NULL)) {
            tmp_ass_subvalue_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_ass_subvalue_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_7 == NULL)) {
            tmp_ass_subscribed_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_ass_subscribed_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_7 = mod_consts[77];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_value_274;
        tmp_expression_value_274 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_274 == NULL)) {
            tmp_expression_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_274 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_274, mod_consts[17]);
        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = MAKE_TUPLE_EMPTY(24);
        {
            PyObject *tmp_expression_value_275;
            PyObject *tmp_expression_value_276;
            PyObject *tmp_expression_value_277;
            PyObject *tmp_expression_value_278;
            PyObject *tmp_expression_value_279;
            PyObject *tmp_expression_value_280;
            PyObject *tmp_expression_value_281;
            PyObject *tmp_expression_value_282;
            PyObject *tmp_expression_value_283;
            PyObject *tmp_expression_value_284;
            PyObject *tmp_expression_value_285;
            PyObject *tmp_expression_value_286;
            PyObject *tmp_expression_value_287;
            PyObject *tmp_expression_value_288;
            PyObject *tmp_expression_value_289;
            PyObject *tmp_expression_value_290;
            PyObject *tmp_expression_value_291;
            PyObject *tmp_expression_value_292;
            PyObject *tmp_expression_value_293;
            PyObject *tmp_expression_value_294;
            PyObject *tmp_expression_value_295;
            PyObject *tmp_expression_value_296;
            PyTuple_SET_ITEM(tmp_assign_source_36, 0, tmp_tuple_element_8);
            tmp_expression_value_275 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_275 == NULL)) {
                tmp_expression_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_275 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_275, mod_consts[18]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 1, tmp_tuple_element_8);
            tmp_expression_value_276 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_276 == NULL)) {
                tmp_expression_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_276 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_276, mod_consts[18]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 2, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_36, 3, tmp_tuple_element_8);
            tmp_expression_value_277 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_277 == NULL)) {
                tmp_expression_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_277 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_277, mod_consts[17]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 4, tmp_tuple_element_8);
            tmp_expression_value_278 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_278 == NULL)) {
                tmp_expression_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_278 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_278, mod_consts[17]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 5, tmp_tuple_element_8);
            tmp_expression_value_279 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_279 == NULL)) {
                tmp_expression_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_279 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_279, mod_consts[17]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 6, tmp_tuple_element_8);
            tmp_expression_value_280 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_280 == NULL)) {
                tmp_expression_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_280 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_280, mod_consts[17]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 7, tmp_tuple_element_8);
            tmp_expression_value_281 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_281 == NULL)) {
                tmp_expression_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_281 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_281, mod_consts[17]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 8, tmp_tuple_element_8);
            tmp_expression_value_282 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_282 == NULL)) {
                tmp_expression_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_282 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_282, mod_consts[17]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 9, tmp_tuple_element_8);
            tmp_expression_value_283 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_283 == NULL)) {
                tmp_expression_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_283 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_283, mod_consts[17]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 10, tmp_tuple_element_8);
            tmp_expression_value_284 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_284 == NULL)) {
                tmp_expression_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_284 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_284, mod_consts[17]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 11, tmp_tuple_element_8);
            tmp_expression_value_285 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_285 == NULL)) {
                tmp_expression_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_285 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_285, mod_consts[20]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 12, tmp_tuple_element_8);
            tmp_expression_value_286 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_286 == NULL)) {
                tmp_expression_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_286 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_286, mod_consts[20]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 13, tmp_tuple_element_8);
            tmp_expression_value_287 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_287 == NULL)) {
                tmp_expression_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_287 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_287, mod_consts[20]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 14, tmp_tuple_element_8);
            tmp_expression_value_288 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_288 == NULL)) {
                tmp_expression_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_288 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_288, mod_consts[20]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 15, tmp_tuple_element_8);
            tmp_expression_value_289 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_289 == NULL)) {
                tmp_expression_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_289 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_289, mod_consts[20]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 16, tmp_tuple_element_8);
            tmp_expression_value_290 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_290 == NULL)) {
                tmp_expression_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_290 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_290, mod_consts[20]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 17, tmp_tuple_element_8);
            tmp_expression_value_291 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_291 == NULL)) {
                tmp_expression_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_291 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_291, mod_consts[17]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 18, tmp_tuple_element_8);
            tmp_expression_value_292 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_292 == NULL)) {
                tmp_expression_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_292 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_292, mod_consts[17]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 19, tmp_tuple_element_8);
            tmp_expression_value_293 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_293 == NULL)) {
                tmp_expression_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_293 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_293, mod_consts[18]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 20, tmp_tuple_element_8);
            tmp_expression_value_294 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_294 == NULL)) {
                tmp_expression_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_294 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_294, mod_consts[18]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 21, tmp_tuple_element_8);
            tmp_expression_value_295 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_295 == NULL)) {
                tmp_expression_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_295 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_295, mod_consts[18]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 22, tmp_tuple_element_8);
            tmp_expression_value_296 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_296 == NULL)) {
                tmp_expression_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_296 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_296, mod_consts[18]);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_36, 23, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_assign_source_36);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_dict_key_8 = mod_consts[24];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_38 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[25];
        tmp_dict_value_8 = mod_consts[35];
        tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[27];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        assert(!(tmp_dict_value_8 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[28];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        assert(!(tmp_dict_value_8 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[29];
        tmp_dict_value_8 = mod_consts[83];
        tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_38);
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        tmp_ass_subvalue_8 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subvalue_8 == NULL)) {
            tmp_ass_subvalue_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_ass_subvalue_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_8 == NULL)) {
            tmp_ass_subscribed_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_ass_subscribed_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_8 = mod_consts[84];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = mod_consts[26];
        tmp_assign_source_40 = MAKE_TUPLE_EMPTY(56);
        {
            PyObject *tmp_expression_value_297;
            PyObject *tmp_expression_value_298;
            PyObject *tmp_expression_value_299;
            PyObject *tmp_expression_value_300;
            PyObject *tmp_expression_value_301;
            PyObject *tmp_expression_value_302;
            PyObject *tmp_expression_value_303;
            PyObject *tmp_expression_value_304;
            PyObject *tmp_expression_value_305;
            PyObject *tmp_expression_value_306;
            PyObject *tmp_expression_value_307;
            PyObject *tmp_expression_value_308;
            PyObject *tmp_expression_value_309;
            PyObject *tmp_expression_value_310;
            PyObject *tmp_expression_value_311;
            PyObject *tmp_expression_value_312;
            PyObject *tmp_expression_value_313;
            PyObject *tmp_expression_value_314;
            PyObject *tmp_expression_value_315;
            PyObject *tmp_expression_value_316;
            PyObject *tmp_expression_value_317;
            PyObject *tmp_expression_value_318;
            PyTuple_SET_ITEM0(tmp_assign_source_40, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 2, tmp_tuple_element_9);
            tmp_expression_value_297 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_297 == NULL)) {
                tmp_expression_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_297 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_297, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 3, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 4, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 5, tmp_tuple_element_9);
            tmp_expression_value_298 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_298 == NULL)) {
                tmp_expression_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_298 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_298, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 6, tmp_tuple_element_9);
            tmp_expression_value_299 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_299 == NULL)) {
                tmp_expression_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_299 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_299, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 7, tmp_tuple_element_9);
            tmp_expression_value_300 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_300 == NULL)) {
                tmp_expression_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_300 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_300, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 8, tmp_tuple_element_9);
            tmp_expression_value_301 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_301 == NULL)) {
                tmp_expression_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_301 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_301, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 9, tmp_tuple_element_9);
            tmp_expression_value_302 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_302 == NULL)) {
                tmp_expression_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_302 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_302, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 10, tmp_tuple_element_9);
            tmp_expression_value_303 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_303 == NULL)) {
                tmp_expression_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_303 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_303, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 11, tmp_tuple_element_9);
            tmp_expression_value_304 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_304 == NULL)) {
                tmp_expression_value_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_304 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_304, mod_consts[20]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 12, tmp_tuple_element_9);
            tmp_expression_value_305 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_305 == NULL)) {
                tmp_expression_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_305 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_305, mod_consts[20]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 13, tmp_tuple_element_9);
            tmp_expression_value_306 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_306 == NULL)) {
                tmp_expression_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_306 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_306, mod_consts[20]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 14, tmp_tuple_element_9);
            tmp_expression_value_307 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_307 == NULL)) {
                tmp_expression_value_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_307 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_307, mod_consts[20]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 15, tmp_tuple_element_9);
            tmp_expression_value_308 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_308 == NULL)) {
                tmp_expression_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_308 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 510;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_308, mod_consts[20]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 510;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 16, tmp_tuple_element_9);
            tmp_expression_value_309 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_309 == NULL)) {
                tmp_expression_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_309 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 510;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_309, mod_consts[20]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 510;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 17, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 18, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 19, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 20, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 21, tmp_tuple_element_9);
            tmp_expression_value_310 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_310 == NULL)) {
                tmp_expression_value_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_310 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 510;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_310, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 510;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 22, tmp_tuple_element_9);
            tmp_expression_value_311 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_311 == NULL)) {
                tmp_expression_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_311 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 510;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_311, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 510;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 23, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 24, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 25, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 26, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 27, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 28, tmp_tuple_element_9);
            tmp_expression_value_312 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_312 == NULL)) {
                tmp_expression_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_312 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 511;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_312, mod_consts[20]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 511;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 29, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 30, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 31, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 32, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 33, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 34, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 35, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 36, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 37, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 38, tmp_tuple_element_9);
            tmp_expression_value_313 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_313 == NULL)) {
                tmp_expression_value_313 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_313 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 512;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_313, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 512;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 39, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 40, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[87];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 41, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 42, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 43, tmp_tuple_element_9);
            tmp_expression_value_314 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_314 == NULL)) {
                tmp_expression_value_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_314 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_314, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 44, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 45, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 46, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 47, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 48, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 49, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 50, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_40, 51, tmp_tuple_element_9);
            tmp_expression_value_315 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_315 == NULL)) {
                tmp_expression_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_315 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_315, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 52, tmp_tuple_element_9);
            tmp_expression_value_316 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_316 == NULL)) {
                tmp_expression_value_316 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_316 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_316, mod_consts[17]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 53, tmp_tuple_element_9);
            tmp_expression_value_317 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_317 == NULL)) {
                tmp_expression_value_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_317 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_317, mod_consts[18]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 54, tmp_tuple_element_9);
            tmp_expression_value_318 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_318 == NULL)) {
                tmp_expression_value_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_318 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_318, mod_consts[18]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 55, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_assign_source_40);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_dict_key_9 = mod_consts[24];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_42 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_42, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[25];
        tmp_dict_value_9 = mod_consts[35];
        tmp_res = PyDict_SetItem(tmp_assign_source_42, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[27];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        assert(!(tmp_dict_value_9 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_42, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[28];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        assert(!(tmp_dict_value_9 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_42, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[29];
        tmp_dict_value_9 = mod_consts[91];
        tmp_res = PyDict_SetItem(tmp_assign_source_42, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_42);
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        tmp_ass_subvalue_9 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subvalue_9 == NULL)) {
            tmp_ass_subvalue_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_ass_subvalue_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_9 == NULL)) {
            tmp_ass_subscribed_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_ass_subscribed_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_9 = mod_consts[92];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_10;
        tmp_tuple_element_10 = mod_consts[35];
        tmp_assign_source_44 = MAKE_TUPLE_EMPTY(56);
        {
            PyObject *tmp_expression_value_319;
            PyObject *tmp_expression_value_320;
            PyObject *tmp_expression_value_321;
            PyObject *tmp_expression_value_322;
            PyObject *tmp_expression_value_323;
            PyObject *tmp_expression_value_324;
            PyObject *tmp_expression_value_325;
            PyObject *tmp_expression_value_326;
            PyObject *tmp_expression_value_327;
            PyObject *tmp_expression_value_328;
            PyObject *tmp_expression_value_329;
            PyObject *tmp_expression_value_330;
            PyObject *tmp_expression_value_331;
            PyObject *tmp_expression_value_332;
            PyObject *tmp_expression_value_333;
            PyObject *tmp_expression_value_334;
            PyObject *tmp_expression_value_335;
            PyObject *tmp_expression_value_336;
            PyObject *tmp_expression_value_337;
            PyObject *tmp_expression_value_338;
            PyObject *tmp_expression_value_339;
            PyObject *tmp_expression_value_340;
            PyObject *tmp_expression_value_341;
            PyObject *tmp_expression_value_342;
            PyObject *tmp_expression_value_343;
            PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 2, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 3, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 4, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 5, tmp_tuple_element_10);
            tmp_expression_value_319 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_319 == NULL)) {
                tmp_expression_value_319 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_319 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_319, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 6, tmp_tuple_element_10);
            tmp_expression_value_320 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_320 == NULL)) {
                tmp_expression_value_320 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_320 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_320, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 7, tmp_tuple_element_10);
            tmp_expression_value_321 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_321 == NULL)) {
                tmp_expression_value_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_321 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_321, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 8, tmp_tuple_element_10);
            tmp_expression_value_322 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_322 == NULL)) {
                tmp_expression_value_322 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_322 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_322, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 9, tmp_tuple_element_10);
            tmp_expression_value_323 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_323 == NULL)) {
                tmp_expression_value_323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_323 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_323, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 10, tmp_tuple_element_10);
            tmp_expression_value_324 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_324 == NULL)) {
                tmp_expression_value_324 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_324 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_324, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 11, tmp_tuple_element_10);
            tmp_expression_value_325 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_325 == NULL)) {
                tmp_expression_value_325 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_325 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_325, mod_consts[20]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 12, tmp_tuple_element_10);
            tmp_expression_value_326 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_326 == NULL)) {
                tmp_expression_value_326 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_326 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_326, mod_consts[20]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 13, tmp_tuple_element_10);
            tmp_expression_value_327 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_327 == NULL)) {
                tmp_expression_value_327 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_327 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_327, mod_consts[20]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 14, tmp_tuple_element_10);
            tmp_expression_value_328 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_328 == NULL)) {
                tmp_expression_value_328 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_328 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_328, mod_consts[20]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 15, tmp_tuple_element_10);
            tmp_expression_value_329 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_329 == NULL)) {
                tmp_expression_value_329 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_329 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_329, mod_consts[20]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 16, tmp_tuple_element_10);
            tmp_expression_value_330 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_330 == NULL)) {
                tmp_expression_value_330 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_330 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_330, mod_consts[20]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 17, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 18, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 19, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 20, tmp_tuple_element_10);
            tmp_expression_value_331 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_331 == NULL)) {
                tmp_expression_value_331 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_331 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_331, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 21, tmp_tuple_element_10);
            tmp_expression_value_332 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_332 == NULL)) {
                tmp_expression_value_332 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_332 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_332, mod_consts[20]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 22, tmp_tuple_element_10);
            tmp_expression_value_333 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_333 == NULL)) {
                tmp_expression_value_333 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_333 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_333, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 23, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 24, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 25, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 26, tmp_tuple_element_10);
            tmp_expression_value_334 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_334 == NULL)) {
                tmp_expression_value_334 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_334 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_334, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 27, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 28, tmp_tuple_element_10);
            tmp_expression_value_335 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_335 == NULL)) {
                tmp_expression_value_335 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_335 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_335, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 29, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 30, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 31, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 32, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 33, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[87];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 34, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[87];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 35, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 36, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 37, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 38, tmp_tuple_element_10);
            tmp_expression_value_336 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_336 == NULL)) {
                tmp_expression_value_336 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_336 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 570;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_336, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 570;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 39, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 40, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 41, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 42, tmp_tuple_element_10);
            tmp_expression_value_337 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_337 == NULL)) {
                tmp_expression_value_337 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_337 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_337, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 43, tmp_tuple_element_10);
            tmp_expression_value_338 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_338 == NULL)) {
                tmp_expression_value_338 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_338 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_338, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 44, tmp_tuple_element_10);
            tmp_expression_value_339 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_339 == NULL)) {
                tmp_expression_value_339 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_339 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_339, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 45, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 46, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 47, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 48, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 49, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 50, tmp_tuple_element_10);
            tmp_expression_value_340 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_340 == NULL)) {
                tmp_expression_value_340 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_340 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_340, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 51, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_44, 52, tmp_tuple_element_10);
            tmp_expression_value_341 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_341 == NULL)) {
                tmp_expression_value_341 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_341 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_341, mod_consts[17]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 53, tmp_tuple_element_10);
            tmp_expression_value_342 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_342 == NULL)) {
                tmp_expression_value_342 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_342 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_342, mod_consts[18]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 54, tmp_tuple_element_10);
            tmp_expression_value_343 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_343 == NULL)) {
                tmp_expression_value_343 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_343 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_343, mod_consts[18]);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_44, 55, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_assign_source_44);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_dict_key_10 = mod_consts[24];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_46 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[25];
        tmp_dict_value_10 = mod_consts[35];
        tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[27];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        assert(!(tmp_dict_value_10 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[28];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        assert(!(tmp_dict_value_10 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[29];
        tmp_dict_value_10 = mod_consts[97];
        tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_46);
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        tmp_ass_subvalue_10 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subvalue_10 == NULL)) {
            tmp_ass_subvalue_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_ass_subvalue_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_10 == NULL)) {
            tmp_ass_subscribed_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_ass_subscribed_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_10 = mod_consts[98];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_344;
        tmp_expression_value_344 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_344 == NULL)) {
            tmp_expression_value_344 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_344 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_344, mod_consts[17]);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_48 = MAKE_TUPLE_EMPTY(208);
        {
            PyObject *tmp_expression_value_345;
            PyObject *tmp_expression_value_346;
            PyObject *tmp_expression_value_347;
            PyObject *tmp_expression_value_348;
            PyObject *tmp_expression_value_349;
            PyObject *tmp_expression_value_350;
            PyObject *tmp_expression_value_351;
            PyObject *tmp_expression_value_352;
            PyObject *tmp_expression_value_353;
            PyObject *tmp_expression_value_354;
            PyObject *tmp_expression_value_355;
            PyObject *tmp_expression_value_356;
            PyObject *tmp_expression_value_357;
            PyObject *tmp_expression_value_358;
            PyObject *tmp_expression_value_359;
            PyObject *tmp_expression_value_360;
            PyObject *tmp_expression_value_361;
            PyObject *tmp_expression_value_362;
            PyObject *tmp_expression_value_363;
            PyObject *tmp_expression_value_364;
            PyObject *tmp_expression_value_365;
            PyObject *tmp_expression_value_366;
            PyObject *tmp_expression_value_367;
            PyObject *tmp_expression_value_368;
            PyObject *tmp_expression_value_369;
            PyObject *tmp_expression_value_370;
            PyObject *tmp_expression_value_371;
            PyObject *tmp_expression_value_372;
            PyObject *tmp_expression_value_373;
            PyObject *tmp_expression_value_374;
            PyObject *tmp_expression_value_375;
            PyObject *tmp_expression_value_376;
            PyObject *tmp_expression_value_377;
            PyObject *tmp_expression_value_378;
            PyObject *tmp_expression_value_379;
            PyObject *tmp_expression_value_380;
            PyObject *tmp_expression_value_381;
            PyObject *tmp_expression_value_382;
            PyObject *tmp_expression_value_383;
            PyObject *tmp_expression_value_384;
            PyObject *tmp_expression_value_385;
            PyObject *tmp_expression_value_386;
            PyObject *tmp_expression_value_387;
            PyObject *tmp_expression_value_388;
            PyObject *tmp_expression_value_389;
            PyObject *tmp_expression_value_390;
            PyObject *tmp_expression_value_391;
            PyObject *tmp_expression_value_392;
            PyObject *tmp_expression_value_393;
            PyObject *tmp_expression_value_394;
            PyObject *tmp_expression_value_395;
            PyObject *tmp_expression_value_396;
            PyObject *tmp_expression_value_397;
            PyObject *tmp_expression_value_398;
            PyObject *tmp_expression_value_399;
            PyObject *tmp_expression_value_400;
            PyObject *tmp_expression_value_401;
            PyObject *tmp_expression_value_402;
            PyObject *tmp_expression_value_403;
            PyObject *tmp_expression_value_404;
            PyObject *tmp_expression_value_405;
            PyObject *tmp_expression_value_406;
            PyObject *tmp_expression_value_407;
            PyObject *tmp_expression_value_408;
            PyObject *tmp_expression_value_409;
            PyObject *tmp_expression_value_410;
            PyObject *tmp_expression_value_411;
            PyObject *tmp_expression_value_412;
            PyObject *tmp_expression_value_413;
            PyObject *tmp_expression_value_414;
            PyObject *tmp_expression_value_415;
            PyObject *tmp_expression_value_416;
            PyObject *tmp_expression_value_417;
            PyObject *tmp_expression_value_418;
            PyObject *tmp_expression_value_419;
            PyObject *tmp_expression_value_420;
            PyObject *tmp_expression_value_421;
            PyObject *tmp_expression_value_422;
            PyObject *tmp_expression_value_423;
            PyObject *tmp_expression_value_424;
            PyObject *tmp_expression_value_425;
            PyObject *tmp_expression_value_426;
            PyObject *tmp_expression_value_427;
            PyObject *tmp_expression_value_428;
            PyObject *tmp_expression_value_429;
            PyObject *tmp_expression_value_430;
            PyObject *tmp_expression_value_431;
            PyObject *tmp_expression_value_432;
            PyObject *tmp_expression_value_433;
            PyObject *tmp_expression_value_434;
            PyObject *tmp_expression_value_435;
            PyObject *tmp_expression_value_436;
            PyObject *tmp_expression_value_437;
            PyObject *tmp_expression_value_438;
            PyObject *tmp_expression_value_439;
            PyObject *tmp_expression_value_440;
            PyObject *tmp_expression_value_441;
            PyObject *tmp_expression_value_442;
            PyObject *tmp_expression_value_443;
            PyObject *tmp_expression_value_444;
            PyObject *tmp_expression_value_445;
            PyObject *tmp_expression_value_446;
            PyObject *tmp_expression_value_447;
            PyObject *tmp_expression_value_448;
            PyObject *tmp_expression_value_449;
            PyObject *tmp_expression_value_450;
            PyObject *tmp_expression_value_451;
            PyObject *tmp_expression_value_452;
            PyObject *tmp_expression_value_453;
            PyObject *tmp_expression_value_454;
            PyObject *tmp_expression_value_455;
            PyObject *tmp_expression_value_456;
            PyObject *tmp_expression_value_457;
            PyObject *tmp_expression_value_458;
            PyObject *tmp_expression_value_459;
            PyObject *tmp_expression_value_460;
            PyObject *tmp_expression_value_461;
            PyObject *tmp_expression_value_462;
            PyObject *tmp_expression_value_463;
            PyObject *tmp_expression_value_464;
            PyObject *tmp_expression_value_465;
            PyObject *tmp_expression_value_466;
            PyObject *tmp_expression_value_467;
            PyObject *tmp_expression_value_468;
            PyObject *tmp_expression_value_469;
            PyObject *tmp_expression_value_470;
            PyObject *tmp_expression_value_471;
            PyObject *tmp_expression_value_472;
            PyObject *tmp_expression_value_473;
            PyObject *tmp_expression_value_474;
            PyObject *tmp_expression_value_475;
            PyObject *tmp_expression_value_476;
            PyObject *tmp_expression_value_477;
            PyObject *tmp_expression_value_478;
            PyObject *tmp_expression_value_479;
            PyObject *tmp_expression_value_480;
            PyObject *tmp_expression_value_481;
            PyObject *tmp_expression_value_482;
            PyObject *tmp_expression_value_483;
            PyObject *tmp_expression_value_484;
            PyObject *tmp_expression_value_485;
            PyObject *tmp_expression_value_486;
            PyObject *tmp_expression_value_487;
            PyObject *tmp_expression_value_488;
            PyObject *tmp_expression_value_489;
            PyObject *tmp_expression_value_490;
            PyObject *tmp_expression_value_491;
            PyObject *tmp_expression_value_492;
            PyObject *tmp_expression_value_493;
            PyObject *tmp_expression_value_494;
            PyObject *tmp_expression_value_495;
            PyObject *tmp_expression_value_496;
            PyObject *tmp_expression_value_497;
            PyObject *tmp_expression_value_498;
            PyObject *tmp_expression_value_499;
            PyObject *tmp_expression_value_500;
            PyObject *tmp_expression_value_501;
            PyObject *tmp_expression_value_502;
            PyObject *tmp_expression_value_503;
            PyObject *tmp_expression_value_504;
            PyObject *tmp_expression_value_505;
            PyObject *tmp_expression_value_506;
            PyObject *tmp_expression_value_507;
            PyObject *tmp_expression_value_508;
            PyObject *tmp_expression_value_509;
            PyObject *tmp_expression_value_510;
            PyObject *tmp_expression_value_511;
            PyObject *tmp_expression_value_512;
            PyObject *tmp_expression_value_513;
            PyObject *tmp_expression_value_514;
            PyObject *tmp_expression_value_515;
            PyTuple_SET_ITEM(tmp_assign_source_48, 0, tmp_tuple_element_11);
            tmp_expression_value_345 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_345 == NULL)) {
                tmp_expression_value_345 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_345 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_345, mod_consts[18]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 1, tmp_tuple_element_11);
            tmp_expression_value_346 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_346 == NULL)) {
                tmp_expression_value_346 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_346 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_346, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 2, tmp_tuple_element_11);
            tmp_expression_value_347 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_347 == NULL)) {
                tmp_expression_value_347 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_347 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_347, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 3, tmp_tuple_element_11);
            tmp_expression_value_348 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_348 == NULL)) {
                tmp_expression_value_348 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_348 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_348, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 4, tmp_tuple_element_11);
            tmp_expression_value_349 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_349 == NULL)) {
                tmp_expression_value_349 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_349 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_349, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 5, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[101];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 6, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[39];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 7, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 8, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[103];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 9, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[87];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 10, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 11, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 12, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 13, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 14, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 15, tmp_tuple_element_11);
            tmp_expression_value_350 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_350 == NULL)) {
                tmp_expression_value_350 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_350 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_350, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 16, tmp_tuple_element_11);
            tmp_expression_value_351 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_351 == NULL)) {
                tmp_expression_value_351 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_351 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_351, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 17, tmp_tuple_element_11);
            tmp_expression_value_352 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_352 == NULL)) {
                tmp_expression_value_352 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_352 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_352, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 18, tmp_tuple_element_11);
            tmp_expression_value_353 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_353 == NULL)) {
                tmp_expression_value_353 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_353 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_353, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 19, tmp_tuple_element_11);
            tmp_expression_value_354 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_354 == NULL)) {
                tmp_expression_value_354 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_354 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_354, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 20, tmp_tuple_element_11);
            tmp_expression_value_355 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_355 == NULL)) {
                tmp_expression_value_355 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_355 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_355, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 21, tmp_tuple_element_11);
            tmp_expression_value_356 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_356 == NULL)) {
                tmp_expression_value_356 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_356 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_356, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 22, tmp_tuple_element_11);
            tmp_expression_value_357 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_357 == NULL)) {
                tmp_expression_value_357 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_357 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_357, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 23, tmp_tuple_element_11);
            tmp_expression_value_358 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_358 == NULL)) {
                tmp_expression_value_358 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_358 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_358, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 24, tmp_tuple_element_11);
            tmp_expression_value_359 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_359 == NULL)) {
                tmp_expression_value_359 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_359 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_359, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 25, tmp_tuple_element_11);
            tmp_expression_value_360 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_360 == NULL)) {
                tmp_expression_value_360 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_360 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_360, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 26, tmp_tuple_element_11);
            tmp_expression_value_361 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_361 == NULL)) {
                tmp_expression_value_361 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_361 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_361, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 27, tmp_tuple_element_11);
            tmp_expression_value_362 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_362 == NULL)) {
                tmp_expression_value_362 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_362 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_362, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 28, tmp_tuple_element_11);
            tmp_expression_value_363 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_363 == NULL)) {
                tmp_expression_value_363 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_363 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_363, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 29, tmp_tuple_element_11);
            tmp_expression_value_364 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_364 == NULL)) {
                tmp_expression_value_364 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_364 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_364, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 30, tmp_tuple_element_11);
            tmp_expression_value_365 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_365 == NULL)) {
                tmp_expression_value_365 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_365 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_365, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 31, tmp_tuple_element_11);
            tmp_expression_value_366 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_366 == NULL)) {
                tmp_expression_value_366 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_366 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_366, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 32, tmp_tuple_element_11);
            tmp_expression_value_367 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_367 == NULL)) {
                tmp_expression_value_367 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_367 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_367, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 33, tmp_tuple_element_11);
            tmp_expression_value_368 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_368 == NULL)) {
                tmp_expression_value_368 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_368 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_368, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 34, tmp_tuple_element_11);
            tmp_expression_value_369 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_369 == NULL)) {
                tmp_expression_value_369 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_369 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_369, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 35, tmp_tuple_element_11);
            tmp_expression_value_370 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_370 == NULL)) {
                tmp_expression_value_370 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_370 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_370, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 36, tmp_tuple_element_11);
            tmp_expression_value_371 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_371 == NULL)) {
                tmp_expression_value_371 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_371 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_371, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 37, tmp_tuple_element_11);
            tmp_expression_value_372 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_372 == NULL)) {
                tmp_expression_value_372 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_372 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_372, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 38, tmp_tuple_element_11);
            tmp_expression_value_373 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_373 == NULL)) {
                tmp_expression_value_373 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_373 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_373, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 39, tmp_tuple_element_11);
            tmp_expression_value_374 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_374 == NULL)) {
                tmp_expression_value_374 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_374 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_374, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 40, tmp_tuple_element_11);
            tmp_expression_value_375 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_375 == NULL)) {
                tmp_expression_value_375 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_375 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_375, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 41, tmp_tuple_element_11);
            tmp_expression_value_376 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_376 == NULL)) {
                tmp_expression_value_376 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_376 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_376, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 42, tmp_tuple_element_11);
            tmp_expression_value_377 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_377 == NULL)) {
                tmp_expression_value_377 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_377 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_377, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 43, tmp_tuple_element_11);
            tmp_expression_value_378 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_378 == NULL)) {
                tmp_expression_value_378 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_378 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_378, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 44, tmp_tuple_element_11);
            tmp_expression_value_379 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_379 == NULL)) {
                tmp_expression_value_379 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_379 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_379, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 45, tmp_tuple_element_11);
            tmp_expression_value_380 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_380 == NULL)) {
                tmp_expression_value_380 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_380 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_380, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 46, tmp_tuple_element_11);
            tmp_expression_value_381 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_381 == NULL)) {
                tmp_expression_value_381 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_381 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_381, mod_consts[20]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 47, tmp_tuple_element_11);
            tmp_expression_value_382 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_382 == NULL)) {
                tmp_expression_value_382 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_382 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_382, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 48, tmp_tuple_element_11);
            tmp_expression_value_383 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_383 == NULL)) {
                tmp_expression_value_383 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_383 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_383, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 49, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 50, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 51, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 52, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 53, tmp_tuple_element_11);
            tmp_expression_value_384 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_384 == NULL)) {
                tmp_expression_value_384 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_384 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_384, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 54, tmp_tuple_element_11);
            tmp_expression_value_385 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_385 == NULL)) {
                tmp_expression_value_385 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_385 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_385, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 55, tmp_tuple_element_11);
            tmp_expression_value_386 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_386 == NULL)) {
                tmp_expression_value_386 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_386 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_386, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 56, tmp_tuple_element_11);
            tmp_expression_value_387 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_387 == NULL)) {
                tmp_expression_value_387 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_387 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_387, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 57, tmp_tuple_element_11);
            tmp_expression_value_388 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_388 == NULL)) {
                tmp_expression_value_388 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_388 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_388, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 58, tmp_tuple_element_11);
            tmp_expression_value_389 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_389 == NULL)) {
                tmp_expression_value_389 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_389 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_389, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 59, tmp_tuple_element_11);
            tmp_expression_value_390 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_390 == NULL)) {
                tmp_expression_value_390 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_390 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_390, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 60, tmp_tuple_element_11);
            tmp_expression_value_391 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_391 == NULL)) {
                tmp_expression_value_391 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_391 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_391, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 61, tmp_tuple_element_11);
            tmp_expression_value_392 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_392 == NULL)) {
                tmp_expression_value_392 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_392 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_392, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 62, tmp_tuple_element_11);
            tmp_expression_value_393 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_393 == NULL)) {
                tmp_expression_value_393 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_393 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_393, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 63, tmp_tuple_element_11);
            tmp_expression_value_394 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_394 == NULL)) {
                tmp_expression_value_394 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_394 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_394, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 64, tmp_tuple_element_11);
            tmp_expression_value_395 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_395 == NULL)) {
                tmp_expression_value_395 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_395 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_395, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 65, tmp_tuple_element_11);
            tmp_expression_value_396 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_396 == NULL)) {
                tmp_expression_value_396 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_396 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_396, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 66, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 67, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 68, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[26];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 69, tmp_tuple_element_11);
            tmp_expression_value_397 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_397 == NULL)) {
                tmp_expression_value_397 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_397 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_397, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 70, tmp_tuple_element_11);
            tmp_expression_value_398 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_398 == NULL)) {
                tmp_expression_value_398 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_398 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_398, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 71, tmp_tuple_element_11);
            tmp_expression_value_399 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_399 == NULL)) {
                tmp_expression_value_399 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_399 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_399, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 72, tmp_tuple_element_11);
            tmp_expression_value_400 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_400 == NULL)) {
                tmp_expression_value_400 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_400 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_400, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 73, tmp_tuple_element_11);
            tmp_expression_value_401 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_401 == NULL)) {
                tmp_expression_value_401 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_401 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_401, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 74, tmp_tuple_element_11);
            tmp_expression_value_402 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_402 == NULL)) {
                tmp_expression_value_402 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_402 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_402, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 75, tmp_tuple_element_11);
            tmp_expression_value_403 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_403 == NULL)) {
                tmp_expression_value_403 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_403 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_403, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 76, tmp_tuple_element_11);
            tmp_expression_value_404 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_404 == NULL)) {
                tmp_expression_value_404 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_404 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_404, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 77, tmp_tuple_element_11);
            tmp_expression_value_405 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_405 == NULL)) {
                tmp_expression_value_405 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_405 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_405, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 78, tmp_tuple_element_11);
            tmp_expression_value_406 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_406 == NULL)) {
                tmp_expression_value_406 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_406 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_406, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 79, tmp_tuple_element_11);
            tmp_expression_value_407 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_407 == NULL)) {
                tmp_expression_value_407 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_407 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 634;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_407, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 634;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 80, tmp_tuple_element_11);
            tmp_expression_value_408 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_408 == NULL)) {
                tmp_expression_value_408 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_408 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 634;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_408, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 634;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 81, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 82, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 83, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 84, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 85, tmp_tuple_element_11);
            tmp_expression_value_409 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_409 == NULL)) {
                tmp_expression_value_409 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_409 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 634;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_409, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 634;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 86, tmp_tuple_element_11);
            tmp_expression_value_410 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_410 == NULL)) {
                tmp_expression_value_410 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_410 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 634;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_410, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 634;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 87, tmp_tuple_element_11);
            tmp_expression_value_411 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_411 == NULL)) {
                tmp_expression_value_411 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_411 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_411, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 88, tmp_tuple_element_11);
            tmp_expression_value_412 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_412 == NULL)) {
                tmp_expression_value_412 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_412 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_412, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 89, tmp_tuple_element_11);
            tmp_expression_value_413 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_413 == NULL)) {
                tmp_expression_value_413 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_413 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_413, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 90, tmp_tuple_element_11);
            tmp_expression_value_414 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_414 == NULL)) {
                tmp_expression_value_414 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_414 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_414, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 91, tmp_tuple_element_11);
            tmp_expression_value_415 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_415 == NULL)) {
                tmp_expression_value_415 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_415 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_415, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 92, tmp_tuple_element_11);
            tmp_expression_value_416 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_416 == NULL)) {
                tmp_expression_value_416 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_416 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_416, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 93, tmp_tuple_element_11);
            tmp_expression_value_417 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_417 == NULL)) {
                tmp_expression_value_417 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_417 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_417, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 94, tmp_tuple_element_11);
            tmp_expression_value_418 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_418 == NULL)) {
                tmp_expression_value_418 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_418 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_418, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 95, tmp_tuple_element_11);
            tmp_expression_value_419 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_419 == NULL)) {
                tmp_expression_value_419 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_419 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_419, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 96, tmp_tuple_element_11);
            tmp_expression_value_420 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_420 == NULL)) {
                tmp_expression_value_420 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_420 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_420, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 97, tmp_tuple_element_11);
            tmp_expression_value_421 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_421 == NULL)) {
                tmp_expression_value_421 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_421 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_421, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 98, tmp_tuple_element_11);
            tmp_expression_value_422 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_422 == NULL)) {
                tmp_expression_value_422 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_422 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_422, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 99, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 100, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 101, tmp_tuple_element_11);
            tmp_expression_value_423 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_423 == NULL)) {
                tmp_expression_value_423 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_423 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_423, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 102, tmp_tuple_element_11);
            tmp_expression_value_424 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_424 == NULL)) {
                tmp_expression_value_424 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_424 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_424, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 103, tmp_tuple_element_11);
            tmp_expression_value_425 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_425 == NULL)) {
                tmp_expression_value_425 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_425 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_425, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 104, tmp_tuple_element_11);
            tmp_expression_value_426 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_426 == NULL)) {
                tmp_expression_value_426 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_426 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_426, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 105, tmp_tuple_element_11);
            tmp_expression_value_427 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_427 == NULL)) {
                tmp_expression_value_427 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_427 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_427, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 106, tmp_tuple_element_11);
            tmp_expression_value_428 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_428 == NULL)) {
                tmp_expression_value_428 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_428 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_428, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 107, tmp_tuple_element_11);
            tmp_expression_value_429 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_429 == NULL)) {
                tmp_expression_value_429 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_429 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_429, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 108, tmp_tuple_element_11);
            tmp_expression_value_430 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_430 == NULL)) {
                tmp_expression_value_430 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_430 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_430, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 109, tmp_tuple_element_11);
            tmp_expression_value_431 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_431 == NULL)) {
                tmp_expression_value_431 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_431 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_431, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 110, tmp_tuple_element_11);
            tmp_expression_value_432 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_432 == NULL)) {
                tmp_expression_value_432 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_432 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_432, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 111, tmp_tuple_element_11);
            tmp_expression_value_433 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_433 == NULL)) {
                tmp_expression_value_433 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_433 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 638;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_433, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 638;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 112, tmp_tuple_element_11);
            tmp_expression_value_434 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_434 == NULL)) {
                tmp_expression_value_434 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_434 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 638;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_434, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 638;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 113, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 114, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 115, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 116, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 117, tmp_tuple_element_11);
            tmp_expression_value_435 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_435 == NULL)) {
                tmp_expression_value_435 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_435 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 638;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_435, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 638;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 118, tmp_tuple_element_11);
            tmp_expression_value_436 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_436 == NULL)) {
                tmp_expression_value_436 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_436 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 638;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_436, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 638;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 119, tmp_tuple_element_11);
            tmp_expression_value_437 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_437 == NULL)) {
                tmp_expression_value_437 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_437 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_437, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 120, tmp_tuple_element_11);
            tmp_expression_value_438 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_438 == NULL)) {
                tmp_expression_value_438 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_438 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_438, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 121, tmp_tuple_element_11);
            tmp_expression_value_439 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_439 == NULL)) {
                tmp_expression_value_439 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_439 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_439, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 122, tmp_tuple_element_11);
            tmp_expression_value_440 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_440 == NULL)) {
                tmp_expression_value_440 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_440 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_440, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 123, tmp_tuple_element_11);
            tmp_expression_value_441 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_441 == NULL)) {
                tmp_expression_value_441 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_441 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_441, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 124, tmp_tuple_element_11);
            tmp_expression_value_442 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_442 == NULL)) {
                tmp_expression_value_442 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_442 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_442, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 125, tmp_tuple_element_11);
            tmp_expression_value_443 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_443 == NULL)) {
                tmp_expression_value_443 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_443 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_443, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 126, tmp_tuple_element_11);
            tmp_expression_value_444 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_444 == NULL)) {
                tmp_expression_value_444 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_444 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_444, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 127, tmp_tuple_element_11);
            tmp_expression_value_445 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_445 == NULL)) {
                tmp_expression_value_445 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_445 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_445, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 128, tmp_tuple_element_11);
            tmp_expression_value_446 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_446 == NULL)) {
                tmp_expression_value_446 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_446 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_446, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 129, tmp_tuple_element_11);
            tmp_expression_value_447 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_447 == NULL)) {
                tmp_expression_value_447 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_447 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_447, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 130, tmp_tuple_element_11);
            tmp_expression_value_448 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_448 == NULL)) {
                tmp_expression_value_448 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_448 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_448, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 131, tmp_tuple_element_11);
            tmp_expression_value_449 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_449 == NULL)) {
                tmp_expression_value_449 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_449 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_449, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 132, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 133, tmp_tuple_element_11);
            tmp_expression_value_450 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_450 == NULL)) {
                tmp_expression_value_450 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_450 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_450, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 134, tmp_tuple_element_11);
            tmp_expression_value_451 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_451 == NULL)) {
                tmp_expression_value_451 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_451 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_451, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 135, tmp_tuple_element_11);
            tmp_expression_value_452 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_452 == NULL)) {
                tmp_expression_value_452 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_452 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_452, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 136, tmp_tuple_element_11);
            tmp_expression_value_453 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_453 == NULL)) {
                tmp_expression_value_453 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_453 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_453, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 137, tmp_tuple_element_11);
            tmp_expression_value_454 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_454 == NULL)) {
                tmp_expression_value_454 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_454 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_454, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 138, tmp_tuple_element_11);
            tmp_expression_value_455 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_455 == NULL)) {
                tmp_expression_value_455 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_455 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_455, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 139, tmp_tuple_element_11);
            tmp_expression_value_456 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_456 == NULL)) {
                tmp_expression_value_456 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_456 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_456, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 140, tmp_tuple_element_11);
            tmp_expression_value_457 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_457 == NULL)) {
                tmp_expression_value_457 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_457 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_457, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 141, tmp_tuple_element_11);
            tmp_expression_value_458 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_458 == NULL)) {
                tmp_expression_value_458 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_458 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_458, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 142, tmp_tuple_element_11);
            tmp_expression_value_459 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_459 == NULL)) {
                tmp_expression_value_459 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_459 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_459, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 143, tmp_tuple_element_11);
            tmp_expression_value_460 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_460 == NULL)) {
                tmp_expression_value_460 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_460 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 642;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_460, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 642;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 144, tmp_tuple_element_11);
            tmp_expression_value_461 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_461 == NULL)) {
                tmp_expression_value_461 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_461 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 642;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_461, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 642;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 145, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[101];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 146, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[101];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 147, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[101];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 148, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[101];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 149, tmp_tuple_element_11);
            tmp_expression_value_462 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_462 == NULL)) {
                tmp_expression_value_462 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_462 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 642;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_462, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 642;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 150, tmp_tuple_element_11);
            tmp_expression_value_463 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_463 == NULL)) {
                tmp_expression_value_463 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_463 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 642;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_463, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 642;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 151, tmp_tuple_element_11);
            tmp_expression_value_464 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_464 == NULL)) {
                tmp_expression_value_464 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_464 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_464, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 152, tmp_tuple_element_11);
            tmp_expression_value_465 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_465 == NULL)) {
                tmp_expression_value_465 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_465 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_465, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 153, tmp_tuple_element_11);
            tmp_expression_value_466 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_466 == NULL)) {
                tmp_expression_value_466 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_466 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_466, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 154, tmp_tuple_element_11);
            tmp_expression_value_467 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_467 == NULL)) {
                tmp_expression_value_467 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_467 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_467, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 155, tmp_tuple_element_11);
            tmp_expression_value_468 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_468 == NULL)) {
                tmp_expression_value_468 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_468 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_468, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 156, tmp_tuple_element_11);
            tmp_expression_value_469 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_469 == NULL)) {
                tmp_expression_value_469 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_469 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_469, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 157, tmp_tuple_element_11);
            tmp_expression_value_470 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_470 == NULL)) {
                tmp_expression_value_470 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_470 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_470, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 158, tmp_tuple_element_11);
            tmp_expression_value_471 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_471 == NULL)) {
                tmp_expression_value_471 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_471 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_471, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 159, tmp_tuple_element_11);
            tmp_expression_value_472 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_472 == NULL)) {
                tmp_expression_value_472 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_472 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_472, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 160, tmp_tuple_element_11);
            tmp_expression_value_473 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_473 == NULL)) {
                tmp_expression_value_473 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_473 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_473, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 161, tmp_tuple_element_11);
            tmp_expression_value_474 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_474 == NULL)) {
                tmp_expression_value_474 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_474 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_474, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 162, tmp_tuple_element_11);
            tmp_expression_value_475 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_475 == NULL)) {
                tmp_expression_value_475 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_475 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_475, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 163, tmp_tuple_element_11);
            tmp_expression_value_476 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_476 == NULL)) {
                tmp_expression_value_476 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_476 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_476, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 164, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[101];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 165, tmp_tuple_element_11);
            tmp_expression_value_477 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_477 == NULL)) {
                tmp_expression_value_477 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_477 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_477, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 166, tmp_tuple_element_11);
            tmp_expression_value_478 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_478 == NULL)) {
                tmp_expression_value_478 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_478 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_478, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 167, tmp_tuple_element_11);
            tmp_expression_value_479 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_479 == NULL)) {
                tmp_expression_value_479 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_479 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_479, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 168, tmp_tuple_element_11);
            tmp_expression_value_480 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_480 == NULL)) {
                tmp_expression_value_480 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_480 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_480, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 169, tmp_tuple_element_11);
            tmp_expression_value_481 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_481 == NULL)) {
                tmp_expression_value_481 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_481 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_481, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 170, tmp_tuple_element_11);
            tmp_expression_value_482 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_482 == NULL)) {
                tmp_expression_value_482 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_482 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_482, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 171, tmp_tuple_element_11);
            tmp_expression_value_483 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_483 == NULL)) {
                tmp_expression_value_483 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_483 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_483, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 172, tmp_tuple_element_11);
            tmp_expression_value_484 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_484 == NULL)) {
                tmp_expression_value_484 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_484 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_484, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 173, tmp_tuple_element_11);
            tmp_expression_value_485 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_485 == NULL)) {
                tmp_expression_value_485 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_485 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_485, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 174, tmp_tuple_element_11);
            tmp_expression_value_486 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_486 == NULL)) {
                tmp_expression_value_486 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_486 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_486, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 175, tmp_tuple_element_11);
            tmp_expression_value_487 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_487 == NULL)) {
                tmp_expression_value_487 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_487 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_487, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 176, tmp_tuple_element_11);
            tmp_expression_value_488 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_488 == NULL)) {
                tmp_expression_value_488 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_488 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_488, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 177, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[101];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 178, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[101];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 179, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[101];
            PyTuple_SET_ITEM0(tmp_assign_source_48, 180, tmp_tuple_element_11);
            tmp_expression_value_489 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_489 == NULL)) {
                tmp_expression_value_489 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_489 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_489, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 181, tmp_tuple_element_11);
            tmp_expression_value_490 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_490 == NULL)) {
                tmp_expression_value_490 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_490 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_490, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 182, tmp_tuple_element_11);
            tmp_expression_value_491 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_491 == NULL)) {
                tmp_expression_value_491 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_491 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_491, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 183, tmp_tuple_element_11);
            tmp_expression_value_492 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_492 == NULL)) {
                tmp_expression_value_492 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_492 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_492, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 184, tmp_tuple_element_11);
            tmp_expression_value_493 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_493 == NULL)) {
                tmp_expression_value_493 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_493 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_493, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 185, tmp_tuple_element_11);
            tmp_expression_value_494 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_494 == NULL)) {
                tmp_expression_value_494 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_494 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_494, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 186, tmp_tuple_element_11);
            tmp_expression_value_495 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_495 == NULL)) {
                tmp_expression_value_495 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_495 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_495, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 187, tmp_tuple_element_11);
            tmp_expression_value_496 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_496 == NULL)) {
                tmp_expression_value_496 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_496 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_496, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 188, tmp_tuple_element_11);
            tmp_expression_value_497 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_497 == NULL)) {
                tmp_expression_value_497 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_497 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_497, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 189, tmp_tuple_element_11);
            tmp_expression_value_498 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_498 == NULL)) {
                tmp_expression_value_498 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_498 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_498, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 190, tmp_tuple_element_11);
            tmp_expression_value_499 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_499 == NULL)) {
                tmp_expression_value_499 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_499 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_499, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 191, tmp_tuple_element_11);
            tmp_expression_value_500 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_500 == NULL)) {
                tmp_expression_value_500 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_500 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_500, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 192, tmp_tuple_element_11);
            tmp_expression_value_501 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_501 == NULL)) {
                tmp_expression_value_501 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_501 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_501, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 193, tmp_tuple_element_11);
            tmp_expression_value_502 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_502 == NULL)) {
                tmp_expression_value_502 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_502 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_502, mod_consts[18]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 194, tmp_tuple_element_11);
            tmp_expression_value_503 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_503 == NULL)) {
                tmp_expression_value_503 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_503 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_503, mod_consts[18]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 195, tmp_tuple_element_11);
            tmp_expression_value_504 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_504 == NULL)) {
                tmp_expression_value_504 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_504 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_504, mod_consts[18]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 196, tmp_tuple_element_11);
            tmp_expression_value_505 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_505 == NULL)) {
                tmp_expression_value_505 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_505 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_505, mod_consts[18]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 197, tmp_tuple_element_11);
            tmp_expression_value_506 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_506 == NULL)) {
                tmp_expression_value_506 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_506 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_506, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 198, tmp_tuple_element_11);
            tmp_expression_value_507 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_507 == NULL)) {
                tmp_expression_value_507 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_507 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_507, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 199, tmp_tuple_element_11);
            tmp_expression_value_508 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_508 == NULL)) {
                tmp_expression_value_508 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_508 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_508, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 200, tmp_tuple_element_11);
            tmp_expression_value_509 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_509 == NULL)) {
                tmp_expression_value_509 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_509 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_509, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 201, tmp_tuple_element_11);
            tmp_expression_value_510 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_510 == NULL)) {
                tmp_expression_value_510 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_510 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_510, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 202, tmp_tuple_element_11);
            tmp_expression_value_511 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_511 == NULL)) {
                tmp_expression_value_511 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_511 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_511, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 203, tmp_tuple_element_11);
            tmp_expression_value_512 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_512 == NULL)) {
                tmp_expression_value_512 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_512 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_512, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 204, tmp_tuple_element_11);
            tmp_expression_value_513 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_513 == NULL)) {
                tmp_expression_value_513 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_513 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_513, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 205, tmp_tuple_element_11);
            tmp_expression_value_514 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_514 == NULL)) {
                tmp_expression_value_514 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_514 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_514, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 206, tmp_tuple_element_11);
            tmp_expression_value_515 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_515 == NULL)) {
                tmp_expression_value_515 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_515 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_515, mod_consts[17]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 207, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_assign_source_48);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_dict_key_11 = mod_consts[24];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_50 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_50, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[25];
        tmp_dict_value_11 = mod_consts[107];
        tmp_res = PyDict_SetItem(tmp_assign_source_50, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[27];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        assert(!(tmp_dict_value_11 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_50, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[28];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        assert(!(tmp_dict_value_11 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_50, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[29];
        tmp_dict_value_11 = mod_consts[108];
        tmp_res = PyDict_SetItem(tmp_assign_source_50, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_50);
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        tmp_ass_subvalue_11 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subvalue_11 == NULL)) {
            tmp_ass_subvalue_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_ass_subvalue_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_11 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_11 == NULL)) {
            tmp_ass_subscribed_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_ass_subscribed_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_11 = mod_consts[109];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_881c7b02ea188e3f155b555b505f1f7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_881c7b02ea188e3f155b555b505f1f7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_881c7b02ea188e3f155b555b505f1f7a, exception_lineno);
    }



    assertFrameObject(frame_881c7b02ea188e3f155b555b505f1f7a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("chardet$mbcssm", false);

    Py_INCREF(module_chardet$mbcssm);
    return module_chardet$mbcssm;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("chardet$mbcssm", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
