.. _noop:

====
Noop
====


Looks Classes
-------------

The Noop looks classes are found in the :file:`_plugin_noop.scss`.

The :code:`.plugin-noop` class contain the classes specific to the
Inbox.

::

        .plugin-noop{
        /* Contains the Noop screen looks classes */
            ...

            .title{
            /* Contains the navigation tabs looks attributes unique to Noop plugin */
                ...

            }
            .description{
            /* Contains the description text looks attributes unique to Noop plugin */
              ...

            }
            .btn{
            /* Contains the buttons looks attributes unique to Noop plugin */
              ...

            }
        }


HTML
````

::

        <div class="plugin-noop">
        <div class="title text-center">No Operation Peek App</div>
        <div class="title">User App</div>
        <div class="title"> Angular2 Lazy Loaded Plugin</div>
        <div class="description">From Server : 2017-05-09 23:12:16.046228</div>

        <button class="btn" type="button">Show success balloon
        </button>
        <button class="btn" type="button">Show info dialog
        </button>
        </div>


Layout
------


HTML
````

The Inbox HTML layout classes are found in the
:file:`_plugin_noop.web.scss`.


NativeScript
````````````

The Inbox NativeScript layout classes are found in the
:file:`_plugin_noop.ns.scss`.
