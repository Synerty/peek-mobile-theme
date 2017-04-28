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

          .background-image{
          <!-- Contains the Background looks attributes unique to the Home Screen -->

          ...

          }

          .home-icon{
          <!-- Contains the Button looks attributes unique to the Home Screen -->

          ...

          }

          .home-title{
          <!-- Contains the Button Title looks attributes unique to the Home Screen -->

          ...

          }
        }


Background :code:`.background-image`
````````````````````````````````````

Home Screen background is unique and different to other screens.

The :code:`background-image` class needs to be applied in the screen and cannot use the
:code:`body` tag.

.. image:: ./home_background.png
   :align: center


Buttons :code:`.home-icon`
``````````````````````````

Buttons on the Home Screen strictly use images.

Buttons responsively wrap.


Button Title :code:`.home-title`
````````````````````````````````

The button title looks attributes.


Layout
------

HTML:

The Home Screen HTML layout classes are found in the
:file:`_home_screen.web.scss`.

NativeScript:

The Home Screen NativeScript layout classes are found in the
:file:`_home_screen.ns.scss`.


Display Samples
---------------

HTML: ::

        <div class="peek-home-screen">
          <div class="col-lg-2 col-md-3 col-sm-4 col-xs-6 home-icon">
            <a>
              <img class="image" src="...">
              <div class="home-title">
                ...

              </div>
            </a>
          </div>
        </div>


.. image:: ./home_screen-button.web.jpg

NativeScript: ::

        <GridLayout Class="peek-home-screen">
          <GridLayout class="home-icon">
            <Image src="...">

            </Image>
            <Label class="home-title"
                   [text]="...">

            </Label>
          </GridLayout>
        </GridLayout>

