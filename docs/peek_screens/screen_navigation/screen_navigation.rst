.. _screen_navigation:

=================
Screen Navigation
=================

Screen Navigation is dynamic and exists if required by the plugin.  The contents of the
Screen Navigation is constructed from the plugin.

The Screen Navigation is located below the :ref:`title_bar`, above the screen.

The buttons remain a fixed size throughout a responsive lifecycle.  The buttons are
sized around the text they contain.

.. note:: The buttons require a different theme to the :ref:`title_bar`.


Looks Classes
-------------

The :code:`.btn-group`, :code:`.btn` and :code:`.nav-tabs` classes will not have a
hierarchy
and will be used throughout Peek.  These looks classes attribute changes are found in
:file:`_bootstrap_adjustments.scss`.


HTML Layout
-----------

The Screen Navigation HTML layout classes are found in the
:file:`_screen_navigation.web.scss`.


Display Sample
--------------


Buttons
```````

The following example shows a button group :code:`.btn-group` on the left and a button
group on the right.

HTML: ::

        <div class="btn-group pull-left" role="group" aria-label="">
            <button class="btn" role="group" aria-label="">My Jobs</button>
            <button class="btn" role="group" aria-label="">Job</button>
            <button class="btn" role="group" aria-label="">Operations</button>
        </div>
        <div class="btn-group pull-right" role="group" aria-label="">
            <button class="btn" role="group" aria-label="">&lt;</button>
            <button class="btn" role="group" aria-label="">&gt;</button>
        </div>


.. image:: ./screen_navigation-detail_data_screen.web.jpg

The following example shows a button group on the left.

HTML: ::

        <div class="btn-group" role="group" aria-label="">
            <button class="btn">My Jobs</button>
            <button class="btn">&lt; Job J-5102-C</button>
        </div>


.. image:: ./screen_navigation-table_data_screen.web.jpg

The following example shows a button :code:`.btn` on the left.

HTML: ::

        <button class="btn">New Chat</button>


.. image:: ./screen_navigation-plugin_chat_list.web.jpg


Tabs
````

The following example shows tabs :code:`.nav-tabs`.

HTML: ::

        <ul class="nav nav-tabs" role="tablist">
            <li class="active" role="presentation">
                <a aria-controls="home" data-toggle="tab" href="http://localhost:4200/#activeTaskTasks" role="tab">Tasks</a>
            </li>
            <li role="presentation">
                <a aria-controls="profile" data-toggle="tab" href="http://localhost:4200/#activeTaskActivity" role="tab">Activity</a>
            </li>
        </ul>


.. image:: ./screen_navigation-tabs.web.jpg
