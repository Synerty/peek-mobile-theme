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
        /*
            Contains the Home Screen looks classes
            Contains the Background looks attributes
            Home Screen background is unique and different to other screens
            Cannot use the body tag
        */
            ...

            .container-fluid{
            /* Contains the container looks attributes unique to the Home Screen */

                ...

            }

            .row{
            /* Contains the row looks attributes unique to the Home Screen */

                ...

            }

            .icon{
            /*
                Contains the Button looks attributes unique to the Home Screen
                Buttons responsively wrap
            */
                ...

            }
            .image{
            /*
                Contains the Image looks attributes unique to the Home Screen
                Strictly uses images
            */
                ...

            }
            .title{
            /* Contains the Button Title looks attributes unique to the Home Screen */
                ...

            }
        }


Background Image
~~~~~~~~~~~~~~~~

.. image:: ./home_background.png
   :align: center


HTML
~~~~

::

        <div class="peek-home-screen">
            <div class="container-fluid">
                <div class="row">
                    <div class="icon">
                        <a ng-reflect-router-link="/peek_plugin_noop"
                           ng-reflect-href="/peek_plugin_noop"
                           href="http://localhost:4200/peek_plugin_noop">
                            <img class="image" src="../images/home_messages.png">
                            <div class="title">Messages</div>
                        </a>
                    </div>
                    <div class="icon">
                        <a ng-reflect-router-link="/peek_plugin_noop"
                           ng-reflect-href="/peek_plugin_noop"
                           href="http://localhost:4200/peek_plugin_noop">
                            <img class="image" src="../images/home_testing_noop.png">
                            <div class="title">Testing Noop</div>
                        </a>
                    </div>
                    <div class="icon">
                        <a ng-reflect-router-link="/peek_plugin_pof_field_switching"
                           ng-reflect-href="/peek_plugin_pof_field_switching"
                           href="http://localhost:4200/peek_plugin_pof_field_switching">
                            <img class="image" src="../images/home_field_switching.png">
                            <div class="title">Field Switching</div>
                        </a>
                    </div>
                    <div class="icon">
                        <a ng-reflect-router-link="/peek_plugin_user"
                           ng-reflect-href="/peek_plugin_user"
                           href="http://localhost:4200/peek_plugin_user">
                            <img class="image" src="../images/login_logout.png">
                            <div class="title">Login / Logout</div>
                        </a>
                    </div>
                </div>
            </div>
        </div>


NativeScript
~~~~~~~~~~~~

::

        <ScrollView class="peek-home-screen"
            ...

        </ScrollView>


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
