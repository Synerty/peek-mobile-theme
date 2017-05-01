.. _home_screen:

===========
Home Screen
===========

The Home Screen is a unique screen in Peek that displays a link to to available plugins
that have front-ends.

.. image:: ./home_screen.web.jpg
   :align: center


Looks Classes
-------------

The Home Screen looks classes are found in the :file:`_home_screen.scss`.


Home Screen :code:`.peek-home-screen`
`````````````````````````````````````

The :code:`.peek-home-screen` class will contain the classes specific to the Home Screen.

::

        .peek-home-screen{
        <!-- Contains the Home Screen looks classes -->
            ...

            .plugin-icon{
            <!--
                Contains the Button looks attributes unique to the Home Screen
                Buttons responsively wrap
            -->
                ...

            }
            .plugin-image{
            <!--
                Contains the Image looks attributes unique to the Home Screen
                Strictly uses images
            -->
                ...

            }
            .plugin-title{
            <!-- Contains the Button Title looks attributes unique to the Home Screen -->
                ...

            }
        }

        .background-image{
        <!--
            Contains the Background looks attributes
            Home Screen background is unique and different to other screens
            Cannot use the body tag
        -->
            ...

        }


Background :code:`.background-image`
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. image:: ./home_background.png
   :align: center


Layout
------


HTML
````

The Home Screen HTML layout classes are found in the
:file:`_home_screen.web.scss`.

NativeScript
````````````

The Home Screen NativeScript layout classes are found in the
:file:`_home_screen.ns.scss`.


Display Samples
---------------


HTML
````

::

        <div class="peek-home-screen">
            <div class="col-lg-2 col-md-3 col-sm-4 col-xs-6 plugin-icon">
                <a>
                    <img class="plugin-image" src="..."></img>
                    <div class="plugin-title">
                        ...

                    </div>
                </a>
            </div>
        </div>


.. image:: ./home_screen-button.web.jpg


NativeScript
````````````

::

        <GridLayout Class="peek-home-screen">
            <GridLayout class="plugin-icon">
                <Image class="plugin-image"
                       src="...">

                </Image>
                <Label class="plugin-title"
                       [text]="...">

                </Label>
            </GridLayout>
        </GridLayout>

