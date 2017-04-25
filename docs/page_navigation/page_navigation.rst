.. _page_navigation:

===============
Page Navigation
===============

Page Navigation is dynamic and exists if required by the plugin.  The contents of the
Page Navigation is constructed from the plugin.

The Page Navigation is located below the :ref:`title_bar`, above the page.

The buttons remain a fixed size throughout a responsive lifecycle.  The buttons are
sized around the text they contain.

.. note:: The buttons require a different theme to the :ref:`title_bar`.


Looks Classes
-------------

Contains the following looks classes:

*  :code:`.btn-group`

*  :code:`.btn`

The :code:`.btn-group` and :code:`.btn` classes will not have a hierarchy and will be
used throughout peek platform.  These looks classes attribute changes are found in
:file:`_bootstrap_adjustments.scss`.


Layout
------


HTML Layout
```````````

The Page Navigation HTML layout classes are found in the
:file:`_page_navigation.web.scss`.


Display Sample
``````````````

The following image shows a button group :code:`.btn-group` on the left and a button
group on the right.

.. image:: /page_navigation/page_navigation-detail_data_page.web.jpg
  :align: center

The following image shows a button group on the left.

.. image:: /page_navigation/page_navigation-table_data_page.web.jpg
  :align: center

The following image shows a button :code:`btn` on the left.

.. image:: /page_navigation/page_navigation-plugin_chat_list.web.jpg
  :align: center
