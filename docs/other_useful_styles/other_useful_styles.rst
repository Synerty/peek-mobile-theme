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

        .title {
        /* Applies the title theme */
            ...

        }


Headings
--------

Generic Headings 1 through to 6.

`Bootstrap Headings <http://getbootstrap.com/css/#type-headings>`_

 ::

        .h1 {
        /* Applies the heading theme */
            ...

        }
        .h2 {
        /* Applies the heading theme */
            ...

        }
        .h3 {
        /* Applies the heading theme */
            ...

        }
        .h4 {
        /* Applies the heading theme */
            ...

        }
        .h5 {
        /* Applies the heading theme */
            ...

        }
        .h6 {
        /* Applies the heading theme */
            ...

        }


Text
----

Generic Peek theme Text.

 ::

        .p {
        /* Applies the text theme */
            ...

        }


Divider
-------

The divider is styled as per the peek theme and can be used throughout the peek app.

The <hr> tag defines a thematic break in the HTML app.

The <StackLayout class="hr"> element defines the thematic break in the NativeScript app.

 ::

        .hr {
        /* Applies the line divider theme */
            ...

        }


.. _other_useful_styles_contextual_backgrounds:

Contextual Backgrounds
----------------------

Set the background of an element to any contextual class.

`Bootstrap Contextual Backgrounds <http://getbootstrap.com/css/#helper-classes-backgrounds>`_

`NativeScript Contextual Colors <https://docs.nativescript.org/ui/theme#contextual-colors>`_

.. note:: Only :code:`bg-primary` and :code:`bg-danger` exist in the NativeScript
    Styling Infrastructure.  The other classes need their attributes created from
    scratch to function in NativeScript.

 ::


        .bg-primary{
        /* Applies the primary background theme */
            ...

        }
        .bg-success{
        /* Applies the success background theme */
            ...

        }
        .bg-info{
        /* Applies the info background theme */
            ...

        }
        .bg-warning{
        /* Applies the warning background theme */
            ...

        }
        .bg-danger{
        /* Applies the danger background theme */
            ...

        }


Button
------

Generic Peek theme button.

`Bootstrap button example <http://getbootstrap.com/components/#btn-groups-single>`_

`NativeScript Button <https://docs.nativescript.org/angular/code-samples/ui/button.html#button>`_

 ::

        .btn {
        /*  Contains the generic button attributes */
            ...

        }


For using Icons in buttons see :ref:`font_awesome_icons_in_buttons`


.. _other_useful_styles_contextual_buttons:

Contextual Buttons
------------------

Modify the button background colour and/or text colour of any button element.

`Bootstrap Contextual Buttons <http://getbootstrap.com/css/#buttons-options>`_

`NativeScript Contextual Colors <https://docs.nativescript.org/ui/theme#contextual-colors>`_

.. note:: These classes need their attributes created from scratch to function in
    NativeScript.

Contextual button classes: ::

        .btn-primary {
        /* Applies the primary button theme */
            ...

        }

        .btn-success {
        /* Applies the success button theme */
            ...

        }

        .btn-info {
        /* Applies the info button theme */
            ...

        }

        .btn-warning {
        /* Applies the warning button theme */
            ...

        }

        .btn-danger {
        /* Applies the danger button theme */
            ...

        }

