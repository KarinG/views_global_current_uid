<?php

/**
 * @file
 * Definition of views_global_current_uid_handler_field_uid.
 */

/**
 * A handler to provide a field that is completely custom by the administrator.
 *
 * @ingroup views_field_handlers
 */
class views_global_current_uid_handler_field_crm_id extends views_global_current_uid_handler_field_uid {

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    return views_global_current_uid_get_civicrm_id();
  }

}
