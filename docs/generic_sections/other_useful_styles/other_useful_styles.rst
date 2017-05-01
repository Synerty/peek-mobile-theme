.. _other_useful_styles:

===================
Other Useful Styles
===================

These classes are available throughout Peek and attribute changes are found in
:file:`_bootstrap_adjustments.scss`.


Contextual Backgrounds
----------------------

Set the background of an element to any contextual class.

`Bootstrap Contextual Backgrounds <http://getbootstrap.com/css/#helper-classes-backgrounds>`_

`NativeScript Contextual Backgrounds <https://docs.nativescript.org/ui/theme#contextual-colors>`_

.. note:: Only :code:`bg-primary` and :code:`bg-danger` exist in the NativeScript
    Styling Infrastructure.  The other classes need their attributes created from
    scratch to function in NativeScript.

::

        .bg-primary{
        /* Applies the primary background theme */

            color: #fff;
            background-color: #337ab7;

            ...

        }
        .bg-success{
        /* Applies the success background theme */

            background-color: #dff0d8;

            ...

        }
        .bg-info{
        /* Applies the info background theme */

            background-color: #d9edf7;

            ...

        }
        .bg-warning{
        /* Applies the warning background theme */

            background-color: #fcf8e3;

            ...

        }
        .bg-danger{
        /* Applies the danger background theme */

            background-color: #f2dede;

            ...

        }
