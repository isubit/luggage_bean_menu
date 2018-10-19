<nav role="navigation" class="bean-menu <?php print $bean->field_menu_orientation['und'][0]['value'] ?>">

  <?php print render($title_suffix) ?>
  
  <?php if ($bean->field_menu_link) :?>
    <ul class="bean-menu_list">
      <?php $items = field_get_items('bean', $bean, 'field_menu_link');
      foreach ($items as $item) {
        echo'<li><a href="' . $item['url'] . '">' . $item['title'] . '</a></li>';
      } ?>
    </ul>
  <?php endif ?>
</nav>