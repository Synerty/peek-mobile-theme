.. _other_useful_styles:

===================
Other Useful Styles
===================

Peek Theme is applied to bootstrap and some newly created classes as not all Peek Plugins
require specific style configurations.

Most of the Peek Plugin Screens will use the generic bootstrap classes.

These classes are available throughout Peek and attribute changes are found in
:file:`_bootstrap_adjustments.scss`.


Title
-----

Generic Peek theme Title.

::

        .title{
        /* Applies the title theme */

            ...

        }


Headings
--------

Generic Headings 1 through to 6.

`Bootstrap Headings <http://getbootstrap.com/css/#type-headings>`_

::

        .h1{
        /* Applies the heading theme */

            ...

        }
        .h2{
        /* Applies the heading theme */

            ...

        }
        .h3{
        /* Applies the heading theme */

            ...

        }
        .h4{
        /* Applies the heading theme */

            ...

        }
        .h5{
        /* Applies the heading theme */

            ...

        }
        .h6{
        /* Applies the heading theme */

            ...

        }


Text
----

Generic Peek theme Text.

::

        .p{
        /* Applies the text theme */

            ...

        }


Buttons
-------

Generic Peek theme buttons.

::

        .btn{
        /* Applies the Plugin Screen button theme */

            ...

        }


.. _other_useful_styles+contextual_backgrounds:

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
