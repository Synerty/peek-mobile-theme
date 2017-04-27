.. _home_screen:

===========
Home Screen
===========

The Home Screen is a unique screen in Peek that displays a link to to available plugins
that have front-ends.


Looks Classes
-------------

The Home Screen looks classes are found in the :file:`_home_screen.scss`.


Home Screen :code:`.peek-home-screen`
`````````````````````````````````````

The :code:`.peek-home-screen` class will contain the classes specific to the Home Screen.

::

        .peek-home-screen{

          .background-image{
          }

          .home-icon{
          }
        }


Background :code:`.background-image`
````````````````````````````````````

Home Screen background is unique and different to other screens.

The :code:`background-image` class needs to be applied in the screen and cannot use the
:code:`body` tag.

.. image:: ./home_background.png


Buttons :code:`.home-icon`
``````````````````````````

Buttons on the Home Screen strictly use images.

Buttons responsively wrap.

HTML: ::

        <div class="col-lg-2 col-md-3 col-sm-4 col-xs-6 home-icon">
          <a ng-reflect-router-link="/peek_plugin_tutorial" href="/peek_plugin_tutorial">
            <img class="image" src="/assets/peek_plugin_tutorial/icon.png">
            <p class="text-center h3">
              Tutorial Plugin

            </p>
          </a>
        </div>


NativeScript: ::

        <GridLayout class="home-icon"
                    *ngFor="let app of appDetails"
                    rows="*,auto" columns="*"
                    [nsRouterLink]="[app.resourcePath]">
          <Image row="0" col="0"
                 src="~{{app.pluginIconPath}}">

          </Image>
          <Label class="text-center h3"
                 row="1" col="0"
                 [text]="app.title">

          </Label>
        </GridLayout>


.. image:: ./home_screen-button.web.jpg


HTML Layout
-----------

The Home Screen HTML layout classes are found in the :file:`_home_screen.web.scss`.


Home Screen Example
-------------------

.. image:: ./home_screen.web.jpg
